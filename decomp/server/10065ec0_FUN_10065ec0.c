
char * __cdecl FUN_10065ec0(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = 0;
  DAT_10122178 = 0;
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  while( true ) {
    cVar1 = *param_1;
    while (cVar1 < '!') {
      if (cVar1 == '\0') {
        DAT_10122178 = 0;
        return (char *)0x0;
      }
      pcVar3 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar1 = *pcVar3;
    }
    if (cVar1 != '/') break;
    if (param_1[1] != '/') goto LAB_10065f55;
    cVar1 = *param_1;
    while ((cVar1 != '\0' && (cVar1 != '\n'))) {
      pcVar3 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar1 = *pcVar3;
    }
  }
  if (cVar1 == '\"') {
    pcVar3 = param_1 + 1;
    while( true ) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      if ((cVar1 == '\"') || (cVar1 == '\0')) break;
      (&DAT_10122178)[iVar4] = cVar1;
      iVar4 = iVar4 + 1;
    }
    (&DAT_10122178)[iVar4] = 0;
    return pcVar3;
  }
  if ((((cVar1 == '{') || (cVar1 == '}')) || (cVar1 == ')')) ||
     (((cVar1 == '(' || (cVar1 == '\'')) || (cVar1 == ',')))) {
    DAT_10122179 = 0;
    DAT_10122178 = cVar1;
    return param_1 + 1;
  }
LAB_10065f55:
  pcVar3 = param_1 + 1;
  iVar4 = 1;
  cVar2 = *pcVar3;
  DAT_10122178 = cVar1;
  while (((cVar2 != '{' && (cVar2 != '}')) &&
         ((cVar2 != ')' &&
          ((((cVar2 != '(' && (cVar2 != '\'')) && (cVar2 != ',')) && (' ' < cVar2))))))) {
    pcVar3 = pcVar3 + 1;
    (&DAT_10122178)[iVar4] = cVar2;
    iVar4 = iVar4 + 1;
    cVar2 = *pcVar3;
  }
  (&DAT_10122178)[iVar4] = 0;
  return pcVar3;
}

