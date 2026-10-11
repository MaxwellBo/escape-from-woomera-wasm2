#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "monsters.h"
#include "weapons.h"
#include "player.h"
#include "gamerules.h"
#include "efw/efw.h"

// Recovered from EscapeFromWoomera.dll and linked into the Spirit of Half-Life
// SDK. Hope is float slot 1: clamp(hope - deltaTime * (1/12), 0, 100).
// Menu bytes 0x3f and 0x43 add 15. The value stored at map start was not in
// the DLL; 100 is the playable cap so the recovered decay can empty it.
// DAT_10134874's call period was not recovered; this build feeds gpGlobals->frametime.

static const float HOPE_MAX = 100.0f;
static const float HOPE_DECAY = 1.0f / 12.0f;
static const float HOPE_BONUS = 15.0f;

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
static float g_hope = HOPE_MAX;
static int g_loaded = 0;
static int g_gaveTag = 0;
static int g_tagOnBoard = 0;
static int g_pliersInBin = 0;
static int g_ending = 0;
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

static int map_level()
{
	const char *name = STRING(gpGlobals->mapname);
	if (strstr(name, "level2")) return 2;
	if (strstr(name, "level3")) return 3;
	return 1;
}

static void send_panel(CBasePlayer *player);

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
			int id = atoi(arg);
			int have = 0;
			for (int i = 0; i < g_ndiary; i++) if (g_diary[i] == id) have = 1;
			if (!have && g_ndiary < MAX_DIARY) g_diary[g_ndiary++] = id;
			if (player) ClientPrint(player->pev, HUD_PRINTTALK, UTIL_VarArgs("Diary entry %d.\n", id));
		} else if (!strcmp(name, "Goodbye")) {
			g_talking = 0;
		} else if (!strcmp(name, "ServerCommand")) {
			if (!strcmp(arg, "efw_GetPackage")) {
				add_hope(HOPE_BONUS);
				if (player) ClientPrint(player->pev, HUD_PRINTCENTER, "A package. A little hope returns.");
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

static void refresh_doors()
{
	int gate = g_tagOnBoard ? SOLID_NOT : SOLID_BSP;
	set_doors("efw_compound_gate", gate);
	set_doors("efw_1stcompound_gate", gate);
	set_doors("efw_actual_kitchen_door", topic_on("OnKitchenRoster") ? SOLID_NOT : SOLID_BSP);
	if (g_level == 2) set_doors("efw_cage_door", SOLID_NOT);
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
	MESSAGE_BEGIN(MSG_ONE, gmsgEfw, NULL, player->pev);
	WRITE_BYTE(2);
	WRITE_BYTE(g_hope > 0 ? (int)(g_hope + 0.5f) : 0);
	if (!g_talking) {
		WRITE_BYTE(0);
	} else if (g_mode == 0) {
		WRITE_BYTE(g_nchoices + 1);
		write_short(UTIL_VarArgs("Talking to %s", g_partner));
		EfwScript *script = find_script(g_scriptName);
		for (int i = 0; i < g_nchoices; i++) {
			const char *q = "Give him the pliers.";
			if (g_choiceEntry[i] >= 0 && script)
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
	if (g_choiceEntry[index] < 0) {
		take_weapon(player, "weapon_efw_Pliers");
		set_ending(player, 3, "Amir takes the pliers. The fence is next.");
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

static int try_marker(CBasePlayer *player)
{
	CBaseEntity *ent = NULL;
	while ((ent = UTIL_FindEntityByClassname(ent, "efw_Marker")) != NULL) {
		if (!point_in_entity(player->pev->origin, ent, 24)) continue;
		const char *name = STRING(ent->pev->targetname);
		if (!strcmp(name, "efw_IDTag_Position")) {
			if (!has_weapon(player, "weapon_efw_IDTag")) {
				ClientPrint(player->pev, HUD_PRINTCENTER, "You have no ID tag to leave here.");
				return 1;
			}
			take_weapon(player, "weapon_efw_IDTag");
			g_tagOnBoard = 1;
			refresh_doors();
			ClientPrint(player->pev, HUD_PRINTCENTER, "You leave the ID tag on the board.");
			return 1;
		}
		if (!strcmp(name, "efw_PliersMarker")) {
			if (!topic_on("ELECTRICIAN")) {
				ClientPrint(player->pev, HUD_PRINTCENTER, "Tools. You don't know whose they are yet.");
				return 1;
			}
			CBaseEntity *electrician = UTIL_FindEntityByTargetname(NULL, "efw_electrician");
			if (electrician && (electrician->pev->origin - player->pev->origin).Length() < 160) {
				ClientPrint(player->pev, HUD_PRINTCENTER, "The electrician is too close.");
				return 1;
			}
			if (!has_weapon(player, "weapon_efw_Pliers"))
				player->GiveNamedItem("weapon_efw_Pliers");
			set_topic("PLIERS_GOT_PLIERS", 1);
			ClientPrint(player->pev, HUD_PRINTCENTER, "You take the pliers.");
			return 1;
		}
		if (!strcmp(name, "efw_kitchen_bin")) {
			if (!has_weapon(player, "weapon_efw_Pliers")) {
				ClientPrint(player->pev, HUD_PRINTCENTER, "Nothing of yours is hidden in the bin.");
				return 1;
			}
			take_weapon(player, "weapon_efw_Pliers");
			g_pliersInBin = 1;
			ClientPrint(player->pev, HUD_PRINTCENTER, "You stash the pliers in the bin.");
			return 1;
		}
		if (!strcmp(name, "efw_hiding_place")) {
			if (g_level == 1) {
				if (has_weapon(player, "weapon_efw_IDTag") || !g_tagOnBoard) {
					ClientPrint(player->pev, HUD_PRINTCENTER, "Your ID tag would give you away. Leave it on the board.");
					return 1;
				}
				if (has_weapon(player, "weapon_efw_Pliers")) {
					ClientPrint(player->pev, HUD_PRINTCENTER, "Hide the pliers before you disappear.");
					return 1;
				}
				ClientPrint(player->pev, HUD_PRINTCENTER, "You hide. Night falls.");
				change_map("efw_prototype_level2");
				return 1;
			}
			ClientPrint(player->pev, HUD_PRINTCENTER, "Dawn. You slip back into the camp.");
			change_map("efw_prototype_level3");
			return 1;
		}
	}
	return 0;
}

static int blocked_trigger(CBasePlayer *player)
{
	CBaseEntity *ent = NULL;
	int blocked = 0;
	while ((ent = UTIL_FindEntityByClassname(ent, "trigger_multiple")) != NULL) {
		if (!point_in_entity(player->pev->origin, ent, 0)) continue;
		const char *name = STRING(ent->pev->targetname);
		if (!strcmp(name, "efw_kitchen_door")) {
			if (!topic_on("OnKitchenRoster")) {
				ClientPrint(player->pev, HUD_PRINTCENTER, "Where do you think you're going? You can't enter without a kitchen pass.");
				blocked = 1;
			}
		} else if (!strcmp(name, "efw_compound_gate") || !strcmp(name, "efw_1stcompound_gate")
			|| !strcmp(name, "efw_1stcompound_entry") || !strcmp(name, "efw_2ndcompound_entry")) {
			if (!g_tagOnBoard) {
				ClientPrint(player->pev, HUD_PRINTCENTER, "The guard stops you. Leave your ID tag on the board first.");
				blocked = 1;
			}
		} else if (!strcmp(name, "efw_approach_bin") && g_level == 2) {
			if (g_pliersInBin) {
				g_pliersInBin = 0;
				if (!has_weapon(player, "weapon_efw_Pliers"))
					player->GiveNamedItem("weapon_efw_Pliers");
				ClientPrint(player->pev, HUD_PRINTCENTER, "The pliers are still in the bin. You take them.");
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

void Efw_GuardSpot(CBaseMonster *guard)
{
	if (g_ending || g_level != 2 || !guard) return;
	CBasePlayer *player = live_player();
	if (!player) return;
	if (Efw_PlayerIsHiding()) return;
	if ((player->pev->origin - guard->pev->origin).Length() < 180)
		set_ending(player, 2, "A guard catches you. Isolation.");
}

int Efw_TryUse(CBasePlayer *player)
{
	if (!player || g_ending) return 0;
	if (!(player->m_afButtonPressed & IN_USE)) return 0;
	load_scripts();
	if (g_talking) {
		if (g_mode == 1) advance_page(player);
		else g_talking = 0, send_panel(player);
		return 1;
	}
	if (try_marker(player)) return 1;
	CBaseEntity *npc = nearest_named(player, "monster_refugee", 140);
	if (!npc) npc = nearest_named(player, "monster_barney", 140);
	if (!npc) return 0;
	UTIL_MakeVectors(player->pev->v_angle);
	Vector los = (npc->pev->origin - (player->pev->origin + player->pev->view_ofs)).Normalize();
	if (DotProduct(los, gpGlobals->v_forward) < 0.15f) return 0;
	Efw_BeginTalk(player, STRING(npc->pev->targetname));
	return 1;
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
	return 1;
}

void Efw_StartFrame()
{
	load_scripts();
	g_level = map_level();
	if (!g_msgsReady) {
		gmsgEfw = REG_USER_MSG("EFWShow", -1);
		g_msgsReady = 1;
		refresh_doors();
	}
	CBasePlayer *player = live_player();
	if (!player || g_ending) return;

	if (!g_gaveTag && g_level == 1) {
		g_gaveTag = 1;
		if (!g_tagOnBoard && !has_weapon(player, "weapon_efw_IDTag"))
			player->GiveNamedItem("weapon_efw_IDTag");
	}

	g_hope -= gpGlobals->frametime * HOPE_DECAY;
	clamp_hope();
	if (g_hope <= 0)
		set_ending(player, 1, "Run out of hope!");

	if (!blocked_trigger(player)) {
		g_safeOrigin = player->pev->origin;
		g_haveSafe = 1;
	}

	if (g_talking) {
		CBaseEntity *partner = UTIL_FindEntityByTargetname(NULL, g_partner);
		if (!partner || (partner->pev->origin - player->pev->origin).Length() > 220) {
			g_talking = 0;
			send_panel(player);
		}
	}

	if (gpGlobals->time >= g_nextHopeSend) {
		g_nextHopeSend = gpGlobals->time + 0.5f;
		send_panel(player);
	}
}
