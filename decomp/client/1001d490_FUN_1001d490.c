
undefined4 __cdecl FUN_1001d490(undefined4 *param_1)

{
  int *piVar1;
  
  for (piVar1 = (int *)*param_1; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x14))();
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  DAT_100a958c = 0;
  DAT_100a95a4 = 0;
  return 1;
}

