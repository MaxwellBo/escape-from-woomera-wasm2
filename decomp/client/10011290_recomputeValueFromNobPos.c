
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: virtual void __thiscall vgui::Slider2::recomputeValueFromNobPos(void) */

void __thiscall vgui::Slider2::recomputeValueFromNobPos(Slider2 *this)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  longlong lVar3;
  int iStack_18;
  float local_14;
  float local_10;
  undefined4 uStack_c;
  
                    /* 0x11290  364  ?recomputeValueFromNobPos@Slider2@vgui@@EAEXXZ */
  (**(code **)(*(int *)this + 0xe8))(&local_10,&local_14);
  local_10 = (float)iStack_18;
  iVar1 = *(int *)(this + 0xe8);
  uStack_c = *(undefined4 *)(this + 0xe4);
  local_14 = (float)unaff_ESI;
  lVar3 = __ftol();
  iVar2 = (int)lVar3;
  *(int *)(this + 0xec) = iVar2;
  if (iVar1 <= iVar2) {
    *(int *)(this + 0xec) = iVar1;
    return;
  }
  *(int *)(this + 0xec) = iVar2;
  return;
}

