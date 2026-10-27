
/* public: void __thiscall vgui::Dar<char>::removeElement(char) */

void __thiscall vgui::Dar<char>::removeElement(Dar<char> *this,char param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x74a0  383  ?removeElement@?$Dar@D@vgui@@QAEXD@Z */
  iVar3 = 0;
  iVar2 = *(int *)this;
  if (0 < iVar2) {
    while (*(char *)(*(int *)(this + 8) + iVar3) != param_1) {
      iVar3 = iVar3 + 1;
      if (iVar2 <= iVar3) {
        return;
      }
    }
    if ((-1 < iVar3) && (iVar3 < iVar2)) {
      if (iVar3 < iVar2 + -1) {
        do {
          puVar1 = (undefined1 *)(*(int *)(this + 8) + iVar3);
          iVar3 = iVar3 + 1;
          *puVar1 = puVar1[1];
        } while (iVar3 < *(int *)this + -1);
      }
      *(int *)this = *(int *)this + -1;
    }
  }
  return;
}

