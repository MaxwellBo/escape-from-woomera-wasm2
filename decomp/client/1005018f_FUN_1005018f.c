
uint __cdecl FUN_1005018f(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_100bd044;
  while( true ) {
    if (DAT_100bd044 + DAT_100bd040 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

