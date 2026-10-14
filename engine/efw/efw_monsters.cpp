#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "monsters.h"
#include "schedule.h"
#include "efw/efw.h"

static const char *refugee_model(const char *name)
{
	if (!strcmp(name, "Shala") || !strcmp(name, "Elika") || !strcmp(name, "Laleh"))
		return "models/DetaineeFemaleT0.mdl";
	return "models/DetaineeMaleT0.mdl";
}

class CRefugee : public CBaseMonster
{
public:
	void Spawn();
	void Precache();
	int Classify() { return CLASS_PLAYER_ALLY; }
	int ObjectCaps() { return CBaseMonster::ObjectCaps() | FCAP_IMPULSE_USE; }
	void Use(CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value);
};

LINK_ENTITY_TO_CLASS(monster_refugee, CRefugee)

void CRefugee::Precache()
{
	PRECACHE_MODEL((char *)refugee_model(STRING(pev->targetname)));
	Efw_Precache();
}

void CRefugee::Spawn()
{
	Precache();
	SET_MODEL(ENT(pev), refugee_model(STRING(pev->targetname)));
	UTIL_SetSize(pev, VEC_HUMAN_HULL_MIN, VEC_HUMAN_HULL_MAX);
	pev->solid = SOLID_SLIDEBOX;
	pev->movetype = MOVETYPE_STEP;
	pev->health = pev->health > 0 ? pev->health : 50;
	pev->takedamage = DAMAGE_NO;
	pev->view_ofs = Vector(0, 0, 50);
	m_bloodColor = BLOOD_COLOR_RED;
	m_MonsterState = MONSTERSTATE_NONE;
	m_afCapability = 0;
	MonsterInit();
	SetThink(NULL);
	pev->nextthink = 0;
}

void CRefugee::Use(CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value)
{
	if (!pActivator || !pActivator->IsPlayer()) return;
	Efw_BeginTalk((CBasePlayer *)pActivator, STRING(pev->targetname));
}

class CPatrolGuard : public CBaseMonster
{
public:
	void Spawn();
	void Precache();
	int Classify() { return CLASS_HUMAN_MILITARY; }
	void PatrolThink();
	edict_t *m_path;
};

LINK_ENTITY_TO_CLASS(monster_patrol_guard, CPatrolGuard)

void CPatrolGuard::Precache()
{
	PRECACHE_MODEL("models/Security.mdl");
	Efw_Precache();
}

void CPatrolGuard::Spawn()
{
	Precache();
	SET_MODEL(ENT(pev), "models/Security.mdl");
	UTIL_SetSize(pev, VEC_HUMAN_HULL_MIN, VEC_HUMAN_HULL_MAX);
	pev->solid = SOLID_SLIDEBOX;
	pev->movetype = MOVETYPE_STEP;
	pev->health = 100;
	pev->takedamage = DAMAGE_NO;
	m_bloodColor = BLOOD_COLOR_RED;
	m_path = NULL;
	MonsterInit();
	SetThink(&CPatrolGuard::PatrolThink);
	pev->nextthink = gpGlobals->time + 0.2f;
}

void CPatrolGuard::PatrolThink()
{
	// FUN_100c54e0. A storyboard pause stops the patrol and pins the guard.
	if (Efw_GuardPaused()) {
		pev->framerate = 0;
		pev->nextthink = gpGlobals->time + 0.05f;
		pev->velocity = g_vecZero;
		return;
	}
	pev->framerate = 1;
	pev->movetype = MOVETYPE_STEP;
	pev->nextthink = gpGlobals->time + 0.1f;
	if (Efw_GuardSpot(this)) return;
	if (!pev->target || !STRING(pev->target)[0]) return;
	if (FNullEnt(m_path) || m_path->free)
		m_path = FIND_ENTITY_BY_TARGETNAME(NULL, STRING(pev->target));
	if (FNullEnt(m_path)) return;
	Vector dest = m_path->v.origin;
	Vector delta = dest - pev->origin;
	delta.z = 0;
	if (delta.Length() < 28) {
		if (m_path->v.target)
			m_path = FIND_ENTITY_BY_TARGETNAME(NULL, STRING(m_path->v.target));
		return;
	}
	Vector dir = delta.Normalize();
	pev->velocity.x = dir.x * 75;
	pev->velocity.y = dir.y * 75;
	pev->angles.y = UTIL_VecToYaw(dir);
	pev->ideal_yaw = pev->angles.y;
}

class CEfwGuard : public CPatrolGuard
{
public:
	void Spawn();
};

LINK_ENTITY_TO_CLASS(monster_efw_guard, CEfwGuard)

void CEfwGuard::Spawn()
{
	CPatrolGuard::Spawn();
	pev->target = 0;
}

class CEfwMarker : public CBaseEntity
{
public:
	void Spawn();
	void Precache() {}
};

LINK_ENTITY_TO_CLASS(efw_Marker, CEfwMarker)

void CEfwMarker::Spawn()
{
	pev->movetype = MOVETYPE_NONE;
	pev->solid = SOLID_TRIGGER;
	if (pev->model)
		SET_MODEL(ENT(pev), STRING(pev->model));
	pev->solid = SOLID_NOT;
	pev->effects |= EF_NODRAW;
	pev->rendermode = kRenderTransTexture;
	pev->renderamt = 0;
}

class CEnvFlag : public CBaseEntity
{
public:
	void Spawn() { pev->solid = SOLID_NOT; pev->movetype = MOVETYPE_NONE; }
	void Use(CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value) {}
};

LINK_ENTITY_TO_CLASS(env_flag, CEnvFlag)
