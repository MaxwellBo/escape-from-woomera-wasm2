
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100dad49(void)

{
  int iVar1;
  
  FUN_100db550((LPCRITICAL_SECTION)&DAT_10134e38);
  if (_DAT_10121b88 < 7) {
    iVar1 = _DAT_10121b88 + 1;
    _DAT_10121b88 = iVar1;
  }
  else {
    iVar1 = -1;
  }
  FUN_100db55b((LPCRITICAL_SECTION)&DAT_10134e38);
  return iVar1;
}

