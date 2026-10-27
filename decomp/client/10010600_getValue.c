
/* public: virtual int __thiscall vgui::ScrollBar2::getValue(void) */

int __thiscall vgui::ScrollBar2::getValue(ScrollBar2 *this)

{
  int iVar1;
  
                    /* 0x10600  298  ?getValue@ScrollBar2@vgui@@UAEHXZ */
                    /* WARNING: Could not recover jumptable at 0x10010608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x200))();
  return iVar1;
}

