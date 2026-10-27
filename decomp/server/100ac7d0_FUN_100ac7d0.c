
void __fastcall FUN_100ac7d0(int param_1)

{
  if (*(int *)(param_1 + 0x310) != 0) {
    if (*(int *)(param_1 + 0x314) != 0xff) {
      *(undefined4 *)(param_1 + 0x314) = 0xff;
    }
    *(float *)(*(int *)(*(int *)(param_1 + 0x310) + 4) + 0x14c) = (float)*(int *)(param_1 + 0x314);
  }
  return;
}

