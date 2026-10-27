
void __cdecl FUN_100b2cb0(int *param_1,undefined4 param_2)

{
  if (param_1 == (int *)0x0) {
    (*DAT_10121f70)(0,4);
    return;
  }
  (**(code **)(*param_1 + 0xa0))(param_2);
  return;
}

