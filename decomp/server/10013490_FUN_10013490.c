
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_10013490(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  
  uVar3 = FUN_1005d250(param_1);
  if (*DAT_10122044 - *(float *)(param_1 + 0x30c) <= _DAT_100ddacc) {
    uVar3 = 0x40040;
  }
  bVar2 = FUN_10019450((uint *)(param_1 + 0x160));
  if (CONCAT31(extraout_var,bVar2) != 0) {
    iVar4 = FUN_10019460((uint *)(param_1 + 0x160));
    pcVar6 = s_monster_headcrab_101040d0;
    pbVar5 = (byte *)((int)DAT_10122044[0x26] + **(int **)(iVar4 + 4));
    do {
      bVar1 = *pbVar5;
      bVar2 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_10013513:
        iVar4 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
        goto LAB_10013518;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar2 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_10013513;
      pbVar5 = pbVar5 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10013518:
    if (iVar4 == 0) {
      return 0x40040;
    }
  }
  return uVar3;
}

