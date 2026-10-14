
void __thiscall FUN_100a4cb0(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar6;
  bool bVar7;
  longlong lVar8;
  undefined3 uVar5;
  
  pcVar6 = s_count_10119874;
  pbVar2 = *(byte **)(param_1 + 4);
  puVar4 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)puVar4 >> 8);
    puVar4 = (undefined1 *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100a4cea:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_100a4cef;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar4 = (undefined1 *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100a4cea;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a4cef:
  if (iVar3 == 0) {
    FUN_100c82a6(puVar4,*(byte **)(param_1 + 8));
    lVar8 = __ftol();
    *(int *)((int)this + 0x128) = (int)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_100991d0(this,param_1);
  return;
}

