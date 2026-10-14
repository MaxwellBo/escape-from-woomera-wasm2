
void __fastcall FUN_1003d560(int param_1)

{
  void *this;
  Panel *pPVar1;
  void *unaff_ESI;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10057ffb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0x124);
  local_4 = 0;
  if (this == (void *)0x0) {
    pPVar1 = (Panel *)0x0;
  }
  else {
    pPVar1 = FUN_1003e8a0(this,100,0,0,0,DAT_100a4dcc,DAT_100a4dd0);
  }
  *(Panel **)(param_1 + 0xaa4) = pPVar1;
  local_4 = 0xffffffff;
  (**(code **)(*(int *)pPVar1 + 0x40))(param_1);
  (**(code **)(**(int **)(param_1 + 0xaa4) + 0x24))(0);
  ExceptionList = unaff_ESI;
  return;
}

