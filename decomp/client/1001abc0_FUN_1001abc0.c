
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1001abc0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if ((DAT_100a3a94 & 6) != 0) {
    return 1;
  }
  if ((DAT_100a4fdc & 0x80000000) == 0) {
    return 1;
  }
  if ((float)_DAT_1005acd0 <= *(float *)(param_1 + 0x2c)) {
    uStack_18 = DAT_100a3aac >> 0x10 & 0xff;
    uStack_1c = DAT_100a3aac >> 8 & 0xff;
    uStack_20 = DAT_100a3aac & 0xff;
  }
  else {
    uStack_20 = 0x10;
    uStack_18 = 0xff;
    uStack_1c = 0x10;
  }
  FUN_1001e790(&uStack_18,&uStack_1c,&uStack_20);
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar2 = DAT_100a4dcc - iVar3 / 2;
  iVar4 = (*(int *)(*(int *)(param_1 + 0x20) + 0xc) - *(int *)(*(int *)(param_1 + 0x24) + 8)) / 2;
  (*DAT_100a5000)(*(undefined4 *)(param_1 + 0x14),uStack_18,uStack_1c,uStack_20);
  (*DAT_100a500c)(0,iVar2 - iVar3,iVar4,*(undefined4 *)(param_1 + 0x20));
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar3 = DAT_100a4dcc - *(int *)(param_1 + 0x3c) / 2;
    (*DAT_100a5000)(*(undefined4 *)(param_1 + 0x1c),uStack_18,uStack_1c,uStack_20);
    (*DAT_100a500c)(0,iVar3,iVar4,*(undefined4 *)(param_1 + 0x28));
  }
  iStack_14 = *(int *)(param_1 + 0x3c);
  iVar2 = (DAT_100a4dcc - iStack_14 / 2) - iStack_14;
  lVar5 = __ftol();
  iVar3 = (int)lVar5;
  if (iVar3 < iStack_14) {
    piVar1 = *(int **)(param_1 + 0x24);
    iStack_10 = *piVar1 + iVar3;
    iStack_c = piVar1[1];
    iStack_8 = piVar1[2];
    iStack_4 = piVar1[3];
    (*DAT_100a5000)(*(undefined4 *)(param_1 + 0x18),uStack_18,uStack_1c,uStack_20);
    (*DAT_100a500c)(0,iVar3 + iVar2,iVar4,&iStack_10);
  }
  return 1;
}

