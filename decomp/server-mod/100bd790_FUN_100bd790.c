
void FUN_100bd790(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined4 *)((int)pvVar1 + 0x24) = param_2;
  return;
}

