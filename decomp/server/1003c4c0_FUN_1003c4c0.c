
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1003c4c0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  void *this;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar2 = FUN_1001a170(param_1,param_4);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = (**(code **)(*param_1 + 0x58))();
  if (iVar2 != 0) {
    FUN_10019680((int)param_1);
    FUN_1003c760((int)param_1);
    return;
  }
  this = (void *)FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x2e]));
  if (this == (void *)0x0) {
LAB_1003c63c:
    (*DAT_10121efc)(4,s_Invalid_or_missing_tank___s__for_10109570,
                    *(int *)(DAT_10122044 + 0x98) + param_1[0x2e]);
    return;
  }
  pcVar5 = s_func_tank_10109554;
  pbVar3 = (byte *)(*(int *)(DAT_10122044 + 0x98) + **(int **)((int)this + 4));
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1003c54c:
      iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1003c551;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1003c54c;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_1003c551:
  if (iVar2 != 0) goto LAB_1003c63c;
  if (*(int *)((int)this + 0xbc) != 0) {
    return;
  }
  if (*(int *)((int)this + 0xb8) != 0) {
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
      return;
    }
    FUN_100393e0(this,*(int *)((int)this + 0xb8));
  }
  if (param_1[0x32] == 3) {
    if (param_1[0x2f] == 0) {
      iVar2 = FUN_100396b0(this);
    }
    else {
      iVar2 = FUN_100af120((byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x2f]),
                           (float *)(*(int *)((int)this + 4) + 8),*(float *)((int)this + 200));
    }
    if (iVar2 == 0) goto LAB_1003c5de;
    *(int *)((int)this + 0xc0) = iVar2;
  }
  FUN_100399a0(this,(int)param_1);
LAB_1003c5de:
  uVar4 = *(uint *)(*(int *)((int)this + 4) + 0x1a0);
  if (param_1[0x33] == 2) {
    uVar4 = uVar4 | 0x10000;
  }
  else {
    uVar4 = uVar4 & 0xfffeffff;
  }
  *(uint *)(*(int *)((int)this + 4) + 0x1a0) = uVar4;
  param_1[0x37] = (int)this;
  if ((float)param_1[0x31] == _DAT_100dd5f8) {
    return;
  }
  param_1[0x1d] = (int)FUN_1003c720;
  (**(code **)(*param_1 + 8))(param_1[0x31]);
  return;
}

