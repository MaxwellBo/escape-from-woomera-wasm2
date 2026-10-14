
uint __cdecl FUN_100cdec5(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_101361fc;
  while( true ) {
    if (DAT_101361fc + DAT_101361f8 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

