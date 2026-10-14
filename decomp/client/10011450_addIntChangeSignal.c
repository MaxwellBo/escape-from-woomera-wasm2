
/* public: virtual void __thiscall vgui::Slider2::addIntChangeSignal(class vgui::IntChangeSignal *)
    */

void __thiscall vgui::Slider2::addIntChangeSignal(Slider2 *this,IntChangeSignal *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 unaff_retaddr;
  
                    /* 0x11450  254  ?addIntChangeSignal@Slider2@vgui@@UAEXPAVIntChangeSignal@2@@Z
                        */
  iVar2 = 0;
  iVar4 = *(int *)(this + 0xd8);
  if (0 < iVar4) {
    piVar5 = *(int **)(this + 0xe0);
    do {
      if ((IntChangeSignal *)*piVar5 == param_1) {
        return;
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < iVar4);
  }
  uVar6 = *(uint *)(this + 0xdc);
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
    *(uint *)(this + 0xdc) = uVar6;
    iVar4 = 0;
    if (0 < *(int *)(this + 0xd8)) {
      do {
        iVar2 = iVar4 + 1;
        puVar1[iVar4] = *(undefined4 *)(*(int *)(this + 0xe0) + -4 + iVar2 * 4);
        iVar4 = iVar2;
      } while (iVar2 < *(int *)(this + 0xd8));
    }
    FUN_10049a73(*(undefined **)(this + 0xe0));
    *(undefined4 **)(this + 0xe0) = puVar1;
  }
  *(undefined4 *)(*(int *)(this + 0xe0) + *(int *)(this + 0xd8) * 4) = unaff_retaddr;
  *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + 1;
  return;
}

