
uint __cdecl FUN_1004b58b(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100bcb04 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_100bd02c);
    bVar1 = DAT_100bd028 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_100bd02c);
      this = (void *)0x13;
      FUN_1004ca8b(0x13);
    }
    param_1 = FUN_1004b5fa(this,param_1);
    if (bVar1) {
      FUN_1004caec(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_100bd02c);
    }
  }
  return param_1;
}

