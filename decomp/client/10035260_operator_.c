
/* public: class vgui::StackLayout & __thiscall vgui::StackLayout::operator=(class vgui::StackLayout
   const &) */

StackLayout * __thiscall vgui::StackLayout::operator=(StackLayout *this,StackLayout *param_1)

{
                    /* 0x35260  142  ??4StackLayout@vgui@@QAEAAV01@ABV01@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  this[8] = param_1[8];
  return this;
}

