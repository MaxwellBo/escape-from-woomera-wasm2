
Panel * __fastcall FUN_10034480(Panel *param_1)

{
  Panel *this;
  Slider2 *this_00;
  ScrollBar2 *this_01;
  
  vgui::Panel::Panel(param_1,0,0,0,0);
  this = param_1 + 200;
  vgui::Panel::Panel(this,0,0,0,0);
  this_00 = (Slider2 *)(param_1 + 0x188);
  vgui::Slider2::Slider2(this_00,0,0,10,0x28,true);
  this_01 = (ScrollBar2 *)(param_1 + 0x284);
  vgui::ScrollBar2::ScrollBar2(this_01,0,0,0,0,true);
  *(undefined ***)(param_1 + 0x35c) = &PTR_FUN_10062048;
  *(undefined ***)param_1 = &PTR_FUN_10061e48;
  *(Panel **)(param_1 + 0x360) = param_1;
  (**(code **)(*(int *)this + 0x40))(param_1);
  (**(code **)(*(int *)this + 300))(0,0,0,0xff);
  (**(code **)(*(int *)this_00 + 0x214))(0x32);
  (**(code **)(*(int *)this_00 + 0x218))(1);
  (**(code **)(*(int *)this_01 + 0x40))(param_1);
  (**(code **)(*(int *)this_01 + 0x204))(param_1 + 0x35c);
  (**(code **)(*(int *)this_01 + 0x224))(this_00);
  (**(code **)(*(int *)this_01 + 0x230))(1);
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(Panel **)(param_1 + 0xc0) = param_1 + 0xbc;
  *(Panel **)(param_1 + 0xc4) = param_1 + 0xbc;
  *(undefined4 *)(param_1 + 0x364) = 0xffffffff;
  return param_1;
}

