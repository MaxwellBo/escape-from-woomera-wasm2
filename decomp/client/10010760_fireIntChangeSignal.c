
/* public: virtual void __thiscall vgui::ScrollBar2::fireIntChangeSignal(void) */

void __thiscall vgui::ScrollBar2::fireIntChangeSignal(ScrollBar2 *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* 0x10760  274  ?fireIntChangeSignal@ScrollBar2@vgui@@UAEXXZ */
  iVar3 = 0;
  if (0 < *(int *)(this + 200)) {
    do {
      if ((iVar3 < 0) || (*(int *)(this + 200) <= iVar3)) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = *(undefined4 **)(*(int *)(this + 0xd0) + iVar3 * 4);
      }
      puVar2 = (undefined4 *)*puVar2;
      uVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x200))(this);
      (*(code *)*puVar2)(uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 200));
  }
  return;
}

