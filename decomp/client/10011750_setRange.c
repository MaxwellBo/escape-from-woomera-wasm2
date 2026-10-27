
/* public: virtual void __thiscall vgui::Slider2::setRange(int,int) */

void __thiscall vgui::Slider2::setRange(Slider2 *this,int param_1,int param_2)

{
                    /* 0x11750  460  ?setRange@Slider2@vgui@@UAEXHH@Z */
  *(int *)(this + 0xe4) = param_1;
  if (param_2 < param_1) {
    *(int *)(this + 0xe8) = param_1;
    return;
  }
  *(int *)(this + 0xe8) = param_2;
  return;
}

