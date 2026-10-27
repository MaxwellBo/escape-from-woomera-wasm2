
/* public: void __thiscall vgui::Dar<char>::removeElementAt(int) */

void __thiscall vgui::Dar<char>::removeElementAt(Dar<char> *this,int param_1)

{
  undefined1 *puVar1;
  
                    /* 0x7470  401  ?removeElementAt@?$Dar@D@vgui@@QAEXH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    if (param_1 < *(int *)this + -1) {
      do {
        puVar1 = (undefined1 *)(*(int *)(this + 8) + param_1);
        param_1 = param_1 + 1;
        *puVar1 = puVar1[1];
      } while (param_1 < *(int *)this + -1);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

