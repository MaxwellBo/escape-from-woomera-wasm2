
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100196a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x108) == 7) {
    *(float *)(iVar1 + 0x104) = *(float *)(iVar1 + 0x100) + (float)_DAT_100e08d8;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x104);
  }
  for (iVar1 = *(int *)(param_1 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
    FUN_100196a0(iVar1);
  }
  return;
}

