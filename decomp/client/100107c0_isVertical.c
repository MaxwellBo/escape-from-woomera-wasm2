
/* public: virtual bool __thiscall vgui::ScrollBar2::isVertical(void) */

bool __thiscall vgui::ScrollBar2::isVertical(ScrollBar2 *this)

{
  undefined1 uVar1;
  
                    /* 0x107c0  338  ?isVertical@ScrollBar2@vgui@@UAE_NXZ */
                    /* WARNING: Could not recover jumptable at 0x100107c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x204))();
  return (bool)uVar1;
}

