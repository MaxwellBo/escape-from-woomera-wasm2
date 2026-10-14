
Panel * __fastcall FUN_10013ce0(Panel *param_1)

{
  void *unaff_EDI;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_1005790e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::Panel::Panel(param_1,0,0,0,0);
  *(undefined4 *)(param_1 + 0xbc) = 0x96;
  *(undefined ***)param_1 = &PTR_setPos_1005e890;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined ***)(param_1 + 0xd4) = &PTR_FUN_1005e88c;
  vgui::Label::Label((Label *)(param_1 + 0xe0),s_);
  FUN_10013ae0((Label *)(param_1 + 0x1b4));
  FUN_10013ae0((Label *)(param_1 + 0x458));
  FUN_10031350(param_1 + 0x6fc);
  local_4 = 0;
  vgui::Button::Button((Button *)(param_1 + 0x960),s_,0,0);
  *(undefined ***)param_1 = &PTR_setPos_1005e67c;
  *(undefined ***)(param_1 + 0xd4) = &PTR_FUN_1005e678;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  (**(code **)(*(int *)(param_1 + 0x960) + 0x240))(&DAT_100a0448);
  (**(code **)(*(int *)(param_1 + 0xe0) + 300))(0xff,0xff,0xff,200);
  ExceptionList = unaff_EDI;
  return param_1;
}

