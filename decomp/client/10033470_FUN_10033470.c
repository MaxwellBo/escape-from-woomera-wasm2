
Label * __thiscall FUN_10033470(void *this,undefined4 param_1,int param_2,int param_3)

{
  Image *pIVar1;
  
  vgui::Label::Label(this,s_,param_2,param_3);
  *(undefined ***)this = &PTR_setPos_100612b0;
  vgui::Label::setContentFitted(this,true);
  pIVar1 = (Image *)FUN_10032fe0();
  *(Image **)((int)this + 0xd0) = pIVar1;
  vgui::Label::setImage(this,pIVar1);
  return this;
}

