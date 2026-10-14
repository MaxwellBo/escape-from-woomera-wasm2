
/* public: class vgui::ImagePanel & __thiscall vgui::ImagePanel::operator=(class vgui::ImagePanel
   const &) */

ImagePanel * __thiscall vgui::ImagePanel::operator=(ImagePanel *this,ImagePanel *param_1)

{
  int iVar1;
  ImagePanel *pIVar2;
  int iVar3;
  
                    /* 0x14970  125  ??4ImagePanel@vgui@@QAEAAV01@ABV01@@Z
                       0x14970  150  ??4TextPanel@vgui@@QAEAAV01@ABV01@@Z */
  iVar1 = (int)param_1 - (int)this;
  iVar3 = 2;
  pIVar2 = this;
  do {
    pIVar2 = pIVar2 + 4;
    *(undefined4 *)pIVar2 = *(undefined4 *)(pIVar2 + iVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pIVar2 = this + 0xc;
  iVar3 = 2;
  do {
    *(undefined4 *)pIVar2 = *(undefined4 *)(pIVar2 + iVar1);
    pIVar2 = pIVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pIVar2 = this + 0x14;
  iVar3 = 2;
  do {
    *(undefined4 *)pIVar2 = *(undefined4 *)(pIVar2 + iVar1);
    pIVar2 = pIVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pIVar2 = this + 0x1c;
  iVar3 = 2;
  do {
    *(undefined4 *)pIVar2 = *(undefined4 *)(pIVar2 + iVar1);
    pIVar2 = pIVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pIVar2 = this + 0x24;
  iVar3 = 2;
  do {
    *(undefined4 *)pIVar2 = *(undefined4 *)(pIVar2 + iVar1);
    pIVar2 = pIVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  pIVar2 = this + 0x58;
  iVar3 = 4;
  do {
    *(undefined4 *)pIVar2 = *(undefined4 *)(pIVar2 + iVar1);
    pIVar2 = pIVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  this[0x70] = param_1[0x70];
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  this[0x78] = param_1[0x78];
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  this[0x8c] = param_1[0x8c];
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  this[0x94] = param_1[0x94];
  this[0x95] = param_1[0x95];
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  pIVar2 = this + 0xa0;
  do {
    *pIVar2 = pIVar2[(int)(param_1 + (0x9c - (int)(this + 0x9c)))];
    pIVar2 = pIVar2 + 1;
  } while (pIVar2 + (-4 - (int)(this + 0x9c)) < (ImagePanel *)&DAT_00000004);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pIVar2 = this + 0xac;
  do {
    *pIVar2 = pIVar2[(int)(param_1 + (0xa8 - (int)(this + 0xa8)))];
    pIVar2 = pIVar2 + 1;
  } while (pIVar2 + (-4 - (int)(this + 0xa8)) < (ImagePanel *)&DAT_00000004);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  this[0xb8] = param_1[0xb8];
  this[0xb9] = param_1[0xb9];
  this[0xba] = param_1[0xba];
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  return this;
}

