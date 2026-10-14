
/* public: char __thiscall vgui::Dar<char>::operator[](int) */

char __thiscall vgui::Dar<char>::operator[](Dar<char> *this,int param_1)

{
                    /* 0x7500  151  ??A?$Dar@D@vgui@@QAEDH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    return *(char *)(*(int *)(this + 8) + param_1);
  }
  return '\0';
}

