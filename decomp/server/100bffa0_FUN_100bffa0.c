
void __cdecl FUN_100bffa0(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (0 < param_3) {
    iVar1 = param_2 - (int)param_1;
    do {
      param_1[iVar1] = *param_1;
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

