
/* WARNING: Removing unreachable block (ram,0x100a58b5) */
/* WARNING: Removing unreachable block (ram,0x100a58c9) */

undefined4 __cdecl FUN_100a5880(int *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  void *this;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  bool bVar7;
  
  uVar2 = (**(code **)(*param_1 + 0x3c))();
  if ((uVar2 & 0x80) != 0) {
    return 1;
  }
  if ((*(int *)(param_1[1] + 0x108) == 0xc) && (iVar4 = *(int *)(param_1[1] + 0x194), iVar4 != 0)) {
    param_1 = *(int **)(iVar4 + 0x7c);
  }
  uVar5 = 1;
  this = (void *)FUN_100af030(0,param_2);
  do {
    if (this == (void *)0x0) {
      return uVar5;
    }
    pcVar6 = s_trigger_transition_10119a48;
    pbVar3 = (byte *)(**(int **)((int)this + 4) + *(int *)(DAT_10122044 + 0x98));
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_100a5925:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_100a592a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_100a5925;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100a592a:
    if (iVar4 == 0) {
      iVar4 = FUN_10019f50(this,(int)param_1);
      if (iVar4 != 0) {
        return 1;
      }
      uVar5 = 0;
    }
    this = (void *)FUN_100af030((int)this,param_2);
  } while( true );
}

