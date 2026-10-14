
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100767d0(int param_1)

{
  int iVar1;
  
  if ((*(float *)(param_1 + 0x174) != _DAT_100dd5f8) &&
     (*(float *)(*(int *)(param_1 + 4) + 0x104) != *(float *)(param_1 + 0x58))) {
    *(float *)(param_1 + 0x174) =
         (*(float *)(*(int *)(param_1 + 4) + 0x104) - *(float *)(param_1 + 0x58)) +
         *(float *)(param_1 + 0x174);
  }
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x104) != *(float *)(param_1 + 0x58)) {
    *(float *)(param_1 + 0x54) =
         (*(float *)(iVar1 + 0x104) - *(float *)(param_1 + 0x58)) + *(float *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x104);
  }
  return;
}

