
undefined4 __cdecl FUN_100c5e30(int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)param_1 >> 8);
  if (*(int *)(param_1 + 0x2e4) == 8) {
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}

