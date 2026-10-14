
Button * __thiscall
FUN_10033020(Button *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6,
            Button param_7)

{
  vgui::Button::Button(param_1,s_,param_3,param_4,param_5,param_6);
  *(undefined ***)param_1 = &PTR_setPos_1006101c;
  param_1[0x128] = param_7;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  FUN_100330e0((int *)param_1);
  FUN_100331c0(param_1,param_2);
  return param_1;
}

