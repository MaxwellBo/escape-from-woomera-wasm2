
int __thiscall FUN_10095ea0(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 1) {
    param_1 = *(int *)((int)this + 0xb8);
  }
  else if (param_1 == 2) {
    param_1 = *(int *)((int)this + 0xbc);
  }
  else {
    (*DAT_10121efc)(1,s_Unknown_Sound_List_Type__10117230);
  }
  if (param_1 == -1) {
    return 0;
  }
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    param_1 = *(int *)((param_1 + 7) * 0x20 + (int)this);
  } while (param_1 != -1);
  return iVar1;
}

