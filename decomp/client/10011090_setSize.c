
/* public: virtual void __thiscall vgui::Slider2::setSize(int,int) */

void __thiscall vgui::Slider2::setSize(Slider2 *this,int param_1,int param_2)

{
                    /* 0x11090  466  ?setSize@Slider2@vgui@@UAEXHH@Z */
  vgui::Panel::setSize((Panel *)this,param_1,param_2);
  (**(code **)(*(int *)this + 0x228))();
  return;
}

