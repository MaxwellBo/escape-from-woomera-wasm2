
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Panel * FUN_100392d0(undefined4 param_1,int param_2)

{
  Panel *this;
  undefined4 *puVar1;
  void *this_00;
  int iVar2;
  Label *pLVar3;
  Panel *pPVar4;
  void *unaff_EDI;
  longlong lVar5;
  longlong lVar6;
  int *unaff_retaddr;
  int local_20;
  int local_1c;
  void *pvStack_c;
  code *pcStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  pcStack_8 = FUN_10057d56;
  pvStack_c = ExceptionList;
  local_1c = 0;
  local_20 = 0;
  ExceptionList = &pvStack_c;
  lVar5 = __ftol();
  if (param_2 != 0) {
    lVar6 = __ftol();
    local_1c = (int)lVar6;
    lVar6 = __ftol();
    local_20 = (int)lVar6;
  }
  this = operator_new(0x25c);
  local_4 = (void *)0x0;
  pPVar4 = (Panel *)0x0;
  if (this != (Panel *)0x0) {
    vgui::Panel::Panel(this,local_1c,local_20,(int)lVar5,0);
    *(int *)(this + 0xc0) = local_1c;
    *(int *)(this + 0xc4) = local_20;
    *(undefined ***)this = &PTR_setPos_1006307c;
    *(int *)(this + 0xbc) = param_2;
    *(undefined4 *)(this + 600) = 0;
    pPVar4 = this;
  }
  local_4 = (void *)0xffffffff;
  (**(code **)(*(int *)pPVar4 + 0x40))();
  FUN_10033220(unaff_retaddr,(int)pPVar4);
  (**(code **)(*unaff_retaddr + 0x20c))(3);
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_10063050;
    puVar1[1] = pPVar4;
    puVar1[2] = unaff_retaddr;
  }
  (**(code **)(*unaff_retaddr + 0x70))(puVar1);
  this_00 = operator_new(0xd4);
  local_4 = this_00;
  if (this_00 == (void *)0x0) {
    pLVar3 = (Label *)0x0;
  }
  else {
    lVar5 = __ftol();
    iVar2 = (int)lVar5;
    lVar5 = __ftol();
    pLVar3 = FUN_10033470(this_00,s_arrow_1007a2b4,(int)lVar5,iVar2);
  }
  (**(code **)(*(int *)pLVar3 + 0x40))(unaff_retaddr);
  (**(code **)(*(int *)pLVar3 + 0x70))(puVar1);
  (**(code **)(*(int *)pLVar3 + 4))(&stack0xffffffd0,&stack0xffffffcc);
  puVar1 = *(undefined4 **)pLVar3;
  (*(code *)puVar1[0x8b])();
  lVar5 = __ftol();
  (*(code *)puVar1[0x8c])((int)lVar5);
  lVar5 = __ftol();
  (*(code *)*puVar1)((int)lVar5);
  if ((char)unaff_retaddr[0x4a] == '\0') {
    puVar1 = operator_new(0xc);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[1] = unaff_retaddr;
      *puVar1 = &PTR_FUN_10061284;
      puVar1[2] = unaff_retaddr;
    }
    (**(code **)(*(int *)pLVar3 + 0x70))(puVar1);
  }
  ExceptionList = unaff_EDI;
  return pPVar4;
}

