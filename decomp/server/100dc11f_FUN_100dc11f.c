
undefined4 __fastcall FUN_100dc11f(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x200);
  if (pvVar1 == (void *)0x0) {
    return 0xffffffff;
  }
  FUN_100dc14c(param_1,pvVar1,(int)pvVar1 + 0x200,1);
  return 1;
}

