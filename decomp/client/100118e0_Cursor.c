
/* public: __thiscall vgui::Cursor::Cursor(class vgui::Cursor const &) */

void __thiscall vgui::Cursor::Cursor(Cursor *this,Cursor *param_1)

{
                    /* 0x118e0  47  ??0Cursor@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = &_vftable_;
  return;
}

