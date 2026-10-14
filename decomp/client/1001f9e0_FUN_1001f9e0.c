
void FUN_1001f9e0(void)

{
  void *pvVar1;
  
  FUN_1001f9b0();
  pvVar1 = operator_new(0x440);
  if (pvVar1 != (void *)0x0) {
    DAT_100a96d0 = FUN_1001f860((int)pvVar1);
    return;
  }
  DAT_100a96d0 = 0;
  return;
}

