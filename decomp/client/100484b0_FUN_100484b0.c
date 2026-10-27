
Panel * __thiscall FUN_100484b0(void *this,undefined4 param_1,Panel *param_2)

{
  undefined4 uVar1;
  InputSignal *pIVar2;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_1005866e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::Panel::Panel(this,0,0,DAT_100a4dcc,DAT_100a4dd0);
  *(undefined4 *)((int)this + 0xbc) = 100;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined ***)this = &PTR_setPos_100651dc;
  *(Panel *)((int)this + 0xd8) = *param_2;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  FUN_100422b0((Panel *)((int)this + 0xd8),param_2,0,DAT_10064d2c);
  local_4 = 0;
  *(undefined ***)this = &PTR_setPos_10064fcc;
  uVar1 = (*DAT_100a4ff0)(param_1);
  *(undefined4 *)((int)this + 0xd4) = uVar1;
  pIVar2 = operator_new(4);
  if (pIVar2 == (InputSignal *)0x0) {
    pIVar2 = (InputSignal *)0x0;
  }
  else {
    *(undefined ***)pIVar2 = &PTR_FUN_10064fa0;
  }
  vgui::Panel::addInputSignal(this,pIVar2);
  ExceptionList = pvStack_c;
  return this;
}

