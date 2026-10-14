
/* public: class vgui::App & __thiscall vgui::App::operator=(class vgui::App const &) */

App * __thiscall vgui::App::operator=(App *this,App *param_1)

{
  int iVar1;
  App *pAVar2;
  int iVar3;
  
                    /* 0x11b90  108  ??4App@vgui@@QAEAAV01@ABV01@@Z */
  this[4] = param_1[4];
  this[5] = param_1[5];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  pAVar2 = this + 0x28;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  iVar1 = (int)param_1 - (int)this;
  do {
    *pAVar2 = pAVar2[iVar1];
    pAVar2 = pAVar2 + 1;
  } while (pAVar2 + (-0x28 - (int)this) < (App *)0x3);
  pAVar2 = this + 0x2b;
  do {
    *pAVar2 = pAVar2[iVar1];
    pAVar2 = pAVar2 + 1;
  } while (pAVar2 + (-0x2b - (int)this) < (App *)0x3);
  pAVar2 = this + 0x2e;
  do {
    *pAVar2 = pAVar2[iVar1];
    pAVar2 = pAVar2 + 1;
  } while (pAVar2 + (-0x2e - (int)this) < (App *)0x3);
  pAVar2 = this + 0x31;
  do {
    *pAVar2 = pAVar2[iVar1];
    pAVar2 = pAVar2 + 1;
  } while (pAVar2 + (-0x31 - (int)this) < (App *)0x3);
  pAVar2 = this + 0x34;
  do {
    *pAVar2 = pAVar2[iVar1];
    pAVar2 = pAVar2 + 1;
  } while (pAVar2 + (-0x34 - (int)this) < (App *)0x67);
  pAVar2 = this + 0x9b;
  do {
    *pAVar2 = pAVar2[iVar1];
    pAVar2 = pAVar2 + 1;
  } while (pAVar2 + (-0x9b - (int)this) < (App *)0x67);
  pAVar2 = this + 0x102;
  do {
    *pAVar2 = pAVar2[iVar1];
    pAVar2 = pAVar2 + 1;
  } while (pAVar2 + (-0x102 - (int)this) < (App *)0x67);
  pAVar2 = this + 0x169;
  do {
    *pAVar2 = pAVar2[iVar1];
    pAVar2 = pAVar2 + 1;
  } while (pAVar2 + (-0x169 - (int)this) < (App *)0x67);
  *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(this + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(this + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  this[0x1e0] = param_1[0x1e0];
  this[0x1e1] = param_1[0x1e1];
  *(undefined4 *)(this + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  pAVar2 = this + 0x1e8;
  iVar3 = 0xe;
  do {
    *(undefined4 *)pAVar2 = *(undefined4 *)(pAVar2 + iVar1);
    pAVar2 = pAVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x220) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(this + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(this + 0x228) = *(undefined4 *)(param_1 + 0x228);
  return this;
}

