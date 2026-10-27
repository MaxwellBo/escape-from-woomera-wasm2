
/* public: __thiscall vgui::MiniApp::MiniApp(class vgui::MiniApp const &) */

void __thiscall vgui::MiniApp::MiniApp(MiniApp *this,MiniApp *param_1)

{
  undefined4 uVar1;
  
                    /* 0x14fb0  70  ??0MiniApp@vgui@@QAE@ABV01@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}

