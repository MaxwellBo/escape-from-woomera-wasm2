
undefined4 FUN_100d4e1d(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_10134a64 == 0) {
    PTR_DAT_101216a0 = *(undefined **)PTR_PTR_101216d0;
    PTR_DAT_101216a4 = *(undefined **)(PTR_PTR_101216d0 + 4);
    PTR_DAT_101216a8 = *(undefined **)(PTR_PTR_101216d0 + 8);
    PTR_PTR_101216d0 = (undefined *)&PTR_DAT_101216a0;
    FUN_100d5041((int)DAT_10134ba0);
    FUN_100c8cf1((undefined *)DAT_10134ba0);
    DAT_10134ba0 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_100c8dda(1,0x30);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_100d4ee8((int)piVar1);
    if (uVar2 == 0) {
      *piVar1 = *(int *)PTR_PTR_101216d0;
      piVar1[1] = *(int *)(PTR_PTR_101216d0 + 4);
      piVar1[2] = *(int *)(PTR_PTR_101216d0 + 8);
      PTR_PTR_101216d0 = (undefined *)piVar1;
      FUN_100d5041((int)DAT_10134ba0);
      FUN_100c8cf1((undefined *)DAT_10134ba0);
      DAT_10134ba0 = piVar1;
      return 0;
    }
    FUN_100d5041((int)piVar1);
    FUN_100c8cf1((undefined *)piVar1);
  }
  return 1;
}

