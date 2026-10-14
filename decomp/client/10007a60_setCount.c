
/* public: void __thiscall vgui::Dar<char>::setCount(int) */

void __thiscall vgui::Dar<char>::setCount(Dar<char> *this,int param_1)

{
                    /* 0x7a60  422  ?setCount@?$Dar@D@vgui@@QAEXH@Z
                       0x7a60  423  ?setCount@?$Dar@H@vgui@@QAEXH@Z
                       0x7a60  424  ?setCount@?$Dar@PAD@vgui@@QAEXH@Z
                       0x7a60  425  ?setCount@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXH@Z
                       0x7a60  426  ?setCount@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXH@Z
                       0x7a60  427  ?setCount@?$Dar@PAVButton@vgui@@@vgui@@QAEXH@Z
                       0x7a60  428  ?setCount@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x7a60  429  ?setCount@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXH@Z
                       0x7a60  430  ?setCount@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x7a60  431  ?setCount@?$Dar@PAVFrame@vgui@@@vgui@@QAEXH@Z
                       0x7a60  432  ?setCount@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXH@Z
                       0x7a60  433  ?setCount@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXH@Z
                       0x7a60  434  ?setCount@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXH@Z
                       0x7a60  435  ?setCount@?$Dar@PAVLabel@vgui@@@vgui@@QAEXH@Z
                       0x7a60  436  ?setCount@?$Dar@PAVPanel@vgui@@@vgui@@QAEXH@Z
                       0x7a60  437  ?setCount@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXH@Z
                       0x7a60  438  ?setCount@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXH@Z
                       0x7a60  439  ?setCount@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

