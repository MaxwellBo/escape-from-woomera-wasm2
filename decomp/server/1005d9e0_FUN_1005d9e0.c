
undefined4 __fastcall FUN_1005d9e0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x1a4);
  if ((uVar1 & 0x200) != 0) {
    *(uint *)(*(int *)(param_1 + 4) + 0x1a4) = uVar1 - 0x200;
  }
  *(undefined4 *)(param_1 + 0x1dc) = 5;
  return 1;
}

