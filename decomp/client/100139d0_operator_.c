
/* public: class vgui::TextImage & __thiscall vgui::TextImage::operator=(class vgui::TextImage const
   &) */

TextImage * __thiscall vgui::TextImage::operator=(TextImage *this,TextImage *param_1)

{
  TextImage *pTVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x139d0  149  ??4TextImage@vgui@@QAEAAV01@ABV01@@Z */
  iVar3 = (int)param_1 - (int)this;
  iVar2 = 2;
  pTVar1 = this;
  do {
    pTVar1 = pTVar1 + 4;
    *(undefined4 *)pTVar1 = *(undefined4 *)(pTVar1 + iVar3);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pTVar1 = this + 0xc;
  iVar2 = 2;
  do {
    *(undefined4 *)pTVar1 = *(undefined4 *)(pTVar1 + iVar3);
    pTVar1 = pTVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  pTVar1 = this + 0x1c;
  do {
    *pTVar1 = pTVar1[(int)(param_1 + (0x18 - (int)(this + 0x18)))];
    pTVar1 = pTVar1 + 1;
  } while (pTVar1 + (-4 - (int)(this + 0x18)) < (TextImage *)&DAT_00000004);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  pTVar1 = this + 0x34;
  iVar2 = 4;
  do {
    *(undefined4 *)pTVar1 = *(undefined4 *)(pTVar1 + iVar3);
    pTVar1 = pTVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  return this;
}

