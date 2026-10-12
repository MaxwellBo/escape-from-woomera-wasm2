
Panel * __fastcall FUN_10048650(Panel *param_1)

{
  InputSignal *pIVar1;
  
  vgui::Panel::Panel(param_1,0,0,DAT_100a4dcc,DAT_100a4dd0);
  *(undefined4 *)(param_1 + 0xbc) = 100;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined ***)param_1 = &PTR_setPos_10065418;
  pIVar1 = operator_new(4);
  if (pIVar1 != (InputSignal *)0x0) {
    *(undefined ***)pIVar1 = &PTR_LAB_100653ec;
    vgui::Panel::addInputSignal(param_1,pIVar1);
    return param_1;
  }
  vgui::Panel::addInputSignal(param_1,(InputSignal *)0x0);
  return param_1;
}

