
/* public: class vgui::Scheme & __thiscall vgui::Scheme::operator=(class vgui::Scheme const &) */

Scheme * __thiscall vgui::Scheme::operator=(Scheme *this,Scheme *param_1)

{
  int iVar1;
  Scheme *pSVar2;
  int iVar3;
  
                    /* 0x3ad0  136  ??4Scheme@vgui@@QAEAAV01@ABV01@@Z */
  iVar1 = (int)param_1 - (int)this;
  iVar3 = 0x24;
  pSVar2 = this;
  do {
    pSVar2 = pSVar2 + 4;
    *(undefined4 *)pSVar2 = *(undefined4 *)(pSVar2 + iVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar2 = this + 0x94;
  iVar3 = 5;
  do {
    *(undefined4 *)pSVar2 = *(undefined4 *)(pSVar2 + iVar1);
    pSVar2 = pSVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar2 = this + 0xa8;
  iVar3 = 0xe;
  do {
    *(undefined4 *)pSVar2 = *(undefined4 *)(pSVar2 + iVar1);
    pSVar2 = pSVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return this;
}

