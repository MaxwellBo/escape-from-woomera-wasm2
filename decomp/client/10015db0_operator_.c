
/* public: class vgui::Font & __thiscall vgui::Font::operator=(class vgui::Font const &) */

Font * __thiscall vgui::Font::operator=(Font *this,Font *param_1)

{
                    /* 0x15db0  121  ??4Font@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}

