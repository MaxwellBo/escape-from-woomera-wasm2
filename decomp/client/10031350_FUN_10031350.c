
Panel * __fastcall FUN_10031350(Panel *param_1)

{
  Panel *pPVar1;
  Label *this;
  ImagePanel *this_00;
  
  vgui::Panel::Panel(param_1);
  pPVar1 = param_1 + 0xbc;
  this = (Label *)(param_1 + 200);
  *(undefined ***)pPVar1 = &PTR_FUN_1005e5a8;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  vgui::Label::Label(this,s_);
  this_00 = (ImagePanel *)(param_1 + 0x198);
  vgui::ImagePanel::ImagePanel(this_00,(Image *)0x0);
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined ***)param_1 = &PTR_setPos_100603a4;
  *(undefined ***)pPVar1 = &PTR_FUN_10060378;
  param_1[0x260] = (Panel)0x0;
  param_1[0x261] = (Panel)0x0;
  param_1[0xc4] = (Panel)0x1;
  (**(code **)(*(int *)this + 0x40))(param_1);
  (**(code **)(*(int *)this + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(*(int *)this + 300))(0,0,0,0xff);
  (**(code **)(*(int *)this + 0x70))(-(uint)(param_1 != (Panel *)0x0) & (uint)pPVar1);
  (**(code **)(*(int *)this_00 + 0x40))(param_1);
  (**(code **)(*(int *)this_00 + 0x70))(-(uint)(param_1 != (Panel *)0x0) & (uint)pPVar1);
  vgui::Panel::setPaintBackgroundEnabled(param_1,false);
  return param_1;
}

