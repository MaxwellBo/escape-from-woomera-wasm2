
void __fastcall FUN_1003cde0(int param_1)

{
  void *this;
  Panel *pPVar1;
  void *unaff_ESI;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10057fdb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0xe4);
  local_4 = 0;
  if (this == (void *)0x0) {
    pPVar1 = (Panel *)0x0;
  }
  else {
    pPVar1 = FUN_10037fb0(this,0,0,DAT_100a4dcc,DAT_100a4dd0);
  }
  *(Panel **)(param_1 + 0x884) = pPVar1;
  local_4 = 0xffffffff;
  (**(code **)(*(int *)pPVar1 + 0x40))(param_1);
  (**(code **)(**(int **)(param_1 + 0x884) + 0x24))(0);
  ExceptionList = unaff_ESI;
  return;
}

