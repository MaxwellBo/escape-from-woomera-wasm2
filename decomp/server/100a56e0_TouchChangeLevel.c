
/* public: void __thiscall CChangeLevel::TouchChangeLevel(class CBaseEntity *) */

void __thiscall CChangeLevel::TouchChangeLevel(CChangeLevel *this,CBaseEntity *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
                    /* 0xa56e0  257  ?TouchChangeLevel@CChangeLevel@@QAEXPAVCBaseEntity@@@Z */
  pcVar4 = s_player_10101c54;
  pbVar2 = (byte *)(**(int **)(param_1 + 4) + *(int *)(DAT_10122044 + 0x98));
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_100a572a:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_100a572f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_100a572a;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a572f:
  if (iVar3 == 0) {
    FUN_100a54d0(this,(int *)param_1);
  }
  return;
}

