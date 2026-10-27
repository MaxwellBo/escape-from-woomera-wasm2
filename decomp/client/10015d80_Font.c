
/* public: __thiscall vgui::Font::Font(class vgui::Font const &) */

void __thiscall vgui::Font::Font(Font *this,Font *param_1)

{
                    /* 0x15d80  52  ??0Font@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined ***)this = &_vftable_;
  return;
}

