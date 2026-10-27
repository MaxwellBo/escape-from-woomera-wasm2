
/* public: class vgui::Border & __thiscall vgui::Border::operator=(class vgui::Border const &) */

Border * __thiscall vgui::Border::operator=(Border *this,Border *param_1)

{
  int iVar1;
  Border *pBVar2;
  int iVar3;
  
                    /* 0x32db0  111  ??4Border@vgui@@QAEAAV01@ABV01@@Z
                       0x32db0  119  ??4EtchedBorder@vgui@@QAEAAV01@ABV01@@Z
                       0x32db0  132  ??4LoweredBorder@vgui@@QAEAAV01@ABV01@@Z */
  iVar3 = (int)param_1 - (int)this;
  iVar1 = 2;
  pBVar2 = this;
  do {
    pBVar2 = pBVar2 + 4;
    *(undefined4 *)pBVar2 = *(undefined4 *)(pBVar2 + iVar3);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  pBVar2 = this + 0xc;
  iVar1 = 2;
  do {
    *(undefined4 *)pBVar2 = *(undefined4 *)(pBVar2 + iVar3);
    pBVar2 = pBVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  pBVar2 = this + 0x1c;
  do {
    *pBVar2 = pBVar2[(int)(param_1 + (0x18 - (int)(this + 0x18)))];
    pBVar2 = pBVar2 + 1;
  } while (pBVar2 + (-4 - (int)(this + 0x18)) < (Border *)&DAT_00000004);
  iVar1 = 4;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  pBVar2 = this + 0x24;
  do {
    *(undefined4 *)pBVar2 = *(undefined4 *)(pBVar2 + iVar3);
    pBVar2 = pBVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return this;
}

