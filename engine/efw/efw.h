#pragma once

class CBasePlayer;
class CBaseMonster;
struct edict_s;

void Efw_StartFrame();
int Efw_ClientCommand(edict_s *player);
int Efw_TryUse(CBasePlayer *player);

void Efw_BeginTalk(CBasePlayer *player, const char *targetname);
void Efw_GuardSpot(CBaseMonster *guard);
int Efw_PlayerIsHiding();
