
undefined4 FUN_100d46a2(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_10134a6c == 0) {
    PTR_PTR_101215e4 = (undefined *)&PTR_DAT_101215e8;
    ___free_lc_time(DAT_10134b90);
    FUN_100c8cf1((undefined *)DAT_10134b90);
    DAT_10134b90 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_100c8dda(1,0xac);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_100d4733((char *)piVar1);
    if (uVar2 == 0) {
      PTR_PTR_101215e4 = (undefined *)piVar1;
      ___free_lc_time(DAT_10134b90);
      FUN_100c8cf1((undefined *)DAT_10134b90);
      DAT_10134b90 = piVar1;
      return 0;
    }
    ___free_lc_time(piVar1);
    FUN_100c8cf1((undefined *)piVar1);
  }
  return 1;
}

