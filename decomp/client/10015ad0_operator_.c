
/* public: class vgui::Slider2 & __thiscall vgui::Slider2::operator=(class vgui::Slider2 const &) */

Slider2 * __thiscall vgui::Slider2::operator=(Slider2 *this,Slider2 *param_1)

{
  Slider2 *pSVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x15ad0  140  ??4Slider2@vgui@@QAEAAV01@ABV01@@Z
                       0x15ad0  141  ??4Slider@vgui@@QAEAAV01@ABV01@@Z */
  iVar2 = (int)param_1 - (int)this;
  iVar3 = 2;
  pSVar1 = this;
  do {
    pSVar1 = pSVar1 + 4;
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar1 = this + 0xc;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar1 = this + 0x14;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar1 = this + 0x1c;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar1 = this + 0x24;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
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
  pSVar1 = this + 0x58;
  iVar3 = 4;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
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
  pSVar1 = this + 0xa0;
  do {
    *pSVar1 = pSVar1[(int)(param_1 + (0x9c - (int)(this + 0x9c)))];
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 + (-4 - (int)(this + 0x9c)) < (Slider2 *)&DAT_00000004);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pSVar1 = this + 0xac;
  do {
    *pSVar1 = pSVar1[(int)(param_1 + (0xa8 - (int)(this + 0xa8)))];
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 + (-4 - (int)(this + 0xa8)) < (Slider2 *)&DAT_00000004);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  this[0xb8] = param_1[0xb8];
  this[0xb9] = param_1[0xb9];
  this[0xba] = param_1[0xba];
  this[0xbc] = param_1[0xbc];
  this[0xbd] = param_1[0xbd];
  pSVar1 = this + 0xc0;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar1 = this + 200;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pSVar1 = this + 0xd0;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  pSVar1 = this + 0xe4;
  iVar3 = 2;
  do {
    *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar1 + iVar2);
    pSVar1 = pSVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  this[0xf4] = param_1[0xf4];
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  return this;
}

