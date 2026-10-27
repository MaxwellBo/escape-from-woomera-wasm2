
/* public: __thiscall vgui::Scheme::Scheme(class vgui::Scheme const &) */

void __thiscall vgui::Scheme::Scheme(Scheme *this,Scheme *param_1)

{
  int iVar1;
  Scheme *pSVar2;
  Scheme *pSVar3;
  
  iVar1 = 0x24;
  pSVar2 = param_1;
  pSVar3 = this;
  while( true ) {
    pSVar3 = pSVar3 + 4;
    pSVar2 = pSVar2 + 4;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *(undefined4 *)pSVar3 = *(undefined4 *)pSVar2;
  }
  pSVar2 = param_1 + 0x94;
  pSVar3 = this + 0x94;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pSVar3 = *(undefined4 *)pSVar2;
    pSVar2 = pSVar2 + 4;
    pSVar3 = pSVar3 + 4;
  }
  pSVar2 = param_1 + 0xa8;
  pSVar3 = this + 0xa8;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pSVar3 = *(undefined4 *)pSVar2;
    pSVar2 = pSVar2 + 4;
    pSVar3 = pSVar3 + 4;
  }
  *(undefined ***)this = &_vftable_;
  return;
}

