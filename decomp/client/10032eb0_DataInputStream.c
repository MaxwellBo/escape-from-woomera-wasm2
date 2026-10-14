
/* public: __thiscall vgui::DataInputStream::DataInputStream(class vgui::DataInputStream const &) */

void __thiscall
vgui::DataInputStream::DataInputStream(DataInputStream *this,DataInputStream *param_1)

{
  int in_stack_00000008;
  
                    /* 0x32eb0  48  ??0DataInputStream@vgui@@QAE@ABV01@@Z */
  if (in_stack_00000008 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable_;
    *(undefined ***)(this + 0x10) = &InputStream::_vftable_;
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &_vftable__for__vgui__DataInputStream__;
  *(undefined ***)(this + *(int *)(*(int *)(this + 4) + 4) + 4) =
       &_vftable__for__vgui__InputStream__;
  *(undefined4 *)(this + *(int *)(*(int *)(this + 4) + 4)) = 0;
  return;
}

