
/* public: virtual void __thiscall vgui::Slider2::privateMousePressed(enum vgui::MouseCode,class
   vgui::Panel *) */

void __thiscall vgui::Slider2::privateMousePressed(Slider2 *this,MouseCode param_1,Panel *param_2)

{
  int *piVar1;
  undefined1 *puStack_10;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
                    /* 0x11ad0  343
                       ?privateMousePressed@Slider2@vgui@@UAEXW4MouseCode@2@PAVPanel@2@@Z */
  puStack_10 = (undefined1 *)0x10011ade;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x14c))();
  puStack_10 = auStack_4;
  (**(code **)(*piVar1 + 0x34))();
  (**(code **)(*(int *)this + 0x8c))();
  if (this[0xbc] == (Slider2)0x0) {
    if ((int)&stack0xfffffff4 < *(int *)(this + 0xc0)) {
      return;
    }
    if (*(int *)(this + 0xc4) <= (int)&stack0xfffffff4) {
      return;
    }
  }
  else {
    if ((int)auStack_8 < *(int *)(this + 0xc0)) {
      return;
    }
    if (*(int *)(this + 0xc4) <= (int)auStack_8) {
      return;
    }
  }
  this[0xbd] = (Slider2)0x1;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x14c))();
  (**(code **)(*piVar1 + 0x38))(this);
  *(undefined4 *)(this + 200) = *(undefined4 *)(this + 0xc0);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(this + 0xc4);
  *(undefined1 ***)(this + 0xd0) = &puStack_10;
  *(undefined1 **)(this + 0xd4) = &stack0xfffffff4;
  return;
}

