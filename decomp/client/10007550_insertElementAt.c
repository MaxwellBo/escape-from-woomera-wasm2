
/* public: void __thiscall vgui::Dar<int>::insertElementAt(int,int) */

void __thiscall vgui::Dar<int>::insertElementAt(Dar<int> *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 unaff_retaddr;
  
                    /* 0x7550  321  ?insertElementAt@?$Dar@H@vgui@@QAEXHH@Z
                       0x7550  322  ?insertElementAt@?$Dar@PAD@vgui@@QAEXPADH@Z
                       0x7550  323
                       ?insertElementAt@?$Dar@PAV?$Dar@D@vgui@@@vgui@@QAEXPAV?$Dar@D@2@H@Z
                       0x7550  324
                       ?insertElementAt@?$Dar@PAVActionSignal@vgui@@@vgui@@QAEXPAVActionSignal@2@H@Z
                       0x7550  325
                       ?insertElementAt@?$Dar@PAVButton@vgui@@@vgui@@QAEXPAVButton@2@H@Z
                       0x7550  326
                       ?insertElementAt@?$Dar@PAVChangeSignal@vgui@@@vgui@@QAEXPAVChangeSignal@2@H@Z
                       0x7550  327
                       ?insertElementAt@?$Dar@PAVDesktopIcon@vgui@@@vgui@@QAEXPAVDesktopIcon@2@H@Z
                       0x7550  328
                       ?insertElementAt@?$Dar@PAVFocusChangeSignal@vgui@@@vgui@@QAEXPAVFocusChangeSignal@2@H@Z
                       0x7550  329  ?insertElementAt@?$Dar@PAVFrame@vgui@@@vgui@@QAEXPAVFrame@2@H@Z
                       0x7550  330
                       ?insertElementAt@?$Dar@PAVFrameSignal@vgui@@@vgui@@QAEXPAVFrameSignal@2@H@Z
                       0x7550  331
                       ?insertElementAt@?$Dar@PAVInputSignal@vgui@@@vgui@@QAEXPAVInputSignal@2@H@Z
                       0x7550  332
                       ?insertElementAt@?$Dar@PAVIntChangeSignal@vgui@@@vgui@@QAEXPAVIntChangeSignal@2@H@Z
                       0x7550  333  ?insertElementAt@?$Dar@PAVLabel@vgui@@@vgui@@QAEXPAVLabel@2@H@Z
                       0x7550  334  ?insertElementAt@?$Dar@PAVPanel@vgui@@@vgui@@QAEXPAVPanel@2@H@Z
                       0x7550  335
                       ?insertElementAt@?$Dar@PAVRepaintSignal@vgui@@@vgui@@QAEXPAVRepaintSignal@2@H@Z
                       0x7550  336
                       ?insertElementAt@?$Dar@PAVSurfaceBase@vgui@@@vgui@@QAEXPAVSurfaceBase@2@H@Z
                       0x7550  337
                       ?insertElementAt@?$Dar@PAVTickSignal@vgui@@@vgui@@QAEXPAVTickSignal@2@H@Z */
  if (-1 < param_2) {
    iVar4 = *(int *)this;
    if (param_2 == iVar4 || param_2 < iVar4) {
      if ((param_2 != iVar4) && (iVar4 != 0)) {
        uVar5 = *(uint *)(this + 4);
        if ((int)uVar5 < iVar4 + 1) {
          if (uVar5 == 0) {
            uVar5 = 1;
          }
          for (; (int)uVar5 < iVar4 + 1; uVar5 = uVar5 * 2) {
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
          param_2 = param_1;
        }
        *(undefined4 *)(*(int *)(this + 8) + *(int *)this * 4) = unaff_retaddr;
        iVar4 = *(int *)this;
        *(int *)this = iVar4 + 1;
        for (; param_2 < iVar4; iVar4 = iVar4 + -1) {
          *(undefined4 *)(*(int *)(this + 8) + iVar4 * 4) =
               *(undefined4 *)(*(int *)(this + 8) + -4 + iVar4 * 4);
        }
        *(undefined4 *)(*(int *)(this + 8) + param_2 * 4) = unaff_retaddr;
        return;
      }
      uVar5 = *(uint *)(this + 4);
      if ((int)uVar5 < iVar4 + 1) {
        if (uVar5 == 0) {
          uVar5 = 1;
        }
        for (; (int)uVar5 < iVar4 + 1; uVar5 = uVar5 * 2) {
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
      *(undefined4 *)(*(int *)(this + 8) + *(int *)this * 4) = unaff_retaddr;
      *(int *)this = *(int *)this + 1;
    }
  }
  return;
}

