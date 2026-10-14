
char * __cdecl FUN_10030b50(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar6 = param_2;
  iVar2 = param_3;
  if (*param_1 != '\0') {
    while (param_3 = iVar2, 0 < param_3) {
      if (*param_1 == '#') {
        pcVar3 = &DAT_100b27a4;
        pcVar5 = param_1 + 1;
        for (pcVar4 = pcVar5;
            ((cVar1 = *pcVar4, '@' < cVar1 && (cVar1 < '{')) || (('/' < cVar1 && (cVar1 < ':'))));
            pcVar4 = pcVar4 + 1) {
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
        }
        *pcVar3 = '\0';
        iVar2 = (*DAT_100a5054)(&DAT_100b27a4);
        if ((iVar2 == 0) || (pcVar3 = *(char **)(iVar2 + 0x28), pcVar3 == (char *)0x0)) {
          *pcVar6 = *param_1;
          pcVar6 = pcVar6 + 1;
        }
        else {
          cVar1 = *pcVar3;
          while (cVar1 != '\0') {
            pcVar3 = pcVar3 + 1;
            *pcVar6 = cVar1;
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar3;
          }
          *pcVar6 = '\0';
          pcVar5 = pcVar4;
        }
      }
      else {
        *pcVar6 = *param_1;
        pcVar6 = pcVar6 + 1;
        pcVar5 = param_1 + 1;
        *pcVar6 = '\0';
      }
      param_1 = pcVar5;
      iVar2 = param_3 + -1;
      if (*pcVar5 == '\0') {
        param_2[param_3 + -2] = '\0';
        return param_2;
      }
    }
  }
  param_2[param_3 + -1] = '\0';
  return param_2;
}

