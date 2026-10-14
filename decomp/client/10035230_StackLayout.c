
/* public: __thiscall vgui::StackLayout::StackLayout(class vgui::StackLayout const &) */

void __thiscall vgui::StackLayout::StackLayout(StackLayout *this,StackLayout *param_1)

{
                    /* 0x35230  80  ??0StackLayout@vgui@@QAE@ABV01@@Z */
  *(undefined ***)this = &Layout::_vftable_;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  this[8] = param_1[8];
  *(undefined ***)this = &_vftable_;
  return;
}

