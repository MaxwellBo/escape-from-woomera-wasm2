
Panel * __thiscall
FUN_10048a70(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  vgui::Panel::Panel(this,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xbc) = 100;
  *(undefined ***)this = &PTR_setPos_1005e890;
  *(undefined4 *)((int)this + 200) = param_1;
  return this;
}

