
uint __cdecl FUN_100c94bf(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10134a60 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_101351c8);
    bVar1 = DAT_101351c4 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement(&DAT_101351c8);
      this = (void *)0x13;
      FUN_100cf6a6(0x13);
    }
    param_1 = FUN_100c952e(this,param_1);
    if (bVar1) {
      FUN_100cf707(0x13);
    }
    else {
      InterlockedDecrement(&DAT_101351c8);
    }
  }
  return param_1;
}

