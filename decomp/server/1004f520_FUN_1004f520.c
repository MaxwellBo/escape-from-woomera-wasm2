
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004f520(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xdc) + 0x534 + *(int *)(param_1 + 0x104) * 4);
  piVar1 = (int *)(*(int *)(param_1 + 0xdc) + 0x534 + *(int *)(param_1 + 0x104) * 4);
  while ((iVar2 < 8 && (*(float *)(param_1 + 0x124) < *DAT_10122044))) {
    *piVar1 = iVar2 + 1;
    piVar1 = (int *)(*(int *)(param_1 + 0xdc) + 0x534 + *(int *)(param_1 + 0x104) * 4);
    *(float *)(param_1 + 0x124) = *(float *)(param_1 + 0x124) + (float)_DAT_100dd648;
    iVar2 = *piVar1;
  }
  return;
}

