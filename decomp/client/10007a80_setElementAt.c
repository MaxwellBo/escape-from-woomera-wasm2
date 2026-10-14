
/* public: void __thiscall vgui::Dar<int>::setElementAt(int,int) */

void __thiscall vgui::Dar<int>::setElementAt(Dar<int> *this,int param_1,int param_2)

{
                    /* 0x7a80  441  ?setElementAt@?$Dar@H@vgui@@QAEXHH@Z
                       0x7a80  442  ?setElementAt@?$Dar@PAD@vgui@@QAEXPADH@Z
                       0x7a80  443  ?setElementAt@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXPAV?$Dar@D@2@H@Z
                       0x7a80  444
                       ?setElementAt@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXPAVActionSignal@2@H@Z
                       0x7a80  445  ?setElementAt@?$Dar@PAVButton@vgui@@@vgui@@QAEXPAVButton@2@H@Z
                       0x7a80  446
                       ?setElementAt@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXPAVChangeSignal@2@H@Z
                       0x7a80  447
                       ?setElementAt@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXPAVDesktopIcon@2@H@Z
                       0x7a80  448
                       ?setElementAt@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXPAVFocusChangeSignal@2@H@Z
                       0x7a80  449  ?setElementAt@?$Dar@PAVFrame@vgui@@@vgui@@QAEXPAVFrame@2@H@Z
                       0x7a80  450
                       ?setElementAt@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXPAVFrameSignal@2@H@Z
                       0x7a80  451
                       ?setElementAt@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXPAVInputSignal@2@H@Z
                       0x7a80  452
                       ?setElementAt@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXPAVIntChangeSignal@2@H@Z
                       0x7a80  453  ?setElementAt@?$Dar@PAVLabel@vgui@@@vgui@@QAEXPAVLabel@2@H@Z
                       0x7a80  454  ?setElementAt@?$Dar@PAVPanel@vgui@@@vgui@@QAEXPAVPanel@2@H@Z
                       0x7a80  455
                       ?setElementAt@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXPAVRepaintSignal@2@H@Z
                       0x7a80  456
                       ?setElementAt@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXPAVSurfaceBase@2@H@Z
                       0x7a80  457
                       ?setElementAt@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXPAVTickSignal@2@H@Z */
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(int *)(*(int *)(this + 8) + param_2 * 4) = param_1;
  }
  return;
}

