#pragma once

class CBasePlayer;
class CBaseMonster;
struct edict_s;

void Efw_StartFrame();
void Efw_Precache();
int Efw_ClientCommand(edict_s *player);
int Efw_TryUse(CBasePlayer *player);

void Efw_BeginTalk(CBasePlayer *player, const char *targetname);
// Returns 1 when the guard is leaving the path to investigate or chase.
int Efw_GuardSpot(CBaseMonster *guard);
int Efw_GuardPaused();
int Efw_PlayerIsHiding();
