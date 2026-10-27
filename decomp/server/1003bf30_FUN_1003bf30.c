
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003bf30(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  iVar1 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar1 + 0x1a0) & 2) == 0) {
    *(uint *)(iVar1 + 0x118) = *(uint *)(iVar1 + 0x118) | 0x80;
  }
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                  *(int *)(*(int *)(param_1 + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  if (*(float *)(*(int *)(param_1 + 4) + 0x164) == _DAT_100dd5f8) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x164) = 0x41f00000;
  }
  iVar1 = *(int *)(param_1 + 4);
  FUN_100afdc0(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
  return;
}

