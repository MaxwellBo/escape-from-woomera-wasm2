
void __fastcall FUN_10046130(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x308) == 0);
  *(uint *)(param_1 + 0x308) = uVar1;
  if (uVar1 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0x3f800000;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0;
  return;
}

