
/* public: __thiscall vgui::Color::Color(class vgui::Color const &) */

void __thiscall vgui::Color::Color(Color *this,Color *param_1)

{
                    /* 0x3b20  46  ??0Color@vgui@@QAE@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &_vftable_;
  return;
}

