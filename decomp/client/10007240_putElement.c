
/* public: void __thiscall vgui::Dar<char>::putElement(char) */

void __thiscall vgui::Dar<char>::putElement(Dar<char> *this,char param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 unaff_retaddr;
  
                    /* 0x7240  345  ?putElement@?$Dar@D@vgui@@QAEXD@Z */
  iVar1 = 0;
  iVar3 = *(int *)this;
  if (0 < iVar3) {
    do {
      if (*(char *)(*(int *)(this + 8) + iVar1) == param_1) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  uVar5 = *(uint *)(this + 4);
  if ((int)uVar5 < iVar3 + 1) {
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    for (; (int)uVar5 < iVar3 + 1; uVar5 = uVar5 * 2) {
    }
    puVar2 = operator_new(uVar5);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_10049aab(0);
    }
    puVar6 = puVar2;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(this + 4) = uVar5;
    iVar3 = 0;
    if (0 < *(int *)this) {
      do {
        iVar1 = iVar3 + 1;
        *(undefined1 *)(iVar3 + (int)puVar2) = *(undefined1 *)(*(int *)(this + 8) + -1 + iVar1);
        iVar3 = iVar1;
      } while (iVar1 < *(int *)this);
    }
    FUN_10049a73(*(undefined **)(this + 8));
    *(undefined4 **)(this + 8) = puVar2;
  }
  *(undefined1 *)(*(int *)(this + 8) + *(int *)this) = unaff_retaddr;
  *(int *)this = *(int *)this + 1;
  return;
}

