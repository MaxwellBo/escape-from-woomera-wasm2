
Button * __thiscall
FUN_10033590(void *this,undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  Image *pIVar1;
  InputSignal *pIVar2;
  
  FUN_10033020(this,param_2,param_3,param_4,param_5,param_6,(Button)0x0);
  *(undefined ***)this = &PTR_setPos_100614e4;
  vgui::Label::setFgColor(this,3);
  pIVar1 = (Image *)FUN_10032fe0();
  *(Image **)((int)this + 300) = pIVar1;
  vgui::Label::setImage(this,pIVar1);
  pIVar2 = operator_new(0xc);
  if (pIVar2 != (InputSignal *)0x0) {
    *(void **)(pIVar2 + 4) = this;
    *(undefined ***)pIVar2 = &PTR_FUN_10061284;
    *(void **)(pIVar2 + 8) = this;
    vgui::Panel::addInputSignal(this,pIVar2);
    return this;
  }
  vgui::Panel::addInputSignal(this,(InputSignal *)0x0);
  return this;
}

