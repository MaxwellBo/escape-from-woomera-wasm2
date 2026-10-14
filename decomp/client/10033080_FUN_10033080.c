
Button * __thiscall
FUN_10033080(void *this,undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  vgui::Button::Button(this,s_,param_3,param_4,param_5,param_6);
  *(undefined ***)this = &PTR_setPos_1006101c;
  *(undefined4 *)((int)this + 0xf0) = param_1;
  *(undefined1 *)((int)this + 0x128) = 0;
  FUN_100330e0(this);
  FUN_100331c0(this,param_2);
  return this;
}

