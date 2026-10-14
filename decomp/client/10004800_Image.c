
/* public: __thiscall vgui::Image::Image(class vgui::Image const &) */

void __thiscall vgui::Image::Image(Image *this,Image *param_1)

{
                    /* 0x4800  55  ??0Image@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined ***)(this + 0x18) = &Color::_vftable_;
  *(undefined ***)this = &_vftable_;
  return;
}

