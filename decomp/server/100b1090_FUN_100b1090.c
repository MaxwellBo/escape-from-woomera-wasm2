
void __cdecl FUN_100b1090(char *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    *param_2 = 0;
    return;
  }
  iVar3 = (int)param_2 - (int)param_1;
  do {
    if (cVar1 == '#') break;
    iVar2 = iVar2 + 1;
    param_1[iVar3] = *param_1;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  param_2[iVar2] = 0;
  return;
}

