
/* public: class vgui::LineBorder & __thiscall vgui::LineBorder::operator=(class vgui::LineBorder
   const &) */

LineBorder * __thiscall vgui::LineBorder::operator=(LineBorder *this,LineBorder *param_1)

{
  LineBorder *pLVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x4a10  131  ??4LineBorder@vgui@@QAEAAV01@ABV01@@Z */
  iVar3 = 2;
  iVar2 = (int)param_1 - (int)this;
  pLVar1 = this;
  do {
    pLVar1 = pLVar1 + 4;
    *(undefined4 *)pLVar1 = *(undefined4 *)(pLVar1 + iVar2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pLVar1 = this + 0xc;
  iVar3 = 2;
  do {
    *(undefined4 *)pLVar1 = *(undefined4 *)(pLVar1 + iVar2);
    pLVar1 = pLVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  pLVar1 = this + 0x1c;
  do {
    *pLVar1 = pLVar1[(int)(param_1 + (0x18 - (int)(this + 0x18)))];
    pLVar1 = pLVar1 + 1;
  } while (pLVar1 + (-4 - (int)(this + 0x18)) < (LineBorder *)&DAT_00000004);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  pLVar1 = this + 0x24;
  iVar3 = 4;
  do {
    *(undefined4 *)pLVar1 = *(undefined4 *)(pLVar1 + iVar2);
    pLVar1 = pLVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  pLVar1 = this + 0x3c;
  do {
    *pLVar1 = pLVar1[(int)(param_1 + (0x38 - (int)(this + 0x38)))];
    pLVar1 = pLVar1 + 1;
  } while (pLVar1 + (-4 - (int)(this + 0x38)) < (LineBorder *)&DAT_00000004);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return this;
}

