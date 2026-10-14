
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100228c0(void)

{
  longlong lVar1;
  
  if (DAT_100a97b0 == 0) {
    DAT_100a9774 = 0;
    DAT_100a96fc = 0;
    DAT_100a97b4 = 0;
  }
  else if (DAT_100a9774 == 0) {
    DAT_100a9774 = 1;
    DAT_100a96fc = 1;
    DAT_100a97b4 = 1;
    GetCursorPos((LPPOINT)&DAT_100a9728);
    FUN_1001c580(0x100a3a40);
    lVar1 = __ftol();
    _DAT_100a9704 = (undefined4)lVar1;
    FUN_1001c580(0x100a3a40);
    lVar1 = __ftol();
    _DAT_100a9700 = (int)lVar1;
    return;
  }
  return;
}

