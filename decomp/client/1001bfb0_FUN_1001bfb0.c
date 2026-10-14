
void __fastcall FUN_1001bfb0(int *param_1)

{
  undefined *puVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_100579f2;
  local_c = ExceptionList;
  local_4 = 0xe;
  ExceptionList = &local_c;
  FUN_10049a73((undefined *)param_1[0x1c]);
  FUN_10049a73((undefined *)param_1[0x1d]);
  FUN_10049a73((undefined *)param_1[0x1e]);
  puVar1 = (undefined *)*param_1;
  if (puVar1 != (undefined *)0x0) {
    do {
      *param_1 = *(int *)(puVar1 + 4);
      FUN_1004ad7e(puVar1);
      puVar1 = (undefined *)*param_1;
    } while (puVar1 != (undefined *)0x0);
    *param_1 = 0;
  }
  FUN_1001f9b0();
  param_1[0x1b6] = (int)&PTR_LAB_1005e5d4;
  param_1[0x181] = (int)&PTR_LAB_1005e5d4;
  param_1[0x17c] = (int)&PTR_LAB_1005e5d4;
  param_1[0x171] = (int)&PTR_LAB_1005e5d4;
  param_1[0x168] = (int)&PTR_LAB_1005e5d4;
  param_1[0x163] = (int)&PTR_LAB_1005e5d4;
  param_1[0x15d] = (int)&PTR_LAB_1005e5d4;
  param_1[0xcd] = (int)&PTR_LAB_1005e5d4;
  param_1[0x93] = (int)&PTR_LAB_1005e5d4;
  param_1[0x83] = (int)&PTR_LAB_1005e5d4;
  param_1[0x7c] = (int)&PTR_LAB_1005e5d4;
  param_1[0x70] = (int)&PTR_LAB_1005e5d4;
  param_1[0x6a] = (int)&PTR_LAB_1005e5d4;
  param_1[0x2a] = (int)&PTR_LAB_1005e5d4;
  param_1[0x20] = (int)&PTR_LAB_1005e5d4;
  ExceptionList = local_c;
  return;
}

