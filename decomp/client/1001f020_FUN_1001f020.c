
undefined4 * FUN_1001f020(int param_1,undefined4 *param_2)

{
  while( true ) {
    if (param_2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (param_1 == param_2[6]) break;
    param_2 = (undefined4 *)*param_2;
  }
  return param_2;
}

