
/* public: __thiscall vgui::Surface::Surface(class vgui::Surface const &) */

void __thiscall vgui::Surface::Surface(Surface *this,Surface *param_1)

{
  undefined4 uVar1;
  
                    /* 0x399b0  81  ??0Surface@vgui@@QAE@ABV01@@Z */
  this[4] = param_1[4];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined ***)this = &SurfaceBase::_vftable_;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  this[0x28] = param_1[0x28];
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}

