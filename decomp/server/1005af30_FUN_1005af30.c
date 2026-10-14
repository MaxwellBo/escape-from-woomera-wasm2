
void __thiscall FUN_1005af30(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  void *this_00;
  char *pcVar5;
  bool bVar6;
  undefined3 uVar4;
  
  pcVar5 = s_points_10110600;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar4 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar4,bVar1);
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005af6a:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005af6f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar4,bVar1);
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005af6a;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005af6f:
  if (iVar3 == 0) {
    iVar3 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    *(float *)(*(int *)((int)this + 4) + 0x164) = (float)iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_1005acd0(this,param_1);
  return;
}

