
void __fastcall FUN_1003ccf0(int param_1)

{
  void *this;
  Panel *pPVar1;
  void *unaff_EBX;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10057fbb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  lVar4 = __ftol();
  iVar2 = (int)lVar4;
  lVar4 = __ftol();
  iVar3 = (int)lVar4;
  if (DAT_100a4dcc == 0x200) {
    iVar2 = 0x1e;
    iVar3 = 0x1e;
  }
  else if (DAT_100a4dcc == 400) {
    iVar2 = 0;
    iVar3 = 0x14;
  }
  this = operator_new(0x26af0);
  local_4 = 0;
  if (this == (void *)0x0) {
    pPVar1 = (Panel *)0x0;
  }
  else {
    pPVar1 = FUN_10035dc0(this,iVar2,iVar3,DAT_100a4dcc + iVar2 * -2,DAT_100a4dd0 + iVar3 * -2);
  }
  *(Panel **)(param_1 + 0xaac) = pPVar1;
  local_4 = 0xffffffff;
  (**(code **)(*(int *)pPVar1 + 0x40))(param_1);
  (**(code **)(**(int **)(param_1 + 0xaac) + 0x24))(0);
  ExceptionList = unaff_EBX;
  return;
}

