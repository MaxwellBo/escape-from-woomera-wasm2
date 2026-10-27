
/* public: virtual void __thiscall vgui::ScrollBar2::addIntChangeSignal(class vgui::IntChangeSignal
   *) */

void __thiscall vgui::ScrollBar2::addIntChangeSignal(ScrollBar2 *this,IntChangeSignal *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 unaff_retaddr;
  
                    /* 0x10610  253
                       ?addIntChangeSignal@ScrollBar2@vgui@@UAEXPAVIntChangeSignal@2@@Z */
  iVar2 = 0;
  iVar4 = *(int *)(this + 200);
  if (0 < iVar4) {
    piVar5 = *(int **)(this + 0xd0);
    do {
      if ((IntChangeSignal *)*piVar5 == param_1) goto LAB_100106f0;
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < iVar4);
  }
  uVar6 = *(uint *)(this + 0xcc);
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
    *(uint *)(this + 0xcc) = uVar6;
    iVar4 = 0;
    if (0 < *(int *)(this + 200)) {
      do {
        iVar2 = iVar4 + 1;
        puVar1[iVar4] = *(undefined4 *)(*(int *)(this + 0xd0) + -4 + iVar2 * 4);
        iVar4 = iVar2;
      } while (iVar2 < *(int *)(this + 200));
    }
    FUN_10049a73(*(undefined **)(this + 0xd0));
    *(undefined4 **)(this + 0xd0) = puVar1;
  }
  *(undefined4 *)(*(int *)(this + 0xd0) + *(int *)(this + 200) * 4) = unaff_retaddr;
  *(int *)(this + 200) = *(int *)(this + 200) + 1;
LAB_100106f0:
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_1005e1f4;
    puVar1[1] = this;
  }
  (**(code **)(**(int **)(this + 0xc4) + 0x208))(puVar1);
  return;
}

