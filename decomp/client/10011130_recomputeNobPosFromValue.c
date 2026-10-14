
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: virtual void __thiscall vgui::Slider2::recomputeNobPosFromValue(void) */

void __thiscall vgui::Slider2::recomputeNobPosFromValue(Slider2 *this)

{
  int unaff_ESI;
  longlong lVar1;
  float fVar2;
  int local_14;
  float fStack_10;
  float local_c [3];
  
                    /* 0x11130  363  ?recomputeNobPosFromValue@Slider2@vgui@@EAEXXZ */
  (**(code **)(*(int *)this + 0xe8))(local_c,&local_14);
  local_c[0] = (float)local_14;
  fStack_10 = (float)unaff_ESI;
  fVar2 = (float)*(int *)(this + 0xf0);
  if ((float)*(int *)(this + 0xf0) < _DAT_10059a18) {
    fVar2 = 0.0;
  }
  if (this[0xf4] == (Slider2)0x0) {
    fVar2 = (float)(*(int *)(this + 0xe8) - *(int *)(this + 0xe4));
  }
  if (_DAT_10059a18 < fVar2) {
    if (this[0xbc] == (Slider2)0x0) {
      lVar1 = __ftol();
      *(int *)(this + 0xc0) = (int)lVar1;
      lVar1 = __ftol();
      *(int *)(this + 0xc4) = (int)lVar1;
      if (local_14 < (int)lVar1) {
        lVar1 = __ftol();
        *(int *)(this + 0xc4) = local_14;
        *(int *)(this + 0xc0) = local_14 - (int)lVar1;
      }
    }
    else {
      lVar1 = __ftol();
      *(int *)(this + 0xc0) = (int)lVar1;
      lVar1 = __ftol();
      *(int *)(this + 0xc4) = (int)lVar1;
      if (unaff_ESI < (int)lVar1) {
        lVar1 = __ftol();
        *(int *)(this + 0xc4) = unaff_ESI;
        *(int *)(this + 0xc0) = unaff_ESI - (int)lVar1;
        (**(code **)(*(int *)this + 0x30))();
        return;
      }
    }
  }
  (**(code **)(*(int *)this + 0x30))();
  return;
}

