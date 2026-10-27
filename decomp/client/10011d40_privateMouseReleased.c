
/* public: virtual void __thiscall vgui::Slider2::privateMouseReleased(enum vgui::MouseCode,class
   vgui::Panel *) */

void __thiscall vgui::Slider2::privateMouseReleased(Slider2 *this,MouseCode param_1,Panel *param_2)

{
  int *piVar1;
  
                    /* 0x11d40  344
                       ?privateMouseReleased@Slider2@vgui@@UAEXW4MouseCode@2@PAVPanel@2@@Z */
  this[0xbd] = (Slider2)0x0;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x14c))();
  (**(code **)(*piVar1 + 0x38))(0);
  return;
}

