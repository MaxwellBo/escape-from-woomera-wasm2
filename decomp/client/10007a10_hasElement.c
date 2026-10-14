
/* public: bool __thiscall vgui::Dar<int>::hasElement(int) */

bool __thiscall vgui::Dar<int>::hasElement(Dar<int> *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x7a10  301  ?hasElement@?$Dar@H@vgui@@QAE_NH@Z
                       0x7a10  302  ?hasElement@?$Dar@PAD@vgui@@QAE_NPAD@Z
                       0x7a10  303  ?hasElement@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAE_NPAV?$Dar@D@2@@Z
                       0x7a10  304
                       ?hasElement@?$Dar@PAVActionSignal@vgui@@@vgui@@QAE_NPAVActionSignal@2@@Z
                       0x7a10  305  ?hasElement@?$Dar@PAVButton@vgui@@@vgui@@QAE_NPAVButton@2@@Z
                       0x7a10  306
                       ?hasElement@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAE_NPAVChangeSignal@2@@Z
                       0x7a10  307
                       ?hasElement@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAE_NPAVDesktopIcon@2@@Z
                       0x7a10  308
                       ?hasElement@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAE_NPAVFocusChangeSignal@2@@Z
                       0x7a10  309  ?hasElement@?$Dar@PAVFrame@vgui@@@vgui@@QAE_NPAVFrame@2@@Z
                       0x7a10  310
                       ?hasElement@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAE_NPAVFrameSignal@2@@Z
                       0x7a10  311
                       ?hasElement@?$Dar@PAVInputSignal@vgui@@@vgui@@QAE_NPAVInputSignal@2@@Z
                       0x7a10  312
                       ?hasElement@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAE_NPAVIntChangeSignal@2@@Z
                       0x7a10  313  ?hasElement@?$Dar@PAVLabel@vgui@@@vgui@@QAE_NPAVLabel@2@@Z
                       0x7a10  314  ?hasElement@?$Dar@PAVPanel@vgui@@@vgui@@QAE_NPAVPanel@2@@Z
                       0x7a10  315
                       ?hasElement@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAE_NPAVRepaintSignal@2@@Z
                       0x7a10  316
                       ?hasElement@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAE_NPAVSurfaceBase@2@@Z
                       0x7a10  317
                       ?hasElement@?$Dar@PAVTickSignal@vgui@@@vgui@@QAE_NPAVTickSignal@2@@Z */
  iVar1 = 0;
  if (0 < *(int *)this) {
    piVar2 = *(int **)(this + 8);
    do {
      if (*piVar2 == param_1) {
        return true;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)this);
  }
  return false;
}

