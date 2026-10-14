
/* public: __thiscall vgui::FileInputStream::FileInputStream(class vgui::FileInputStream const &) */

void __thiscall
vgui::FileInputStream::FileInputStream(FileInputStream *this,FileInputStream *param_1)

{
  undefined4 uVar1;
  
                    /* 0x14b90  51  ??0FileInputStream@vgui@@QAE@ABV01@@Z */
  *(undefined ***)this = &InputStream::_vftable_;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}

