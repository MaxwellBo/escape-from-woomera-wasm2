
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100a9d10(int param_1)

{
  bool bVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 8;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x148) = 2;
  bVar1 = *(float *)(param_1 + 0xf8) == _DAT_100dd5f8;
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8);
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xf8) = 0x43fa0000;
  }
  if (*(float *)(param_1 + 0xfc) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1 + 0xfc) = 0x43fa0000;
  }
  return;
}

