
/* public: virtual void __thiscall vgui::Slider2::setValue(int) */

void __thiscall vgui::Slider2::setValue(Slider2 *this,int param_1)

{
  int iVar1;
  
                    /* 0x110d0  469  ?setValue@Slider2@vgui@@UAEXH@Z */
  iVar1 = *(int *)(this + 0xec);
  if (param_1 < *(int *)(this + 0xe4)) {
    param_1 = *(int *)(this + 0xe4);
  }
  if (*(int *)(this + 0xe8) < param_1) {
    param_1 = *(int *)(this + 0xe8);
  }
  *(int *)(this + 0xec) = param_1;
  (**(code **)(*(int *)this + 0x228))();
  if (*(int *)(this + 0xec) != iVar1) {
    (**(code **)(*(int *)this + 0x23c))();
  }
  return;
}

