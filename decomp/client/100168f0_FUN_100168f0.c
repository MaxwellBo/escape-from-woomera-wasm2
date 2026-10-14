
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100168f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_1001c090(&DAT_100a3a40,s_bucket1_10077f60);
  *(int *)(param_1 + 0x20) = iVar1;
  iVar1 = FUN_1001c090(&DAT_100a3a40,s_selection_10077f54);
  *(int *)(param_1 + 0x24) = iVar1;
  if (*(int *)(param_1 + 0x20) < 0) {
    _DAT_100a3948 = 0;
  }
  else {
    _DAT_100a3948 = *(undefined4 *)(DAT_100a3ab0 + *(int *)(param_1 + 0x20) * 4);
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x20) * 0x10 + DAT_100a3ab4);
  DAT_100a3960 = piVar2[1] - *piVar2;
  iVar1 = *(int *)(param_1 + 0x20) * 0x10 + DAT_100a3ab4;
  DAT_100a396c = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8);
  iVar1 = *(int *)(param_1 + 0x20) * 0x10 + DAT_100a3ab4;
  iVar1 = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8);
  if (DAT_100a3a38 <= iVar1) {
    DAT_100a3a38 = iVar1;
  }
  FUN_10015e80(0x100a0ea8);
  if (0x27f < DAT_100a4dcc) {
    DAT_100a3964 = 0x14;
    DAT_100a3934 = 4;
    return 1;
  }
  DAT_100a3964 = 10;
  DAT_100a3934 = 2;
  return 1;
}

