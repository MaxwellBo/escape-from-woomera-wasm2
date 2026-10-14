
/* public: int __thiscall vgui::Dar<int>::operator[](int) */

int __thiscall vgui::Dar<int>::operator[](Dar<int> *this,int param_1)

{
                    /* 0x7a40  152  ??A?$Dar@H@vgui@@QAEHH@Z
                       0x7a40  153  ??A?$Dar@PAD@vgui@@QAEPADH@Z
                       0x7a40  154  ??A?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEPAV?$Dar@D@1@H@Z
                       0x7a40  155  ??A?$Dar@PAVActionSignal@vgui@@@vgui@@QAEPAVActionSignal@1@H@Z
                       0x7a40  156  ??A?$Dar@PAVButton@vgui@@@vgui@@QAEPAVButton@1@H@Z
                       0x7a40  157  ??A?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEPAVChangeSignal@1@H@Z
                       0x7a40  158  ??A?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEPAVDesktopIcon@1@H@Z
                       0x7a40  159
                       ??A?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEPAVFocusChangeSignal@1@H@Z
                       0x7a40  160  ??A?$Dar@PAVFrame@vgui@@@vgui@@QAEPAVFrame@1@H@Z
                       0x7a40  161  ??A?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEPAVFrameSignal@1@H@Z
                       0x7a40  162  ??A?$Dar@PAVInputSignal@vgui@@@vgui@@QAEPAVInputSignal@1@H@Z
                       0x7a40  163
                       ??A?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEPAVIntChangeSignal@1@H@Z
                       0x7a40  164  ??A?$Dar@PAVLabel@vgui@@@vgui@@QAEPAVLabel@1@H@Z
                       0x7a40  165  ??A?$Dar@PAVPanel@vgui@@@vgui@@QAEPAVPanel@1@H@Z
                       0x7a40  166  ??A?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEPAVRepaintSignal@1@H@Z
                       0x7a40  167  ??A?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEPAVSurfaceBase@1@H@Z
                       0x7a40  168  ??A?$Dar@PAVTickSignal@vgui@@@vgui@@QAEPAVTickSignal@1@H@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    return *(int *)(*(int *)(this + 8) + param_1 * 4);
  }
  return 0;
}

