
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_1009c250(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *_Source;
  undefined4 *puVar3;
  char *pcVar4;
  char *_Dest;
  
  FUN_10064850(param_1);
  *param_1 = &PTR_FUN_100f237c;
  param_1[3] = 0;
  param_1[4] = 0;
  _Dest = (char *)(param_1 + 6);
  puVar3 = &DAT_10131068;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_10131268;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_101312f0 = 0;
  *_Dest = '\0';
  _strncpy(_Dest,PTR_s_hgrunt_scientist_10109714,0x200);
  iVar2 = (*DAT_10121f28)(0);
  if ((((iVar2 != 0) && (*(int *)(iVar2 + 0x22c) != 0)) && (_DAT_10109734 != _DAT_100dd5f8)) &&
     (_Source = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar2 + 0x22c)),
     _Source != (char *)0x0)) {
    iVar2 = -1;
    pcVar4 = _Source;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      _strncpy(_Dest,_Source,0x200);
    }
  }
  iVar2 = -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *_Dest;
    _Dest = _Dest + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    param_1[5] = 1;
    FUN_1009d020(param_1,'\0');
    return param_1;
  }
  param_1[5] = 0;
  FUN_1009d020(param_1,'\0');
  return param_1;
}

