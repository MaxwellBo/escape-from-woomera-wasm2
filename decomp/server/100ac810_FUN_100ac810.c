
void __fastcall FUN_100ac810(int param_1)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0x310) != 0) && (0 < *(int *)(param_1 + 0x314))) {
    uVar1 = *(int *)(param_1 + 0x314) - 0x1e;
    uVar1 = uVar1 & ((int)uVar1 < 0) - 1;
    *(uint *)(param_1 + 0x314) = uVar1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x310) + 4) + 0x14c) = (float)(int)uVar1;
  }
  return;
}

