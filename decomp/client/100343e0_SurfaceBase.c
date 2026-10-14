
/* public: __thiscall vgui::SurfaceBase::SurfaceBase(class vgui::SurfaceBase const &) */

void __thiscall vgui::SurfaceBase::SurfaceBase(SurfaceBase *this,SurfaceBase *param_1)

{
                    /* 0x343e0  82  ??0SurfaceBase@vgui@@QAE@ABV01@@Z */
  this[4] = param_1[4];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined ***)this = &_vftable_;
  return;
}

