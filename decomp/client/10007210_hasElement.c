
/* public: bool __thiscall vgui::Dar<char>::hasElement(char) */

bool __thiscall vgui::Dar<char>::hasElement(Dar<char> *this,char param_1)

{
  int iVar1;
  
                    /* 0x7210  300  ?hasElement@?$Dar@D@vgui@@QAE_ND@Z */
  iVar1 = 0;
  if (0 < *(int *)this) {
    do {
      if (*(char *)(*(int *)(this + 8) + iVar1) == param_1) {
        return true;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)this);
  }
  return false;
}

