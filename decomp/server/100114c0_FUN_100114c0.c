
void __thiscall FUN_100114c0(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar6;
  bool bVar7;
  longlong lVar8;
  undefined3 uVar5;
  
  pbVar6 = &DAT_10103c1c;
  pbVar2 = *(byte **)(param_1 + 4);
  puVar4 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)puVar4 >> 8);
    puVar4 = (undefined1 *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_100114fa:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_100114ff;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar4 = (undefined1 *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_100114fa;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100114ff:
  if (iVar3 == 0) {
    FUN_100c82a6(puVar4,*(byte **)(param_1 + 8));
    lVar8 = __ftol();
    *(int *)(*(int *)((int)this + 4) + 0x110) = (int)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_100991d0(this,param_1);
  return;
}

