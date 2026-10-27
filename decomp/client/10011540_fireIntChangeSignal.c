
/* protected: virtual void __thiscall vgui::Slider2::fireIntChangeSignal(void) */

void __thiscall vgui::Slider2::fireIntChangeSignal(Slider2 *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* 0x11540  275  ?fireIntChangeSignal@Slider2@vgui@@MAEXXZ */
  iVar3 = 0;
  if (0 < *(int *)(this + 0xd8)) {
    do {
      if ((iVar3 < 0) || (*(int *)(this + 0xd8) <= iVar3)) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = *(undefined4 **)(*(int *)(this + 0xe0) + iVar3 * 4);
      }
      puVar2 = (undefined4 *)*puVar2;
      uVar1 = (**(code **)(*(int *)this + 0x200))(this);
      (*(code *)*puVar2)(uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0xd8));
  }
  return;
}

