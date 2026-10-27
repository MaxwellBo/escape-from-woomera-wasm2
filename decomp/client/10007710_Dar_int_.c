
/* public: __thiscall vgui::Dar<int>::Dar<int>(int) */

Dar<int> * __thiscall vgui::Dar<int>::Dar<int>(Dar<int> *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
                    /* 0x7710  3  ??0?$Dar@H@vgui@@QAE@H@Z
                       0x7710  5  ??0?$Dar@PAD@vgui@@QAE@H@Z
                       0x7710  7  ??0?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAE@H@Z
                       0x7710  9  ??0?$Dar@PAVActionSignal@vgui@@@vgui@@QAE@H@Z
                       0x7710  11  ??0?$Dar@PAVButton@vgui@@@vgui@@QAE@H@Z
                       0x7710  13  ??0?$Dar@PAVChangeSignal@vgui@@@vgui@@QAE@H@Z
                       0x7710  15  ??0?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAE@H@Z
                       0x7710  17  ??0?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAE@H@Z
                       0x7710  19  ??0?$Dar@PAVFrame@vgui@@@vgui@@QAE@H@Z
                       0x7710  21  ??0?$Dar@PAVFrameSignal@vgui@@@vgui@@QAE@H@Z
                       0x7710  23  ??0?$Dar@PAVInputSignal@vgui@@@vgui@@QAE@H@Z
                       0x7710  25  ??0?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAE@H@Z
                       0x7710  27  ??0?$Dar@PAVLabel@vgui@@@vgui@@QAE@H@Z
                       0x7710  29  ??0?$Dar@PAVPanel@vgui@@@vgui@@QAE@H@Z
                       0x7710  31  ??0?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAE@H@Z
                       0x7710  33  ??0?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAE@H@Z
                       0x7710  35  ??0?$Dar@PAVTickSignal@vgui@@@vgui@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  if (0 < param_1) {
    uVar5 = 1;
    if (1 < param_1) {
      do {
        uVar5 = uVar5 * 2;
      } while ((int)uVar5 < param_1);
    }
    puVar1 = operator_new(uVar5 * 4);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_10049aab(0);
    }
    puVar6 = puVar1;
    for (uVar3 = uVar5 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(this + 4) = uVar5;
    iVar4 = 0;
    if (0 < *(int *)this) {
      do {
        iVar2 = iVar4 + 1;
        puVar1[iVar4] = *(undefined4 *)(*(int *)(this + 8) + -4 + iVar2 * 4);
        iVar4 = iVar2;
      } while (iVar2 < *(int *)this);
    }
    FUN_10049a73(*(undefined **)(this + 8));
    *(undefined4 **)(this + 8) = puVar1;
  }
  return this;
}

