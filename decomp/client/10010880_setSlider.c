
/* public: virtual void __thiscall vgui::ScrollBar2::setSlider(class vgui::Slider2 *) */

void __thiscall vgui::ScrollBar2::setSlider(ScrollBar2 *this,Slider2 *param_1)

{
  undefined4 *puVar1;
  
                    /* 0x10880  467  ?setSlider@ScrollBar2@vgui@@UAEXPAVSlider2@2@@Z */
  if (*(int *)(this + 0xc4) != 0) {
    (**(code **)(*(int *)this + 0x4c))(*(int *)(this + 0xc4));
  }
  *(Slider2 **)(this + 0xc4) = param_1;
  (**(code **)(*(int *)this + 0x44))(param_1);
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_1005e1f4;
    puVar1[1] = this;
  }
  (**(code **)(**(int **)(this + 0xc4) + 0x208))(puVar1);
  (**(code **)(*(int *)this + 0x234))();
  return;
}

