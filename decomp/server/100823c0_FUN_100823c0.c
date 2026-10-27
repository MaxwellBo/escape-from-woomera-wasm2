
void __thiscall FUN_100823c0(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  void *this_00;
  byte *pbVar6;
  bool bVar7;
  undefined3 uVar5;
  
  pbVar6 = &DAT_101033ac;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_100823fa:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_100823ff;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_100823fa;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100823ff:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(this_00,*(byte **)(param_1 + 8));
    *(undefined4 *)((int)this + 0x308) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_10060f00(this,param_1);
  return;
}

