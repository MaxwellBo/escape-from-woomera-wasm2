
/* public: class vgui::Color & __thiscall vgui::Color::operator=(class vgui::Color const &) */

Color * __thiscall vgui::Color::operator=(Color *this,Color *param_1)

{
  Color *pCVar1;
  
                    /* 0x3b40  115  ??4Color@vgui@@QAEAAV01@ABV01@@Z */
  pCVar1 = this + 4;
  do {
    *pCVar1 = pCVar1[(int)param_1 - (int)this];
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 + (-4 - (int)this) < (Color *)&DAT_00000004);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}

