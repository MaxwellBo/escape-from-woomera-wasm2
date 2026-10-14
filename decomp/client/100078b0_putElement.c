
/* public: void __thiscall vgui::Dar<int>::putElement(int) */

void __thiscall vgui::Dar<int>::putElement(Dar<int> *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 unaff_retaddr;
  
                    /* 0x78b0  346  ?putElement@?$Dar@H@vgui@@QAEXH@Z
                       0x78b0  347  ?putElement@?$Dar@PAD@vgui@@QAEXPAD@Z
                       0x78b0  348  ?putElement@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXPAV?$Dar@D@2@@Z
                       0x78b0  349
                       ?putElement@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXPAVActionSignal@2@@Z
                       0x78b0  350  ?putElement@?$Dar@PAVButton@vgui@@@vgui@@QAEXPAVButton@2@@Z
                       0x78b0  351
                       ?putElement@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXPAVChangeSignal@2@@Z
                       0x78b0  352
                       ?putElement@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXPAVDesktopIcon@2@@Z
                       0x78b0  353
                       ?putElement@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXPAVFocusChangeSignal@2@@Z
                       0x78b0  354  ?putElement@?$Dar@PAVFrame@vgui@@@vgui@@QAEXPAVFrame@2@@Z
                       0x78b0  355
                       ?putElement@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXPAVFrameSignal@2@@Z
                       0x78b0  356
                       ?putElement@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXPAVInputSignal@2@@Z
                       0x78b0  357
                       ?putElement@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXPAVIntChangeSignal@2@@Z
                       0x78b0  358  ?putElement@?$Dar@PAVLabel@vgui@@@vgui@@QAEXPAVLabel@2@@Z
                       0x78b0  359  ?putElement@?$Dar@PAVPanel@vgui@@@vgui@@QAEXPAVPanel@2@@Z
                       0x78b0  360
                       ?putElement@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXPAVRepaintSignal@2@@Z
                       0x78b0  361
                       ?putElement@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXPAVSurfaceBase@2@@Z
                       0x78b0  362
                       ?putElement@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXPAVTickSignal@2@@Z */
  iVar2 = 0;
  iVar4 = *(int *)this;
  if (0 < iVar4) {
    piVar5 = *(int **)(this + 8);
    do {
      if (*piVar5 == param_1) {
        return;
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < iVar4);
  }
  uVar6 = *(uint *)(this + 4);
  if ((int)uVar6 < iVar4 + 1) {
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    for (; (int)uVar6 < iVar4 + 1; uVar6 = uVar6 * 2) {
    }
    puVar1 = operator_new(uVar6 * 4);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_10049aab(0);
    }
    puVar7 = puVar1;
    for (uVar3 = uVar6 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *(uint *)(this + 4) = uVar6;
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
  *(undefined4 *)(*(int *)(this + 8) + *(int *)this * 4) = unaff_retaddr;
  *(int *)this = *(int *)this + 1;
  return;
}

