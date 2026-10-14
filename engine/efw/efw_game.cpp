#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "monsters.h"
#include "weapons.h"
#include "player.h"
#include "gamerules.h"
#include "efw/efw.h"

// Recovered from EscapeFromWoomera.dll and linked into the Spirit of Half-Life
// SDK. Hope is float slot 1. FUN_100c6740 stores 80 at startup. Each server
// frame FUN_100c6a70 writes min(max(gpGlobals->time - last, 0), 0.2) into
// DAT_10134874, and FUN_100c6ad0 does clamp(hope - step * (1/12), 0, 100).
// Menu bytes 0x3f and 0x43 add 15. Stashing the pliers adds 10. The electrician
// catching that stash subtracts 2. efw_GetPackage adds 10 and gives the phone
// and the washing powder.

static const float HOPE_MAX = 100.0f;
static const float HOPE_START = 80.0f;
static const float HOPE_DECAY = 1.0f / 12.0f;
static const float HOPE_MAX_STEP = 0.2f;
static const float HOPE_BONUS = 15.0f;
static const float HOPE_BIN_BONUS = 10.0f;
static const float HOPE_PACKAGE = 10.0f;
static const float HOPE_GHOLAN = 10.0f;
static const float HOPE_CAUGHT = 2.0f;
static const float TALK_RADIUS = 123.0f;
// FUN_100c59c0: distance under 256, or the electrician's facing cone under 35 degrees.
static const float ELEC_SEE_DIST = 256.0f;
static const float ELEC_SEE_ANGLE = 0.61086476f;
// FUN_100c5c50: patrol guards see out to 512 units inside a 60 degree cone.
static const float GUARD_SEE_DIST = 512.0f;
static const float GUARD_SEE_ANGLE = 1.0471976f;

static const char *SCRIPT_FILES[] = {
	"Amir", "Detainee", "Electrician", "Elika", "Fashid", "Gate_Guard", "Gholan",
	"Hassan", "Kitchen_Guard", "Laleh", "Mail_Officer", "Misc", "Misc_Guard",
	"Mouhtaz", "Nasir", "Roster_Officer", "Shala", NULL
};

enum { MAX_SCRIPTS = 20, MAX_ENTRIES = 48, MAX_ANSWERS = 8, MAX_TOPICS = 48, MAX_SEEN = 160, MAX_DIARY = 32 };

struct EfwAnswer {
	char flags[48];
	char text[480];
	char commands[160];
};

struct EfwEntry {
	char topic[32];
	char flags[48];
	char question[240];
	EfwAnswer answers[MAX_ANSWERS];
	int nanswers;
};

struct EfwScript {
	char name[32];
	EfwEntry entries[MAX_ENTRIES];
	int nentries;
};

struct EfwTopic {
	char name[32];
	int on;
};

static EfwScript g_scripts[MAX_SCRIPTS];
static int g_nscripts = 0;
static EfwTopic g_topics[MAX_TOPICS];
static int g_ntopics = 0;
static char g_seen[MAX_SEEN][72];
static int g_nseen = 0;
static int g_diary[MAX_DIARY];
static int g_ndiary = 0;
static int g_diaryIndex = 1;
static int g_diaryOpen = 0;
static int g_diaryReady = 0;
static float g_hope = HOPE_START;
static int g_loaded = 0;
static int g_gaveTag = 0;
static int g_tagOnBoard = 0;
static int g_pliersInBin = 0;
static int g_binFails = 0;
static int g_ending = 0;
static int g_board = 0;
static int g_hopeDead = 0;
static int g_caught = 0;
static char g_capLines[8][80];
static int g_capN = 0;
static float g_capUntil = 0;
static int g_msgsReady = 0;
static int gmsgEfw = 0;
static float g_nextHopeSend = 0;
static Vector g_safeOrigin;
static int g_haveSafe = 0;

static char g_partner[32];
static char g_scriptName[32];
static int g_talking = 0;
static int g_mode = 0;
static int g_choiceEntry[12];
static int g_nchoices = 0;
static char g_pages[6][480];
static int g_npages = 0;
static int g_page = 0;
static char g_activeTopic[32];
static int g_cmdsApplied = 0;

static int g_level = 1;
static int g_seenLevel = 0;
static int g_freshMap = 0;
// DAT_1011d14c starts at 1. FUN_100c6780 resets hope only while this is set,
// and a level-1 spawn always sets it. Level 2 and 3 keep the current hope.
static int g_hopeLatch = 1;

// FUN_100c7670 / FUN_100c7740. Level 1 plays the next clip when fmod(time, 120)
// is within 0.5s and the accumulator has passed 5s. Slot 0 is the mail call.
// Stashing the pliers (FUN_100c77c0) forces that slot. EndMail clears the flag.
static const char *ANN_WAVS[] = {
	"Ann_RAR_124.wav",
	"Ann_HAM_103.wav",
	"Ann_TRE_046.wav",
	"Ann_PHA_216.wav",
	"callToPrayer.wav",
};
static int g_annArmed = 0;
static int g_annIndex = 0;
static float g_annAcc = 5.0f;
static float g_annTime = 0;
static int g_annReady = 0;
static int g_soundsReady = 0;

static void copy_cap(char *dst, int dstlen, const char *src)
{
	if (!src) src = "";
	int i = 0;
	for (; src[i] && i < dstlen - 1; i++) dst[i] = src[i];
	dst[i] = 0;
}

static void trim_inplace(char *s)
{
	char *start = s;
	while (*start && isspace((unsigned char)*start)) start++;
	if (start != s) memmove(s, start, strlen(start) + 1);
	int n = (int)strlen(s);
	while (n > 0 && isspace((unsigned char)s[n - 1])) s[--n] = 0;
}

static int has_flag(const char *flags, const char *flag)
{
	char buf[48];
	copy_cap(buf, sizeof(buf), flags);
	char *tok = strtok(buf, " \t");
	while (tok) {
		if (!strcmp(tok, flag)) return 1;
		tok = strtok(NULL, " \t");
	}
	return 0;
}

static int flags_ok(const char *flags, int used)
{
	if (has_flag(flags, "FirstTime") && used) return 0;
	if (has_flag(flags, "!FirstTime") && !used) return 0;
	return 1;
}

static EfwScript *find_script(const char *name)
{
	for (int i = 0; i < g_nscripts; i++)
		if (!strcmp(g_scripts[i].name, name)) return &g_scripts[i];
	return NULL;
}

static int topic_on(const char *name)
{
	for (int i = 0; i < g_ntopics; i++)
		if (!strcmp(g_topics[i].name, name)) return g_topics[i].on;
	return 0;
}

static void set_topic(const char *name, int on)
{
	if (!name || !name[0]) return;
	for (int i = 0; i < g_ntopics; i++) {
		if (!strcmp(g_topics[i].name, name)) {
			g_topics[i].on = on;
			return;
		}
	}
	if (g_ntopics >= MAX_TOPICS) return;
	copy_cap(g_topics[g_ntopics].name, 32, name);
	g_topics[g_ntopics].on = on;
	g_ntopics++;
}

static int seen_key(const char *partner, const char *topic)
{
	char key[72];
	snprintf(key, sizeof(key), "%s|%s", partner, topic);
	for (int i = 0; i < g_nseen; i++)
		if (!strcmp(g_seen[i], key)) return 1;
	return 0;
}

static void mark_seen(const char *partner, const char *topic)
{
	if (seen_key(partner, topic) || g_nseen >= MAX_SEEN) return;
	snprintf(g_seen[g_nseen], 72, "%s|%s", partner, topic);
	g_nseen++;
}

static const char *script_for(const char *targetname)
{
	if (!targetname || !targetname[0]) return "Misc";
	if (!strcmp(targetname, "efw_compound_gate_guard")) return "Gate_Guard";
	if (!strcmp(targetname, "efw_electrician")) return "Electrician";
	if (!strcmp(targetname, "detainee")) return "Detainee";
	if (!strcmp(targetname, "detainee_queue")) return "Misc";
	return targetname;
}

static void parse_script(EfwScript *script, char *text)
{
	EfwEntry *cur = NULL;
	char *line = text;
	while (line && *line) {
		char *next = strchr(line, '\n');
		if (next) *next = 0;
		char buf[640];
		copy_cap(buf, sizeof(buf), line);
		if (next) *next = '\n';
		trim_inplace(buf);
		if (buf[0] && buf[0] != '#') {
			if (!strcmp(buf, "UNWANTED_ITEM")) {
				if (script->nentries < MAX_ENTRIES) {
					cur = &script->entries[script->nentries++];
					memset(cur, 0, sizeof(*cur));
					copy_cap(cur->topic, 32, "UNWANTED_ITEM");
				}
			} else if (buf[0] == 'Q' && (buf[1] == '<' || buf[1] == ':')) {
				if (script->nentries < MAX_ENTRIES) {
					cur = &script->entries[script->nentries++];
					memset(cur, 0, sizeof(*cur));
					const char *body = buf + 1;
					if (*body == '<') {
						const char *end = strchr(body, '>');
						if (end) {
							char spec[48];
							int n = (int)(end - body - 1);
							if (n > 47) n = 47;
							memcpy(spec, body + 1, n);
							spec[n] = 0;
							char *sp = strchr(spec, ' ');
							if (sp) {
								*sp = 0;
								copy_cap(cur->flags, 48, sp + 1);
							}
							copy_cap(cur->topic, 32, spec);
							body = end + 1;
						}
					}
					if (*body == ':') body++;
					trim_inplace((char *)body);
					copy_cap(cur->question, 240, body);
				}
			} else if (buf[0] == 'A' && (buf[1] == '<' || buf[1] == ':') && cur && cur->nanswers < MAX_ANSWERS) {
				EfwAnswer *ans = &cur->answers[cur->nanswers++];
				memset(ans, 0, sizeof(*ans));
				const char *body = buf + 1;
				if (*body == '<') {
					const char *end = strchr(body, '>');
					if (end) {
						int n = (int)(end - body - 1);
						if (n > 47) n = 47;
						memcpy(ans->flags, body + 1, n);
						ans->flags[n] = 0;
						body = end + 1;
					}
				}
				if (*body == ':') body++;
				char rest[600];
				copy_cap(rest, sizeof(rest), body);
				trim_inplace(rest);
				char *br = strrchr(rest, '[');
				if (br && strchr(br, ']')) {
					char *endb = strchr(br, ']');
					*endb = 0;
					copy_cap(ans->commands, 160, br + 1);
					*br = 0;
					trim_inplace(rest);
				}
				copy_cap(ans->text, 480, rest);
			}
		}
		if (!next) break;
		line = next + 1;
	}
}

static void load_scripts()
{
	if (g_loaded) return;
	g_loaded = 1;
	set_topic("ESCAPE", 1);
	set_topic("GREET", 1);
	set_topic("GOODBYE", 1);
	for (int i = 0; SCRIPT_FILES[i]; i++) {
		char path[64];
		snprintf(path, sizeof(path), "Conversations/%s.txt", SCRIPT_FILES[i]);
		int length = 0;
		byte *file = LOAD_FILE_FOR_ME((char *)path, &length);
		if (!file || length <= 0) {
			ALERT(at_console, "EFW: missing %s\n", path);
			continue;
		}
		char *text = new char[length + 1];
		memcpy(text, file, length);
		text[length] = 0;
		FREE_FILE(file);
		if (g_nscripts < MAX_SCRIPTS) {
			EfwScript *script = &g_scripts[g_nscripts++];
			memset(script, 0, sizeof(*script));
			copy_cap(script->name, 32, SCRIPT_FILES[i]);
			parse_script(script, text);
			ALERT(at_console, "EFW: %s %d lines\n", script->name, script->nentries);
		}
		delete[] text;
	}
}

static CBasePlayer *live_player()
{
	edict_t *ed = FIND_ENTITY_BY_CLASSNAME(NULL, "player");
	if (FNullEnt(ed) || ed->free || !ed->pvPrivateData) return NULL;
	return (CBasePlayer *)CBaseEntity::Instance(ed);
}

static int has_weapon(CBasePlayer *player, const char *classname)
{
	if (!player) return 0;
	for (int slot = 0; slot < MAX_ITEM_TYPES; slot++) {
		for (CBasePlayerItem *item = player->m_rgpPlayerItems[slot]; item; item = item->m_pNext) {
			if (FClassnameIs(item->pev, classname)) return 1;
		}
	}
	return 0;
}

static void take_weapon(CBasePlayer *player, const char *classname)
{
	if (!player) return;
	for (int slot = 0; slot < MAX_ITEM_TYPES; slot++) {
		for (CBasePlayerItem *item = player->m_rgpPlayerItems[slot]; item; item = item->m_pNext) {
			if (!FClassnameIs(item->pev, classname)) continue;
			player->pev->weapons &= ~(1 << item->m_iId);
			player->RemovePlayerItem(item, false);
			item->Kill();
			return;
		}
	}
}

static void clamp_hope()
{
	if (g_hope < 0) g_hope = 0;
	if (g_hope > HOPE_MAX) g_hope = HOPE_MAX;
}

static void add_hope(float amount)
{
	g_hope += amount;
	clamp_hope();
}

// FUN_100c6890. focus 0 jumps the open page to the new entry. focus 2 leaves it.
static void remember_diary(int id, int focus)
{
	for (int i = 0; i < g_ndiary; i++) if (g_diary[i] == id) return;
	if (g_ndiary >= MAX_DIARY) return;
	int index = g_ndiary;
	g_diary[g_ndiary++] = id;
	if (focus == 0) g_diaryIndex = index;
}

static void play_sample(CBasePlayer *player, const char *sample)
{
	if (!player || !sample || !sample[0]) return;
	// FUN_100c75e0. Channel 3, volume 1, attenuation 1.25, pitch 81-100.
	int pitch = 100 - (rand() % 20);
	EMIT_SOUND_DYN(player->edict(), CHAN_ITEM, sample, 1.0f, ATTN_STATIC, 0, pitch);
}

void Efw_Precache()
{
	if (g_soundsReady) return;
	g_soundsReady = 1;
	for (int i = 0; i < 5; i++) PRECACHE_SOUND((char *)ANN_WAVS[i]);
	PRECACHE_SOUND("Dingaling.wav");
}

static void add_diary(CBasePlayer *player, int id)
{
	int before = g_ndiary;
	remember_diary(id, 0);
	if (player && g_ndiary != before) {
		// FUN_100c6890 plays Dingaling.wav when the id is new.
		play_sample(player, "Dingaling.wav");
		ClientPrint(player->pev, HUD_PRINTTALK, UTIL_VarArgs("Diary entry %d.\n", id));
	}
}

static void arm_mail(CBasePlayer *player)
{
	g_annArmed = 1;
	g_annAcc = 0;
	play_sample(player, ANN_WAVS[0]);
}

static void tick_announcer(CBasePlayer *player)
{
	// FUN_100c6c10 calls the timer only while the chapter byte is 0 (level 1).
	if (g_level != 1 || !player) return;
	float now = gpGlobals->time;
	if (!g_annReady) {
		g_annTime = now;
		g_annReady = 1;
	}
	g_annAcc += now - g_annTime;
	g_annTime = now;
	float phase = fmodf(now, 120.0f);
	if (phase < 0) phase += 120.0f;
	if (phase > 0.5f || g_annAcc <= 5.0f) return;
	const char *sample = g_annArmed ? ANN_WAVS[0] : ANN_WAVS[g_annIndex + 1];
	play_sample(player, sample);
	g_annAcc = 0;
	g_annIndex++;
	if (g_annIndex > 3) g_annIndex = 0;
}

// FUN_100c6780. Index 0 is a sentinel the next/prev commands skip. Levels 2 and
// 3 already contain entries 2 through 10.
static void seed_diary()
{
	if (!g_diaryReady) {
		remember_diary(0, 2);
		remember_diary(1, 2);
		g_diaryIndex = 1;
		g_diaryReady = 1;
	}
	if (g_level >= 2) {
		for (int id = 2; id <= 10; id++) remember_diary(id, 2);
	}
}

static float angle_between(const Vector &dir, const Vector &forward)
{
	float dot = DotProduct(dir, forward);
	if (dot > 1.0f) dot = 1.0f;
	if (dot < -1.0f) dot = -1.0f;
	return acosf(dot);
}

// FUN_100c59c0. MakeVectors uses the electrician's angles (pev + 0x50).
static int electrician_sees(CBasePlayer *player)
{
	CBaseEntity *elec = UTIL_FindEntityByTargetname(NULL, "efw_electrician");
	if (!elec || !player) return 0;
	Vector delta = player->pev->origin - elec->pev->origin;
	float dist = delta.Length();
	if (dist < ELEC_SEE_DIST) return 1;
	if (dist < 0.001f) return 1;
	UTIL_MakeVectors(elec->pev->angles);
	if (angle_between(delta * (1.0f / dist), gpGlobals->v_forward) < ELEC_SEE_ANGLE) return 1;
	return 0;
}

// gpGlobals->mapname stays on the previous map across CHANGE_LEVEL in this
// build, so the chapter comes from who actually spawned.
static int detect_level()
{
	if (UTIL_FindEntityByClassname(NULL, "monster_patrol_guard")) return 2;
	if (UTIL_FindEntityByTargetname(NULL, "efw_electrician")) return 1;
	if (UTIL_FindEntityByTargetname(NULL, "efw_PliersMarker")) return 1;
	if (UTIL_FindEntityByClassname(NULL, "monster_refugee")) return 3;
	const char *name = STRING(gpGlobals->mapname);
	if (name && strstr(name, "level2")) return 2;
	if (name && strstr(name, "level3")) return 3;
	if (name && strstr(name, "level1")) return 1;
	return 0;
}

static void send_panel(CBasePlayer *player);
static const char *interact_hint(CBasePlayer *player);
static const char *menu_sprite(int id);
static const char *menu_next(int id);
static const char *menu_caption(int id);
static void present_menu(CBasePlayer *player, int id);
static void show_caption(CBasePlayer *player, const char *text);

static void set_ending(CBasePlayer *player, int ending, const char *text)
{
	if (g_ending) return;
	g_ending = ending;
	g_talking = 0;
	if (player) {
		player->pev->flags |= FL_FROZEN;
		ClientPrint(player->pev, HUD_PRINTCENTER, text);
	}
	ALERT(at_console, "EFW ending %d: %s\n", ending, text);
}

static void change_map(const char *map)
{
	g_talking = 0;
	g_board = 0;
	g_caught = 0;
	g_annReady = 0;
	CHANGE_LEVEL((char *)map, NULL);
}

static void apply_commands(CBasePlayer *player, const char *commands)
{
	char buf[160];
	copy_cap(buf, sizeof(buf), commands);
	char *p = buf;
	while (*p) {
		while (*p && isspace((unsigned char)*p)) p++;
		if (!*p) break;
		char *start = p;
		while (*p && !isspace((unsigned char)*p) && *p != '(') p++;
		char name[32];
		int n = (int)(p - start);
		if (n > 31) n = 31;
		memcpy(name, start, n);
		name[n] = 0;
		char arg[32];
		arg[0] = 0;
		if (*p == '(') {
			p++;
			char *a = p;
			while (*p && *p != ')') p++;
			int an = (int)(p - a);
			if (an > 31) an = 31;
			memcpy(arg, a, an);
			arg[an] = 0;
			trim_inplace(arg);
			if (*p == ')') p++;
		}
		if (!strcmp(name, "AddTopic")) set_topic(arg, 1);
		else if (!strcmp(name, "DeleteTopic")) set_topic(arg, 0);
		else if (!strcmp(name, "AddDiary")) {
			add_diary(player, atoi(arg));
		} else if (!strcmp(name, "Goodbye")) {
			g_talking = 0;
		} else if (!strcmp(name, "ServerCommand")) {
			// FUN_100bfbf0. The package is the powder and the phone, then +10.
			if (!strcmp(arg, "efw_GetPackage") && player) {
				if (!has_weapon(player, "weapon_efw_WashingPowder"))
					player->GiveNamedItem("weapon_efw_WashingPowder");
				if (!has_weapon(player, "weapon_efw_MobilePhone"))
					player->GiveNamedItem("weapon_efw_MobilePhone");
				add_hope(HOPE_PACKAGE);
				present_menu(player, 0x47);
				g_annArmed = 0;
			} else if (!strcmp(arg, "efw_EndMailPickupMessage")) {
				g_annArmed = 0;
			}
		}
	}
}

static int point_in_entity(const Vector &point, CBaseEntity *ent, float pad)
{
	if (!ent) return 0;
	return point.x >= ent->pev->absmin.x - pad && point.x <= ent->pev->absmax.x + pad
		&& point.y >= ent->pev->absmin.y - pad && point.y <= ent->pev->absmax.y + pad
		&& point.z >= ent->pev->absmin.z - 72 && point.z <= ent->pev->absmax.z + 72;
}

static void set_doors(const char *name, int solid)
{
	CBaseEntity *ent = NULL;
	while ((ent = UTIL_FindEntityByTargetname(ent, name)) != NULL) {
		if (FClassnameIs(ent->pev, "func_door_rotating") || FClassnameIs(ent->pev, "func_door"))
			ent->pev->solid = solid;
	}
}

static void open_named(CBasePlayer *player, const char *name)
{
	FireTargets(name, player, player, USE_ON, 0);
	set_doors(name, SOLID_NOT);
}

static void refresh_doors()
{
}

static const char *trigger_label(CBaseEntity *ent)
{
	const char *target = STRING(ent->pev->target);
	if (target && target[0]) return target;
	return STRING(ent->pev->targetname);
}

static void say_gap(CBasePlayer *player, const char *text)
{
	static float next = 0;
	static char last[180];
	if (!player || !text || g_board) return;
	if (gpGlobals->time < next && !strcmp(last, text)) return;
	copy_cap(last, sizeof(last), text);
	next = gpGlobals->time + 3.0f;
	show_caption(player, text);
}

// DLL item table at 0x100f81e0. These are not the port's weapon slot numbers.
static const char *class_from_dll_item(int id)
{
	switch (id) {
	case 0x10: return "weapon_efw_Pliers";
	case 0x11: return "weapon_efw_Lever";
	case 0x12: return "weapon_efw_Branch";
	case 0x13: return "weapon_efw_MobilePhone";
	case 0x14: return "weapon_efw_IDTag";
	case 0x15: return "weapon_efw_RedPhoneCard";
	case 0x16: return "weapon_efw_GreenPhoneCard";
	case 0x17: return "weapon_efw_BluePhoneCard";
	case 0x18: return "weapon_efw_WashingPowder";
	default: return NULL;
	}
}

// Xash user messages stop at 2048 bytes. The browser HUD keeps a short
// line; the full sentence is also printed to the console.
static void write_short(const char *s)
{
	char buf[160];
	if (!s) s = "";
	int i = 0;
	for (; s[i] && i < 150; i++) buf[i] = s[i];
	if (s[i]) {
		buf[147] = '.';
		buf[148] = '.';
		buf[149] = '.';
		i = 150;
	}
	buf[i] = 0;
	WRITE_STRING(buf);
}

static void send_panel(CBasePlayer *player)
{
	if (!player || !g_msgsReady) return;
	int hopeByte = g_hope > 0 ? (int)(g_hope + 0.5f) : 0;
	if (g_board) {
		const char *sprite = menu_sprite(g_board);
		MESSAGE_BEGIN(MSG_ONE, gmsgEfw, NULL, player->pev);
		WRITE_BYTE(4);
		WRITE_BYTE(hopeByte);
		WRITE_STRING(sprite ? sprite : "");
		WRITE_BYTE(menu_next(g_board) ? 1 : 0);
		MESSAGE_END();
		return;
	}
	// Slot 5 in the DLL is the diary-open flag. The client draws
	// sprites/efw_diary_%02d.spr for the id in the current page slot.
	if (g_diaryOpen && !g_talking) {
		int id = 0;
		if (g_diaryIndex > 0 && g_diaryIndex < g_ndiary) id = g_diary[g_diaryIndex];
		if (id < 0) id = 0;
		if (id > 255) id = 255;
		MESSAGE_BEGIN(MSG_ONE, gmsgEfw, NULL, player->pev);
		WRITE_BYTE(3);
		WRITE_BYTE(hopeByte);
		WRITE_BYTE(id);
		MESSAGE_END();
		return;
	}
	MESSAGE_BEGIN(MSG_ONE, gmsgEfw, NULL, player->pev);
	WRITE_BYTE(2);
	WRITE_BYTE(hopeByte);
	if (!g_talking) {
		if (g_capN > 0 && gpGlobals->time < g_capUntil) {
			WRITE_BYTE(g_capN);
			for (int i = 0; i < g_capN; i++) write_short(g_capLines[i]);
		} else {
			const char *hint = interact_hint(player);
			if (hint) {
				WRITE_BYTE(1);
				write_short(hint);
			} else {
				WRITE_BYTE(0);
			}
		}
	} else if (g_mode == 0) {
		WRITE_BYTE(g_nchoices + 1);
		write_short(UTIL_VarArgs("Talking to %s", g_partner));
		EfwScript *script = find_script(g_scriptName);
		for (int i = 0; i < g_nchoices; i++) {
			const char *q = "Give him the pliers.";
			if (g_choiceEntry[i] == -2) q = "Give him the mobile phone.";
			else if (g_choiceEntry[i] == -3) q = "Give him the washing powder.";
			else if (g_choiceEntry[i] >= 0 && script)
				q = script->entries[g_choiceEntry[i]].question;
			write_short(UTIL_VarArgs("%d. %s", i + 1, q));
		}
	} else {
		WRITE_BYTE(2);
		write_short(g_pages[g_page]);
		write_short(g_page + 1 < g_npages ? "E continues" : "E closes");
	}
	MESSAGE_END();
}

// FUN_100c81d0 caption table. These bytes return before the client menu is sent.
static const char *menu_caption(int id)
{
	switch (id) {
	case 0x3c: return "You realise that the guard will search you and find the pliers, and so decide not to leave the kitchen.";
	case 0x3d: return "You wait until the electrician is not looking, and quickly grab the pliers from the workbench. He doesn't notice, and you hide them under your shirt. Heart pounding, you wonder how to safely get them to Amir.";
	case 0x3e: return "Again, you wait for the ideal moment to retrieve the pliers from under your shirt and slowly lower them into the bin, careful to not make a sound.";
	case 0x40: return "There's a hole. You could hide here, if you ever needed to.";
	case 0x41: return "You could hide here, but you'd be caught at dusk when the guards saw your ID tag and came searching.";
	case 0x42: return "You could hide here and come out at night to get the pliers, if only you had a way to break into the rubbish bin cage.";
	case 0x44: return "You could hide again, but you haven't got the pliers yet.";
	case 0x45: return "You recognise the bin in front of you as the one from the kitchen earlier today. You open the top and dig around inside, and sure enough, the pliers are still there. You retrieve them from the foodscraps and rubbish, and hide them in your clothes. Now to work out how to safely get these back to your fellow plotters.";
	case 0x47: return "The package is from a pen-friend, a member of a refugee support group in Melbourne. The letter accompanying it brings you some hope, knowing that there is someone in this country that cares about your fate. Inside the package are some chocolate bars, which you give to some children, and a box of washing powder. Your suspicions aroused by mysterious rattling sound, you feel inside the box and discover a SIM card for a mobile phone.";
	default: return NULL;
	}
}

// Client FUN_10047830. Click commands are the strings filled at 0x100bc884.
static const char *menu_sprite(int id)
{
	switch (id) {
	case 0x3f: return "Storyboard/EFW_Storyboards_Hiding_Day.spr";
	case 0x43: return "Storyboard/EFW_Storyboards_Hiding_Night.spr";
	case 0x46: return "Storyboard/EFW_Storyboards_Isolation.spr";
	case 0x49: return "Storyboard/EFW_Storyboards_Introduction_1.spr";
	case 0x4a: return "Storyboard/EFW_Storyboards_Introduction_2.spr";
	case 0x4b: return "Storyboard/EFW_Storyboards_Introduction_3.spr";
	case 0x4c: return "Storyboard/EFW_Storyboards_Ending_Positive.spr";
	case 0x4d: return "Storyboard/EFW_Sb_Ending_Iso.spr";
	case 0x4e: return "Storyboard/EFW_Sb_Ending_Dep.spr";
	case 0x4f: return "Storyboard/EFW_Storyboards_Decoy_Remove.spr";
	case 0x50: return "Storyboard/EFW_Storyboards_Dec_Replace.spr";
	case 0x51: return "Storyboard/EFW_Storyboards_Isolation.spr";
	case 0x52: return "Storyboard/EFW_Storyboards_Help_Screen.spr";
	default: return NULL;
	}
}

static const char *menu_next(int id)
{
	switch (id) {
	case 0x3f: return "efw_ShowMenu 79";
	case 0x43: return "efw_ShowMenu 80";
	case 0x46: return "efw_changelevel efw_prototype_level2";
	case 0x49: return "efw_ShowMenu 74";
	case 0x4a: return "efw_ShowMenu 75";
	case 0x4c: return "efw_changelevel efw_prototype_level1";
	case 0x4d: return "efw_ShowMenu 78";
	case 0x4e: return "efw_changelevel efw_prototype_level1";
	case 0x4f: return "efw_changelevel efw_prototype_level2";
	case 0x50: return "efw_changelevel efw_prototype_level3";
	default: return NULL;
	}
}

static void show_caption(CBasePlayer *player, const char *text)
{
	if (!player || !text || g_board) return;
	ClientPrint(player->pev, HUD_PRINTCONSOLE, UTIL_VarArgs("%s\n", text));
	g_talking = 0;
	g_capN = 0;
	const char *p = text;
	while (*p && g_capN < 8) {
		int len = 0;
		int lastSpace = -1;
		while (p[len] && len < 72) {
			if (p[len] == ' ') lastSpace = len;
			len++;
		}
		int take = (p[len] && lastSpace > 24) ? lastSpace : len;
		memcpy(g_capLines[g_capN], p, take);
		g_capLines[g_capN][take] = 0;
		g_capN++;
		p += take;
		while (*p == ' ') p++;
	}
	g_capUntil = gpGlobals->time + 12.0f;
	send_panel(player);
}

static void dismiss_board(CBasePlayer *player);

static void present_menu(CBasePlayer *player, int id)
{
	if (id == 0x3f || id == 0x43) add_hope(HOPE_BONUS);
	const char *caption = menu_caption(id);
	if (caption && !menu_sprite(id)) {
		show_caption(player, caption);
		return;
	}
	g_board = id;
	g_talking = 0;
	g_diaryOpen = 0;
	if (player) {
		player->pev->flags |= FL_FROZEN;
		send_panel(player);
	}
}

static void dismiss_board(CBasePlayer *player)
{
	int id = g_board;
	g_board = 0;
	if (player && !g_ending) player->pev->flags &= ~FL_FROZEN;
	const char *next = menu_next(id);
	if (player) send_panel(player);
	if (!next || !player) return;
	if (!strncmp(next, "efw_ShowMenu ", 13))
		present_menu(player, atoi(next + 13));
	else if (!strncmp(next, "efw_changelevel ", 16))
		change_map(next + 16);
}

static void open_topics(CBasePlayer *player, const char *targetname)
{
	const char *scriptName = script_for(targetname);
	EfwScript *script = find_script(scriptName);
	if (!script) {
		ClientPrint(player->pev, HUD_PRINTCENTER, "They have nothing to say.");
		return;
	}
	copy_cap(g_partner, 32, targetname);
	copy_cap(g_scriptName, 32, scriptName);
	g_nchoices = 0;
	for (int i = 0; i < script->nentries && g_nchoices < 12; i++) {
		EfwEntry *e = &script->entries[i];
		if (!e->topic[0] || !strcmp(e->topic, "UNWANTED_ITEM")) continue;
		if (!topic_on(e->topic)) continue;
		if (!flags_ok(e->flags, seen_key(targetname, e->topic))) continue;
		int dup = 0;
		for (int c = 0; c < g_nchoices; c++)
			if (!strcmp(script->entries[g_choiceEntry[c]].topic, e->topic)) dup = 1;
		if (dup) continue;
		g_choiceEntry[g_nchoices++] = i;
	}
	if (has_weapon(player, "weapon_efw_Pliers") && !strcmp(targetname, "Amir") && g_nchoices < 12) {
		g_choiceEntry[g_nchoices++] = -1;
	}
	if (has_weapon(player, "weapon_efw_MobilePhone") && !strcmp(targetname, "Gholan")
		&& topic_on("GotHintAboutHiding") && g_nchoices < 12) {
		g_choiceEntry[g_nchoices++] = -2;
	}
	if (has_weapon(player, "weapon_efw_WashingPowder") && !strcmp(targetname, "Mouhtaz") && g_nchoices < 12) {
		g_choiceEntry[g_nchoices++] = -3;
	}
	g_talking = 1;
	g_mode = 0;
	send_panel(player);
}

void Efw_BeginTalk(CBasePlayer *player, const char *targetname)
{
	if (!player || g_ending) return;
	load_scripts();
	open_topics(player, targetname);
}

static void show_answer(CBasePlayer *player, EfwEntry *entry)
{
	int used = seen_key(g_partner, entry->topic);
	g_npages = 0;
	g_page = 0;
	g_cmdsApplied = 0;
	copy_cap(g_activeTopic, 32, entry->topic);
	int flagged = 0;
	for (int i = 0; i < entry->nanswers; i++)
		if (entry->answers[i].flags[0]) flagged = 1;
	for (int i = 0; i < entry->nanswers && g_npages < 6; i++) {
		EfwAnswer *ans = &entry->answers[i];
		if (flagged && !flags_ok(ans->flags, used)) continue;
		if (!flagged && ans->flags[0]) continue;
		copy_cap(g_pages[g_npages], 480, ans->text[0] ? ans->text : "...");
		if (!g_cmdsApplied && ans->commands[0]) {
			apply_commands(player, ans->commands);
			g_cmdsApplied = 1;
		}
		g_npages++;
		if (flagged) break;
	}
	if (!g_npages) {
		copy_cap(g_pages[0], 480, "...");
		g_npages = 1;
	}
	mark_seen(g_partner, entry->topic);
	g_mode = 1;
	if (player && g_pages[0][0])
		ClientPrint(player->pev, HUD_PRINTCONSOLE, UTIL_VarArgs("%s\n", g_pages[0]));
	send_panel(player);
}

static void pick_choice(CBasePlayer *player, int index)
{
	if (!g_talking || g_mode != 0 || index < 0 || index >= g_nchoices) return;
	if (g_choiceEntry[index] == -1) {
		take_weapon(player, "weapon_efw_Pliers");
		ClientPrint(player->pev, HUD_PRINTCENTER, "Well done! Your bravery and cleverness have helped bring us all one step closer to freedom!");
		present_menu(player, 0x4c);
		return;
	}
	if (g_choiceEntry[index] == -2) {
		take_weapon(player, "weapon_efw_MobilePhone");
		set_topic("GholanAgreedToPloy", 1);
		set_topic("IDTAG", 0);
		set_topic("HIDING", 0);
		add_hope(HOPE_GHOLAN);
		add_diary(player, 13);
		g_talking = 0;
		ClientPrint(player->pev, HUD_PRINTCENTER, "Well done, my friend. When you next go to the main compound, rest assured I'll remove the tag. You'll be free to hide then.");
		send_panel(player);
		return;
	}
	if (g_choiceEntry[index] == -3) {
		take_weapon(player, "weapon_efw_WashingPowder");
		if (!has_weapon(player, "weapon_efw_Lever"))
			player->GiveNamedItem("weapon_efw_Lever");
		add_hope(HOPE_BONUS);
		add_diary(player, 17);
		g_talking = 0;
		ClientPrint(player->pev, HUD_PRINTCENTER, "Mustafa, this is far too kind of you! The only thing I can offer you in exchange is this length of metal pipe I have found and have been hiding. Perhaps you can find a use for it?");
		send_panel(player);
		return;
	}
	EfwScript *script = find_script(g_scriptName);
	if (!script) return;
	show_answer(player, &script->entries[g_choiceEntry[index]]);
}

static void advance_page(CBasePlayer *player)
{
	if (!g_talking || g_mode != 1) return;
	g_page++;
	if (g_page >= g_npages) {
		g_talking = 0;
		send_panel(player);
		return;
	}
	send_panel(player);
}

static CBaseEntity *nearest_named(CBasePlayer *player, const char *classname, float radius)
{
	CBaseEntity *found = NULL;
	float best = radius * radius;
	CBaseEntity *ent = NULL;
	while ((ent = UTIL_FindEntityInSphere(ent, player->pev->origin, radius)) != NULL) {
		if (!FClassnameIs(ent->pev, classname)) continue;
		if (FStringNull(ent->pev->targetname) || !(STRING(ent->pev->targetname))[0]) continue;
		Vector delta = ent->pev->origin - player->pev->origin;
		float d = delta.x * delta.x + delta.y * delta.y + delta.z * delta.z;
		if (d < best) {
			best = d;
			found = ent;
		}
	}
	return found;
}

static const char *interact_hint(CBasePlayer *player)
{
	if (!player) return NULL;
	CBaseEntity *ent = NULL;
	while ((ent = UTIL_FindEntityByClassname(ent, "efw_Marker")) != NULL) {
		if (!point_in_entity(player->pev->origin, ent, 24)) continue;
		const char *name = STRING(ent->pev->targetname);
		if (!strcmp(name, "efw_PliersMarker")) return "E: Take the pliers";
		if (!strcmp(name, "efw_kitchen_bin")) return "E: Hide the pliers in the bin";
		if (!strcmp(name, "efw_hiding_place")) return "E: Hide here";
		if (!strcmp(name, "efw_IDTag_Position")) return "E: Use the ID tag board";
	}
	CBaseEntity *npc = nearest_named(player, "monster_refugee", TALK_RADIUS);
	if (!npc) npc = nearest_named(player, "monster_barney", TALK_RADIUS);
	if (!npc) return NULL;
	if (!strcmp(STRING(npc->pev->targetname), "Detainee")) return NULL;
	return UTIL_VarArgs("E: Talk to %s", STRING(npc->pev->targetname));
}

static int try_pickup_pliers(CBasePlayer *player)
{
	// efw_PickupPliers. The sight test refuses the take. Hope is not changed here.
	if (electrician_sees(player)) {
		ClientPrint(player->pev, HUD_PRINTCENTER, "Oi! Put that back!");
		return 1;
	}
	if (!has_weapon(player, "weapon_efw_Pliers"))
		player->GiveNamedItem("weapon_efw_Pliers");
	set_topic("PLIERS_GOT_PLIERS", 1);
	if (g_level == 1) present_menu(player, 0x3d);
	else ClientPrint(player->pev, HUD_PRINTCENTER, "You take the pliers.");
	return 1;
}

static int try_stash_bin(CBasePlayer *player)
{
	// FUN_100c4f90, the efw_kitchen_bin handler.
	if (!has_weapon(player, "weapon_efw_Pliers")) {
		ClientPrint(player->pev, HUD_PRINTCENTER, "Nothing of yours is hidden in the bin.");
		return 1;
	}
	if (electrician_sees(player)) {
		g_binFails++;
		ALERT(at_console, "Dammit! Electrician saw you, can't put pliers in bin. Fail count: %d.\n", g_binFails);
		ClientPrint(player->pev, HUD_PRINTCENTER, "Oi! Put that back!");
		add_hope(-HOPE_CAUGHT);
		return 1;
	}
	take_weapon(player, "weapon_efw_Pliers");
	g_pliersInBin = 1;
	set_topic("PliersInBin", 1);
	set_topic("PLIERS_GOT_PLIERS", 0);
	set_topic("OFFICE", 1);
	add_hope(HOPE_BIN_BONUS);
	arm_mail(player);
	add_diary(player, 6);
	present_menu(player, 0x3e);
	return 1;
}

static int try_hide(CBasePlayer *player)
{
	// efw_HideUnderBuilding. Chapter 0 is level 1, chapter 1 is level 2.
	// Success sends menu 0x3f or 0x43, and both of those add 15 hope.
	if (g_level == 1) {
		if (!topic_on("PliersInBin")) {
			present_menu(player, 0x40);
			return 1;
		}
		if (!topic_on("GholanAgreedToPloy")) {
			present_menu(player, 0x41);
			return 1;
		}
		if (!has_weapon(player, "weapon_efw_Lever")) {
			present_menu(player, 0x42);
			return 1;
		}
		present_menu(player, 0x3f);
		return 1;
	}
	if (g_level == 2) {
		if (!has_weapon(player, "weapon_efw_Pliers")) {
			present_menu(player, 0x44);
			return 1;
		}
		present_menu(player, 0x43);
		return 1;
	}
	return 0;
}

static int try_cage(CBasePlayer *player)
{
	CBaseEntity *door = UTIL_FindEntityByTargetname(NULL, "efw_cage_door");
	if (!door) return 0;
	if ((door->pev->origin - player->pev->origin).Length() > TALK_RADIUS) return 0;
	if (has_weapon(player, "weapon_efw_Lever")) {
		take_weapon(player, "weapon_efw_Lever");
		open_named(player, "efw_cage_door");
		ClientPrint(player->pev, HUD_PRINTCENTER, "Good work; you've openned the cage door, by using the metal lever.");
		return 1;
	}
	if (has_weapon(player, "weapon_efw_Branch")) {
		take_weapon(player, "weapon_efw_Branch");
		if (!has_weapon(player, "weapon_efw_Lever"))
			player->GiveNamedItem("weapon_efw_Lever");
		ClientPrint(player->pev, HUD_PRINTCENTER, "Oh, you've broken the branch attempting to open the cage door! The door stays locked! Try something else.");
		return 1;
	}
	return 0;
}

static int try_marker(CBasePlayer *player)
{
	CBaseEntity *ent = NULL;
	while ((ent = UTIL_FindEntityByClassname(ent, "efw_Marker")) != NULL) {
		if (!point_in_entity(player->pev->origin, ent, 24)) continue;
		const char *name = STRING(ent->pev->targetname);
		if (!strcmp(name, "efw_IDTag_Position")) {
			if (has_weapon(player, "weapon_efw_IDTag")) {
				take_weapon(player, "weapon_efw_IDTag");
				g_tagOnBoard = 1;
				set_topic("Player'sIDTagOnFence", 1);
				ClientPrint(player->pev, HUD_PRINTCENTER, "You leave the ID tag on the board.");
				return 1;
			}
			if (g_tagOnBoard) {
				player->GiveNamedItem("weapon_efw_IDTag");
				g_tagOnBoard = 0;
				set_topic("Player'sIDTagOnFence", 0);
				ClientPrint(player->pev, HUD_PRINTCENTER, "You take your ID tag back.");
				return 1;
			}
			ClientPrint(player->pev, HUD_PRINTCENTER, "You have no ID tag to leave here.");
			return 1;
		}
		if (!strcmp(name, "efw_PliersMarker"))
			return try_pickup_pliers(player);
		if (!strcmp(name, "efw_kitchen_bin"))
			return try_stash_bin(player);
		if (!strcmp(name, "efw_hiding_place")) {
			if (try_hide(player)) return 1;
			ClientPrint(player->pev, HUD_PRINTCENTER, "This is no place to hide.");
			return 1;
		}
	}
	return 0;
}

static int blocked_trigger(CBasePlayer *player)
{
	// FUN_100c7da0. The map stores these names on trigger_multiple.target.
	CBaseEntity *ent = NULL;
	int blocked = 0;
	while ((ent = UTIL_FindEntityByClassname(ent, "trigger_multiple")) != NULL) {
		if (!point_in_entity(player->pev->origin, ent, 0)) continue;
		const char *name = trigger_label(ent);
		if (!strcmp(name, "efw_kitchen_door")) {
			if (has_weapon(player, "weapon_efw_Pliers")) {
				say_gap(player, menu_caption(0x3c));
				blocked = 1;
			} else if (!topic_on("OnKitchenRoster")) {
				say_gap(player, "Where do you think you're going? You can't enter without a kitchen pass.");
				blocked = 1;
			} else if (g_level == 1) {
				if (!topic_on("HasEnteredTheKitchenForTheFirstTime")) {
					set_topic("HasEnteredTheKitchenForTheFirstTime", 1);
					say_gap(player, "RAR-124? Go in, you're on the roster.");
				}
				open_named(player, "efw_actual_kitchen_door");
			} else if (g_level == 3) {
				if (!topic_on("HasEnteredTheKitchenInChapterTwo")) {
					set_topic("HasEnteredTheKitchenInChapterTwo", 1);
					say_gap(player, "Back again? OK, go on in.");
				}
				open_named(player, "efw_actual_kitchen_door");
			}
		} else if (!strcmp(name, "efw_2ndcompound_entry")) {
			if (topic_on("Player'sIDTagOnFence")) {
				open_named(player, "efw_compound_gate");
			} else if (!topic_on("HeardCompoundGateGuardOnce")) {
				set_topic("HeardCompoundGateGuardOnce", 1);
				say_gap(player, "Hold it! To enter the main compound, leave your ID tag on the board so we know you're there. And don't forget to collect it again when your return.");
				blocked = 1;
			} else {
				say_gap(player, "No tag on the board, no entry. Leave your ID Tag on the board to enter.");
				blocked = 1;
			}
		} else if (!strcmp(name, "efw_1stcompound_entry")) {
			if (!topic_on("Player'sIDTagOnFence")) {
				open_named(player, "efw_1stcompound_gate");
			} else {
				say_gap(player, "The gate doesn't open til you collect your tag. No tag, no entry.");
				blocked = 1;
			}
		} else if (!strcmp(name, "efw_approach_bin")) {
			if (!has_weapon(player, "weapon_efw_Pliers") && !topic_on("PLIERS_GOT_PLIERS")) {
				player->GiveNamedItem("weapon_efw_Pliers");
				set_topic("PLIERS_GOT_PLIERS", 1);
				add_hope(HOPE_BONUS);
				present_menu(player, 0x45);
			}
		}
	}
	if (blocked && g_haveSafe) {
		player->pev->origin = g_safeOrigin;
		player->pev->velocity = g_vecZero;
	}
	return blocked;
}

int Efw_PlayerIsHiding()
{
	CBasePlayer *player = live_player();
	if (!player) return 0;
	CBaseEntity *ent = UTIL_FindEntityByTargetname(NULL, "efw_hiding_place");
	return point_in_entity(player->pev->origin, ent, 16);
}

static int guard_sees(CBaseMonster *guard, CBasePlayer *player)
{
	Vector delta = player->pev->origin - guard->pev->origin;
	float dist = delta.Length();
	if (dist > GUARD_SEE_DIST) return 0;
	UTIL_MakeVectors(guard->pev->angles);
	Vector dir = dist > 0.001f ? delta * (1.0f / dist) : Vector(0, 0, 1);
	if (angle_between(dir, gpGlobals->v_forward) >= GUARD_SEE_ANGLE) return 0;
	TraceResult tr;
	UTIL_TraceLine(guard->pev->origin, player->pev->origin, ignore_monsters, guard->edict(), &tr);
	if (tr.flFraction >= 1.0f) return 1;
	Vector up(0, 0, 40);
	UTIL_TraceLine(guard->pev->origin + up, player->pev->origin + up, ignore_monsters, guard->edict(), &tr);
	return tr.flFraction >= 1.0f;
}

void Efw_GuardSpot(CBaseMonster *guard)
{
	if (g_ending || g_level != 2 || !guard) return;
	CBasePlayer *player = live_player();
	if (!player) return;
	if (Efw_PlayerIsHiding()) return;
	if (g_caught || g_board) return;
	if (guard_sees(guard, player)) {
		g_caught = 1;
		present_menu(player, 0x46);
	}
}

static int try_interact(CBasePlayer *player)
{
	if (!player || g_ending) return 0;
	load_scripts();
	if (g_board) {
		dismiss_board(player);
		return 1;
	}
	if (g_talking) {
		if (g_mode == 1) advance_page(player);
		else g_talking = 0, send_panel(player);
		return 1;
	}
	if (try_marker(player)) return 1;
	if (try_cage(player)) return 1;
	CBaseEntity *npc = nearest_named(player, "monster_refugee", TALK_RADIUS);
	if (!npc) npc = nearest_named(player, "monster_barney", TALK_RADIUS);
	if (!npc) return 0;
	// The client drops a kind-0 prompt when the targetname is "Detainee".
	if (!strcmp(STRING(npc->pev->targetname), "Detainee")) return 0;
	UTIL_MakeVectors(player->pev->v_angle);
	Vector los = (npc->pev->origin - (player->pev->origin + player->pev->view_ofs)).Normalize();
	if (DotProduct(los, gpGlobals->v_forward) < 0.15f) return 0;
	Efw_BeginTalk(player, STRING(npc->pev->targetname));
	return 1;
}

int Efw_TryUse(CBasePlayer *player)
{
	if (!player || g_ending) return 0;
	if (!(player->m_afButtonPressed & IN_USE)) return 0;
	return try_interact(player);
}

// The map path walks him out of the 256-unit sight radius. Nothing in the
// map triggers efw_electrician, so a wait-for-trigger schedule leaves him
// on top of the pliers. This drives path_corner targets at a walk.
static char g_elecCorner[32];

static void drive_electrician()
{
	CBaseEntity *elec = UTIL_FindEntityByTargetname(NULL, "efw_electrician");
	if (!elec) return;
	elec->pev->nextthink = 0;
	if (!g_elecCorner[0]) {
		const char *start = STRING(elec->pev->target);
		if (!start || !start[0]) start = "efw_electrician_path_1";
		copy_cap(g_elecCorner, 32, start);
	}
	CBaseEntity *corner = UTIL_FindEntityByTargetname(NULL, g_elecCorner);
	if (!corner) return;
	Vector delta = corner->pev->origin - elec->pev->origin;
	delta.z = 0;
	float dist = delta.Length();
	if (dist < 32) {
		const char *next = STRING(corner->pev->target);
		if (next && next[0]) copy_cap(g_elecCorner, 32, next);
		elec->pev->velocity.x = 0;
		elec->pev->velocity.y = 0;
		return;
	}
	Vector dir = delta * (1.0f / dist);
	float step = 70.0f * gpGlobals->frametime;
	if (step > dist) step = dist;
	Vector next = elec->pev->origin + dir * step;
	next.z = elec->pev->origin.z;
	UTIL_SetOrigin(elec, next);
	elec->pev->velocity.x = dir.x * 70;
	elec->pev->velocity.y = dir.y * 70;
	elec->pev->angles.y = UTIL_VecToYaw(dir);
}

static const char *command_item(int index)
{
	const char *arg = CMD_ARGV(index);
	if (!strncmp(arg, "weapon_", 7)) return arg;
	return class_from_dll_item(atoi(arg));
}

static void give_item(CBasePlayer *player, const char *cls, const char *who)
{
	if (!player || !cls || !who || !has_weapon(player, cls)) {
		if (player) ClientPrint(player->pev, HUD_PRINTCENTER, "You don't have that.");
		return;
	}
	if (!strcmp(cls, "weapon_efw_MobilePhone") && !strcmp(who, "Gholan") && topic_on("GotHintAboutHiding")) {
		take_weapon(player, cls);
		set_topic("GholanAgreedToPloy", 1);
		set_topic("IDTAG", 0);
		set_topic("HIDING", 0);
		add_hope(HOPE_GHOLAN);
		add_diary(player, 13);
		ClientPrint(player->pev, HUD_PRINTCENTER, "Well done, my friend. When you next go to the main compound, rest assured I'll remove the tag. You'll be free to hide then.");
		return;
	}
	if (!strcmp(cls, "weapon_efw_WashingPowder") && !strcmp(who, "Mouhtaz")) {
		take_weapon(player, cls);
		if (!has_weapon(player, "weapon_efw_Lever"))
			player->GiveNamedItem("weapon_efw_Lever");
		add_hope(HOPE_BONUS);
		add_diary(player, 17);
		ClientPrint(player->pev, HUD_PRINTCENTER, "Mustafa, this is far too kind of you! The only thing I can offer you in exchange is this length of metal pipe I have found and have been hiding. Perhaps you can find a use for it?");
		return;
	}
	if (!strcmp(cls, "weapon_efw_Pliers")) {
		if (!strcmp(who, "Amir")) {
			take_weapon(player, cls);
			ClientPrint(player->pev, HUD_PRINTCENTER, "Well done! Your bravery and cleverness have helped bring us all one step closer to freedom!");
			present_menu(player, 0x4c);
			return;
		}
		if (!strcmp(who, "Fashid")) {
			ClientPrint(player->pev, HUD_PRINTCENTER, "Thanks, but I don't want them. A word of warning though, my friend. The guard outside often searches us, so you should find a way to hide them or smuggle them out.");
			return;
		}
		if (!strcmp(who, "Nasir")) {
			ClientPrint(player->pev, HUD_PRINTCENTER, "Well done, but you'll have to hide them in here somewhere, or the guard will find them when you leave the kitchen.");
			return;
		}
		if (!strcmp(who, "Mouhtaz")) {
			ClientPrint(player->pev, HUD_PRINTCENTER, "Are you crazy? Whatever you do, don't try to leave with them. The guard outside may search you!");
			return;
		}
	}
	Efw_BeginTalk(player, who);
}

static void use_with_marker(CBasePlayer *player, const char *cls, const char *marker)
{
	if (!player || !cls || !marker || !has_weapon(player, cls)) return;
	if (!strcmp(marker, "efw_cage_door") && !strcmp(cls, "weapon_efw_Lever")) {
		take_weapon(player, cls);
		open_named(player, "efw_cage_door");
		ClientPrint(player->pev, HUD_PRINTCENTER, "Good work; you've openned the cage door, by using the metal lever.");
		return;
	}
	if (!strcmp(marker, "efw_cage_door") && !strcmp(cls, "weapon_efw_Branch")) {
		take_weapon(player, cls);
		if (!has_weapon(player, "weapon_efw_Lever"))
			player->GiveNamedItem("weapon_efw_Lever");
		ClientPrint(player->pev, HUD_PRINTCENTER, "Oh, you've broken the branch attempting to open the cage door! The door stays locked! Try something else.");
		return;
	}
	if (!strcmp(marker, "efw_kitchen_bin") && !strcmp(cls, "weapon_efw_Pliers"))
		try_stash_bin(player);
}

int Efw_ClientCommand(edict_t *pent)
{
	if (!pent || !pent->pvPrivateData) return 0;
	const char *cmd = CMD_ARGV(0);
	if (strncmp(cmd, "efw_", 4) != 0) return 0;
	CBasePlayer *player = (CBasePlayer *)CBaseEntity::Instance(pent);
	if (!strcmp(cmd, "efw_pick") && CMD_ARGC() > 1)
		pick_choice(player, atoi(CMD_ARGV(1)) - 1);
	else if (!strcmp(cmd, "efw_next"))
		advance_page(player);
	else if (!strcmp(cmd, "efw_Talk") && CMD_ARGC() > 1)
		Efw_BeginTalk(player, CMD_ARGV(1));
	else if (!strcmp(cmd, "efw_Give") && CMD_ARGC() > 2)
		give_item(player, command_item(1), CMD_ARGV(2));
	else if (!strcmp(cmd, "efw_UseWithMarker") && CMD_ARGC() > 2)
		use_with_marker(player, command_item(1), CMD_ARGV(2));
	else if (!strcmp(cmd, "efw_PickupPliers"))
		try_pickup_pliers(player);
	else if (!strcmp(cmd, "efw_HideUnderBuilding"))
		try_hide(player);
	else if (!strcmp(cmd, "efw_changelevel") && CMD_ARGC() > 1)
		change_map(CMD_ARGV(1));
	else if (!strcmp(cmd, "efw_ShowMenu") && CMD_ARGC() > 1)
		present_menu(player, atoi(CMD_ARGV(1)));
	else if (!strcmp(cmd, "efw_HelpScreen"))
		present_menu(player, 0x52);
	else if (!strcmp(cmd, "efw_board"))
		dismiss_board(player);
	else if (!strcmp(cmd, "efw_diary")) {
		// Toggle slot 5. efw_diary_next / efw_diary_prev force it open and
		// walk the page index, wrapping past the sentinel at index 0.
		g_diaryOpen = !g_diaryOpen;
		send_panel(player);
	} else if (!strcmp(cmd, "efw_diary_next")) {
		g_diaryOpen = 1;
		if (g_ndiary > 1) {
			g_diaryIndex++;
			if (g_diaryIndex >= g_ndiary) g_diaryIndex = 1;
		}
		send_panel(player);
	} else if (!strcmp(cmd, "efw_diary_prev")) {
		g_diaryOpen = 1;
		if (g_ndiary > 1) {
			g_diaryIndex--;
			if (g_diaryIndex <= 0) g_diaryIndex = g_ndiary - 1;
		}
		send_panel(player);
	} else if (!strcmp(cmd, "efw_pause")) {
		int on = CMD_ARGC() > 1 && CMD_ARGV(1)[0] == '1';
		if (on) player->pev->flags |= FL_FROZEN;
		else if (!g_ending) player->pev->flags &= ~FL_FROZEN;
	} else if (!strcmp(cmd, "efw_set_state") && CMD_ARGC() > 1) {
		int on = CMD_ARGC() > 2 && CMD_ARGV(2)[0] == '1';
		set_topic(CMD_ARGV(1), on);
	} else if (!strcmp(cmd, "efw_spider")) {
		try_interact(player);
	}
	return 1;
}

void Efw_StartFrame()
{
	load_scripts();
	int detected = detect_level();
	if (detected && detected != g_seenLevel) {
		g_seenLevel = detected;
		g_level = detected;
		// FUN_100c6780 runs from the player spawn at 0x1001a533.
		if (g_level == 1) g_hopeLatch = 1;
		if (g_hopeLatch) {
			g_hope = HOPE_START;
			g_hopeDead = 0;
			g_hopeLatch = 0;
			g_ntopics = 0;
			set_topic("ESCAPE", 1);
			set_topic("GREET", 1);
			set_topic("GOODBYE", 1);
			g_pliersInBin = 0;
			g_tagOnBoard = 0;
			g_binFails = 0;
		}
		g_ndiary = 0;
		g_diaryReady = 1;
		remember_diary(0, 2);
		remember_diary(1, 2);
		if (g_level >= 2) {
			for (int id = 2; id <= 10; id++) remember_diary(id, 2);
		}
		g_diaryIndex = 1;
		g_diaryOpen = 0;
		g_board = 0;
		g_caught = 0;
		g_talking = 0;
		g_annReady = 0;
		g_freshMap = 1;
	} else if (detected) {
		g_level = detected;
	}
	if (!g_msgsReady) {
		gmsgEfw = REG_USER_MSG("EFWShow", -1);
		g_msgsReady = 1;
		refresh_doors();
	}
	CBasePlayer *player = live_player();
	if (player && g_freshMap) {
		player->pev->flags &= ~FL_FROZEN;
		g_freshMap = 0;
	}
	if (!player || g_ending) return;
	seed_diary();
	drive_electrician();
	tick_announcer(player);

	if (!g_gaveTag && g_level == 1) {
		g_gaveTag = 1;
		if (!g_tagOnBoard && !has_weapon(player, "weapon_efw_IDTag"))
			player->GiveNamedItem("weapon_efw_IDTag");
	}

	float step = gpGlobals->frametime;
	if (step < 0) step = 0;
	if (step > HOPE_MAX_STEP) step = HOPE_MAX_STEP;
	g_hope -= step * HOPE_DECAY;
	clamp_hope();
	if (g_hope <= 0 && !g_hopeDead && !g_board) {
		g_hopeDead = 1;
		present_menu(player, 0x4d);
	}

	if (!blocked_trigger(player)) {
		g_safeOrigin = player->pev->origin;
		g_haveSafe = 1;
	}

	// efw_Talk keeps a partner out to 10000000 units. Drop the talk only when
	// that entity is gone.
	if (g_talking) {
		CBaseEntity *partner = UTIL_FindEntityByTargetname(NULL, g_partner);
		if (!partner) {
			g_talking = 0;
			send_panel(player);
		}
	}

	if (gpGlobals->time >= g_nextHopeSend) {
		g_nextHopeSend = gpGlobals->time + 0.5f;
		send_panel(player);
	}
}
