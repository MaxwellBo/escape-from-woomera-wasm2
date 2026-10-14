
/* public: void __thiscall CBaseDoor::DoorTouch(class CBaseEntity *) */

void __thiscall CBaseDoor::DoorTouch(CBaseDoor *this,CBaseEntity *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined3 extraout_var;
  char *pcVar4;
  bool bVar5;
  
                    /* 0x276a0  80  ?DoorTouch@CBaseDoor@@QAEXPAVCBaseEntity@@@Z */
  pcVar4 = s_player_10101c54;
  pbVar2 = (byte *)(**(int **)(param_1 + 4) + *(int *)(DAT_10122044 + 0x98));
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_100276ea:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_100276ef;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_100276ea;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100276ef:
  if (iVar3 == 0) {
    if (*(int *)(this + 0x158) != 0) {
      bVar5 = FUN_100b0030(*(int *)(this + 0x158),param_1);
      if (CONCAT31(extraout_var,bVar5) == 0) {
        FUN_10026660(*(int *)(this + 4),(int *)(this + 0x160),1,0.0);
      }
    }
    iVar3 = *(int *)(this + 4);
    if ((*(int *)(iVar3 + 0x1cc) != 0) && ((*(uint *)(iVar3 + 0x1a0) & 0x400) == 0)) {
      FUN_10026660(iVar3,(int *)(this + 0x160),1,0.0);
      return;
    }
    FUN_10019420(this + 0xc0,(int)param_1);
    iVar3 = FUN_10027840(this);
    if (iVar3 != 0) {
      *(undefined4 *)(this + 0x78) = 0;
    }
  }
  return;
}

