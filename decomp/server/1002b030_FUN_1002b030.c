
void __fastcall FUN_1002b030(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)param_1 + 0xbc)));
  iVar2 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)param_1 + 0xc0)));
  if ((iVar1 == 0) || (iVar2 == 0)) {
    return;
  }
  iVar3 = FUN_1002a500(iVar1);
  iVar4 = FUN_1002a500(iVar2);
  uVar6 = 2;
  iVar7 = iVar2;
  if (iVar3 == 0) {
    if (iVar4 != 0) {
      uVar6 = 1;
      iVar7 = iVar1;
      iVar1 = iVar2;
    }
  }
  else if (iVar4 == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(uint *)(*(int *)((int)param_1 + 4) + 0x148) =
       *(uint *)(*(int *)((int)param_1 + 4) + 0x148) & 0xf0 | uVar6;
  if (((uVar6 == 0) || (uVar6 == 1)) || (uVar6 == 3)) {
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = *(int *)((int)param_1 + 4);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    if ((uVar6 == 0) || (uVar6 == 3)) {
      iVar1 = *(int *)(iVar7 + 4);
      iVar2 = *(int *)((int)param_1 + 4);
      *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar1 + 8);
      *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar1 + 0x10);
      FUN_100298f0((int)param_1);
      return;
    }
    uVar5 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x208);
  }
  else {
    uVar6 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x208));
    FUN_10029490(param_1,uVar6);
    uVar5 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x208);
  }
  uVar6 = (*DAT_10121f24)(uVar5);
  FUN_100294e0(param_1,uVar6);
  FUN_100298f0((int)param_1);
  return;
}

