
void __fastcall FUN_10014da0(int *param_1)

{
  uint *this;
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  
  uVar3 = FUN_10004f10((int)param_1);
  if (param_1[0x76] == 2) {
    this = (uint *)(param_1 + 0x58);
    bVar2 = FUN_10019450(this);
    if ((CONCAT31(extraout_var,bVar2) != 0) && ((uVar3 & 0x300) != 0)) {
      iVar4 = FUN_10019460(this);
      pcVar6 = s_monster_headcrab_101040d0;
      pbVar5 = (byte *)(*(int *)(DAT_10122044 + 0x98) + **(int **)(iVar4 + 4));
      do {
        bVar1 = *pbVar5;
        bVar2 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_10014e18:
          iVar4 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
          goto LAB_10014e1d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar2 = bVar1 < (byte)pcVar6[1];
        if (bVar1 != pcVar6[1]) goto LAB_10014e18;
        pbVar5 = pbVar5 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_10014e1d:
      if (iVar4 == 0) {
        FUN_10019420(this,0);
        param_1[0x77] = 3;
      }
    }
  }
  iVar4 = FUN_10062180(param_1);
  param_1[0x77] = iVar4;
  return;
}

