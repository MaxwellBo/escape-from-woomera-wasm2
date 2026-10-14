
/* public: class vgui::Cursor & __thiscall vgui::Cursor::operator=(class vgui::Cursor const &) */

Cursor * __thiscall vgui::Cursor::operator=(Cursor *this,Cursor *param_1)

{
  int iVar1;
  Cursor *pCVar2;
  
                    /* 0x11910  116  ??4Cursor@vgui@@QAEAAV01@ABV01@@Z */
  iVar1 = 2;
  pCVar2 = this;
  do {
    pCVar2 = pCVar2 + 4;
    *(undefined4 *)pCVar2 = *(undefined4 *)(pCVar2 + ((int)param_1 - (int)this));
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}

