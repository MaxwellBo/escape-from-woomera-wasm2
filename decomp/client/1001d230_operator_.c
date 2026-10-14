
/* public: class vgui::TextGrid & __thiscall vgui::TextGrid::operator=(class vgui::TextGrid const &)
    */

TextGrid * __thiscall vgui::TextGrid::operator=(TextGrid *this,TextGrid *param_1)

{
  TextGrid *pTVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x1d230  148  ??4TextGrid@vgui@@QAEAAV01@ABV01@@Z */
  iVar2 = (int)param_1 - (int)this;
  iVar3 = 2;
  pTVar1 = this;
  do {
    pTVar1 = pTVar1 + 4;
    *(undefined4 *)pTVar1 = *(undefined4 *)(pTVar1 + iVar2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pTVar1 = this + 0xc;
  iVar3 = 2;
  do {
    *(undefined4 *)pTVar1 = *(undefined4 *)(pTVar1 + iVar2);
    pTVar1 = pTVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pTVar1 = this + 0x14;
  iVar3 = 2;
  do {
    *(undefined4 *)pTVar1 = *(undefined4 *)(pTVar1 + iVar2);
    pTVar1 = pTVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pTVar1 = this + 0x1c;
  iVar3 = 2;
  do {
    *(undefined4 *)pTVar1 = *(undefined4 *)(pTVar1 + iVar2);
    pTVar1 = pTVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pTVar1 = this + 0x24;
  iVar3 = 2;
  do {
    *(undefined4 *)pTVar1 = *(undefined4 *)(pTVar1 + iVar2);
    pTVar1 = pTVar1 + 4;
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
  pTVar1 = this + 0x58;
  iVar3 = 4;
  do {
    *(undefined4 *)pTVar1 = *(undefined4 *)(pTVar1 + iVar2);
    pTVar1 = pTVar1 + 4;
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
  pTVar1 = this + 0xa0;
  do {
    *pTVar1 = pTVar1[(int)(param_1 + (0x9c - (int)(this + 0x9c)))];
    pTVar1 = pTVar1 + 1;
  } while (pTVar1 + (-4 - (int)(this + 0x9c)) < (TextGrid *)&DAT_00000004);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pTVar1 = this + 0xac;
  do {
    *pTVar1 = pTVar1[(int)(param_1 + (0xa8 - (int)(this + 0xa8)))];
    pTVar1 = pTVar1 + 1;
  } while (pTVar1 + (-4 - (int)(this + 0xa8)) < (TextGrid *)&DAT_00000004);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  this[0xb8] = param_1[0xb8];
  this[0xb9] = param_1[0xb9];
  this[0xba] = param_1[0xba];
  pTVar1 = this + 0xbc;
  iVar3 = 2;
  do {
    *(undefined4 *)pTVar1 = *(undefined4 *)(pTVar1 + iVar2);
    pTVar1 = pTVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pTVar1 = this + 0xc4;
  iVar3 = 3;
  do {
    *(undefined4 *)pTVar1 = *(undefined4 *)(pTVar1 + iVar2);
    pTVar1 = pTVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pTVar1 = this + 0xd0;
  iVar3 = 3;
  do {
    *(undefined4 *)pTVar1 = *(undefined4 *)(pTVar1 + iVar2);
    pTVar1 = pTVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 2;
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  pTVar1 = this + 0xe0;
  do {
    *(undefined4 *)pTVar1 = *(undefined4 *)(pTVar1 + iVar2);
    pTVar1 = pTVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return this;
}

