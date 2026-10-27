
/* public: class vgui::Image & __thiscall vgui::Image::operator=(class vgui::Image const &) */

Image * __thiscall vgui::Image::operator=(Image *this,Image *param_1)

{
  Image *pIVar1;
  int iVar2;
  
                    /* 0x4840  124  ??4Image@vgui@@QAEAAV01@ABV01@@Z */
  iVar2 = 2;
  pIVar1 = this;
  do {
    pIVar1 = pIVar1 + 4;
    *(undefined4 *)pIVar1 = *(undefined4 *)(pIVar1 + ((int)param_1 - (int)this));
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pIVar1 = this + 0xc;
  iVar2 = 2;
  do {
    *(undefined4 *)pIVar1 = *(undefined4 *)(pIVar1 + ((int)param_1 - (int)this));
    pIVar1 = pIVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  pIVar1 = this + 0x1c;
  do {
    *pIVar1 = pIVar1[(int)(param_1 + (0x18 - (int)(this + 0x18)))];
    pIVar1 = pIVar1 + 1;
  } while (pIVar1 + (-4 - (int)(this + 0x18)) < (Image *)&DAT_00000004);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}

