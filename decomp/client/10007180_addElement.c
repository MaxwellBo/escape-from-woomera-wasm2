
/* public: void __thiscall vgui::Dar<char>::addElement(char) */

void __thiscall vgui::Dar<char>::addElement(Dar<char> *this,char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 unaff_retaddr;
  
                    /* 0x7180  235  ?addElement@?$Dar@D@vgui@@QAEXD@Z */
  uVar5 = *(uint *)(this + 4);
  if ((int)uVar5 < *(int *)this + 1) {
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    for (; (int)uVar5 < *(int *)this + 1; uVar5 = uVar5 * 2) {
    }
    puVar1 = operator_new(uVar5);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_10049aab(0);
    }
    puVar6 = puVar1;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(this + 4) = uVar5;
    iVar2 = 0;
    if (0 < *(int *)this) {
      do {
        iVar3 = iVar2 + 1;
        *(undefined1 *)(iVar2 + (int)puVar1) = *(undefined1 *)(*(int *)(this + 8) + -1 + iVar3);
        iVar2 = iVar3;
      } while (iVar3 < *(int *)this);
    }
    FUN_10049a73(*(undefined **)(this + 8));
    *(undefined4 **)(this + 8) = puVar1;
  }
  *(undefined1 *)(*(int *)(this + 8) + *(int *)this) = unaff_retaddr;
  *(int *)this = *(int *)this + 1;
  return;
}

