
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10022810(void)

{
  float10 fVar1;
  longlong lVar2;
  
  if (DAT_100a97b0 == 0) {
    DAT_100a96fc = 0;
    DAT_100a97b4 = 0;
  }
  else if (DAT_100a96fc == 0) {
    DAT_100a96fc = 1;
    DAT_100a97b4 = 1;
    GetCursorPos((LPPOINT)&DAT_100a9728);
    fVar1 = FUN_1001c580(0x100a3a40);
    if (fVar1 != (float10)_DAT_10059a18) {
      lVar2 = __ftol();
      _DAT_100a9704 = (undefined4)lVar2;
      lVar2 = __ftol();
      _DAT_100a9700 = (int)lVar2;
      return;
    }
    _DAT_100a9704 = DAT_100a9728;
    _DAT_100a9700 = DAT_100a972c;
    return;
  }
  return;
}

