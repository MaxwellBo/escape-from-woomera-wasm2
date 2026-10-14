
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_100c6d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  
  piVar1 = &DAT_10134894;
  do {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x101348ac);
  DAT_10134894 = param_1;
  DAT_10134898 = param_2;
  _DAT_1013489c = param_3;
  _DAT_101348a0 = param_4;
  _DAT_101348a4 = param_5;
  _DAT_101348a8 = param_6;
  return;
}

