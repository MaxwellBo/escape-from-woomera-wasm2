
/* public: virtual void __thiscall vgui::ScrollBar2::doButtonPressed(int) */

void __thiscall vgui::ScrollBar2::doButtonPressed(ScrollBar2 *this,int param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x10af0  255  ?doButtonPressed@ScrollBar2@vgui@@UAEXH@Z */
  iVar1 = **(int **)(this + 0xc4);
  if (param_1 == 0) {
    iVar2 = (**(code **)(iVar1 + 0x200))();
    (**(code **)(iVar1 + 0x1fc))(iVar2 - *(int *)(this + 0xd4));
    return;
  }
  iVar2 = (**(code **)(iVar1 + 0x200))();
  (**(code **)(iVar1 + 0x1fc))(iVar2 + *(int *)(this + 0xd4));
  return;
}

