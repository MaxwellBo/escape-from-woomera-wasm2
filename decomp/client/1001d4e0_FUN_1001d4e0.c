
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1001d4e0(undefined4 *param_1)

{
  int *piVar1;
  
  DAT_100a958c = 0;
  DAT_100a95a4 = 0;
  for (piVar1 = (int *)*param_1; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x18))();
    }
  }
  _DAT_1007ee24 = 0;
  DAT_1007ee28 = 0;
  return;
}

