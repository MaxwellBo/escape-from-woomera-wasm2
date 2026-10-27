
/* public: __thiscall vgui::BorderLayout::BorderLayout(class vgui::BorderLayout const &) */

void __thiscall vgui::BorderLayout::BorderLayout(BorderLayout *this,BorderLayout *param_1)

{
  undefined4 uVar1;
  
                    /* 0x343c0  43  ??0BorderLayout@vgui@@QAE@ABV01@@Z */
  *(undefined ***)this = &Layout::_vftable_;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}

