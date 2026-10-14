
/* public: __thiscall vgui::Dar<int>::Dar<int>(void) */

Dar<int> * __thiscall vgui::Dar<int>::Dar<int>(Dar<int> *this)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
                    /* 0x77a0  4  ??0?$Dar@H@vgui@@QAE@XZ
                       0x77a0  6  ??0?$Dar@PAD@vgui@@QAE@XZ
                       0x77a0  8  ??0?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAE@XZ
                       0x77a0  10  ??0?$Dar@PAVActionSignal@vgui@@@vgui@@QAE@XZ
                       0x77a0  12  ??0?$Dar@PAVButton@vgui@@@vgui@@QAE@XZ
                       0x77a0  14  ??0?$Dar@PAVChangeSignal@vgui@@@vgui@@QAE@XZ
                       0x77a0  16  ??0?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAE@XZ
                       0x77a0  18  ??0?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAE@XZ
                       0x77a0  20  ??0?$Dar@PAVFrame@vgui@@@vgui@@QAE@XZ
                       0x77a0  22  ??0?$Dar@PAVFrameSignal@vgui@@@vgui@@QAE@XZ
                       0x77a0  24  ??0?$Dar@PAVInputSignal@vgui@@@vgui@@QAE@XZ
                       0x77a0  26  ??0?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAE@XZ
                       0x77a0  28  ??0?$Dar@PAVLabel@vgui@@@vgui@@QAE@XZ
                       0x77a0  30  ??0?$Dar@PAVPanel@vgui@@@vgui@@QAE@XZ
                       0x77a0  32  ??0?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAE@XZ
                       0x77a0  34  ??0?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAE@XZ
                       0x77a0  36  ??0?$Dar@PAVTickSignal@vgui@@@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  uVar1 = 1;
  do {
    uVar5 = uVar1;
    uVar1 = uVar5 * 2;
  } while ((int)uVar1 < 4);
  puVar2 = operator_new(uVar5 * 8);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_10049aab(0);
  }
  puVar6 = puVar2;
  for (iVar4 = (uVar5 & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(uint *)(this + 4) = uVar1;
  iVar4 = 0;
  if (0 < *(int *)this) {
    do {
      iVar3 = iVar4 + 1;
      puVar2[iVar4] = *(undefined4 *)(*(int *)(this + 8) + -4 + iVar3 * 4);
      iVar4 = iVar3;
    } while (iVar3 < *(int *)this);
  }
  FUN_10049a73(*(undefined **)(this + 8));
  *(undefined4 **)(this + 8) = puVar2;
  return this;
}

