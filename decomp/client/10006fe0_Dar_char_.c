
/* public: __thiscall vgui::Dar<char>::Dar<char>(void) */

Dar<char> * __thiscall vgui::Dar<char>::Dar<char>(Dar<char> *this)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
                    /* 0x6fe0  2  ??0?$Dar@D@vgui@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  uVar1 = 1;
  do {
    uVar5 = uVar1;
    uVar1 = uVar5 * 2;
  } while ((int)uVar1 < 4);
  puVar2 = operator_new(uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_10049aab(0);
  }
  puVar6 = puVar2;
  for (uVar5 = (uVar5 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(uint *)(this + 4) = uVar1;
  iVar3 = 0;
  if (0 < *(int *)this) {
    do {
      iVar4 = iVar3 + 1;
      *(undefined1 *)(iVar3 + (int)puVar2) = *(undefined1 *)(*(int *)(this + 8) + -1 + iVar4);
      iVar3 = iVar4;
    } while (iVar4 < *(int *)this);
  }
  FUN_10049a73(*(undefined **)(this + 8));
  *(undefined4 **)(this + 8) = puVar2;
  return this;
}

