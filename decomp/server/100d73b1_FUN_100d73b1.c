
void __cdecl FUN_100d73b1(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_100d3f8f();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_100d3f8f();
    *pDVar1 = 0x22;
    return;
  }
  return;
}

