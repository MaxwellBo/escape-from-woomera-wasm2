
/* public: class vgui::TextEntry & __thiscall vgui::TextEntry::operator=(class vgui::TextEntry const
   &) */

TextEntry * __thiscall vgui::TextEntry::operator=(TextEntry *this,TextEntry *param_1)

{
  TextEntry *pTVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x32ab0  147  ??4TextEntry@vgui@@QAEAAV01@ABV01@@Z */
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
  } while (pTVar1 + (-4 - (int)(this + 0x9c)) < (TextEntry *)&DAT_00000004);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pTVar1 = this + 0xac;
  do {
    *pTVar1 = pTVar1[(int)(param_1 + (0xa8 - (int)(this + 0xa8)))];
    pTVar1 = pTVar1 + 1;
  } while (pTVar1 + (-4 - (int)(this + 0xa8)) < (TextEntry *)&DAT_00000004);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  this[0xb8] = param_1[0xb8];
  this[0xb9] = param_1[0xb9];
  this[0xba] = param_1[0xba];
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  this[0xd0] = param_1[0xd0];
  this[0xd1] = param_1[0xd1];
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  pTVar1 = this + 0xdc;
  iVar3 = 2;
  do {
    *(undefined4 *)pTVar1 = *(undefined4 *)(pTVar1 + iVar2);
    pTVar1 = pTVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  return this;
}

