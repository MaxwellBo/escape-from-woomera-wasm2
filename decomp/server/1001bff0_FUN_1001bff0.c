
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001bff0(void)

{
  if (DAT_10121db8 != (int *)0x0) {
    (**(code **)(*DAT_10121db8 + 4))();
  }
  if (DAT_10121dd0 == 0) {
    *(undefined4 *)(DAT_10122044 + 0x1c) = _DAT_1010962c;
    _DAT_10121dec = _DAT_10121dec + 1;
    FUN_100631c0();
    return;
  }
  return;
}

