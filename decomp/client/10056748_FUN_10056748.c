
void __cdecl FUN_10056748(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_1004ddc4();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_1004ddc4();
    *pDVar1 = 0x22;
    return;
  }
  return;
}

