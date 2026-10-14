
/* public: void __thiscall vgui::Dar<int>::removeElementAt(int) */

void __thiscall vgui::Dar<int>::removeElementAt(Dar<int> *this,int param_1)

{
                    /* 0x7520  402  ?removeElementAt@?$Dar@H@vgui@@QAEXH@Z
                       0x7520  403  ?removeElementAt@?$Dar@PAD@vgui@@QAEXH@Z
                       0x7520  404  ?removeElementAt@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXH@Z
                       0x7520  405  ?removeElementAt@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXH@Z
                       0x7520  406  ?removeElementAt@?$Dar@PAVButton@vgui@@@vgui@@QAEXH@Z
                       0x7520  407  ?removeElementAt@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x7520  408  ?removeElementAt@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXH@Z
                       0x7520  409  ?removeElementAt@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x7520  410  ?removeElementAt@?$Dar@PAVFrame@vgui@@@vgui@@QAEXH@Z
                       0x7520  411  ?removeElementAt@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXH@Z
                       0x7520  412  ?removeElementAt@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXH@Z
                       0x7520  413  ?removeElementAt@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x7520  414  ?removeElementAt@?$Dar@PAVLabel@vgui@@@vgui@@QAEXH@Z
                       0x7520  415  ?removeElementAt@?$Dar@PAVPanel@vgui@@@vgui@@QAEXH@Z
                       0x7520  416  ?removeElementAt@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXH@Z
                       0x7520  417  ?removeElementAt@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXH@Z
                       0x7520  418  ?removeElementAt@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    if (param_1 < *(int *)this + -1) {
      do {
        param_1 = param_1 + 1;
        *(undefined4 *)(*(int *)(this + 8) + -4 + param_1 * 4) =
             *(undefined4 *)(*(int *)(this + 8) + param_1 * 4);
      } while (param_1 < *(int *)this + -1);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

