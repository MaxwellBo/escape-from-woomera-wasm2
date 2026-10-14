
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual bool __thiscall vgui::Slider2::hasFullRange(void) */

bool __thiscall vgui::Slider2::hasFullRange(Slider2 *this)

{
  float fVar1;
  undefined1 *puVar2;
  undefined1 *unaff_ESI;
  undefined1 local_c [4];
  undefined1 local_8 [8];
  
                    /* 0x11390  319  ?hasFullRange@Slider2@vgui@@UAE_NXZ */
  puVar2 = local_8;
  (**(code **)(*(int *)this + 0xe8))(local_c);
  fVar1 = (float)*(int *)(this + 0xf0);
  if ((float)*(int *)(this + 0xf0) < _DAT_10059a18) {
    fVar1 = _DAT_10059a18;
  }
  if (this[0xf4] == (Slider2)0x0) {
    fVar1 = (float)(*(int *)(this + 0xe8) - *(int *)(this + 0xe4));
  }
  if (_DAT_10059a18 < fVar1) {
    if (this[0xbc] != (Slider2)0x0) {
      puVar2 = unaff_ESI;
    }
    if (fVar1 <= (float)*(int *)(this + 0xf8) + (float)(int)puVar2) {
      return true;
    }
  }
  return false;
}

