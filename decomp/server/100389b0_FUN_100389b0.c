
void __fastcall FUN_100389b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0xd8) =
         *(float *)(*(int *)(param_1 + 4) + 0x54) - *(float *)(*(int *)(iVar1 + 4) + 0x54);
    *(float *)(param_1 + 0xe8) =
         *(float *)(*(int *)(param_1 + 4) + 0x50) - *(float *)(*(int *)(iVar1 + 4) + 0x50);
    return;
  }
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x54);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x50);
  return;
}

