
uint __fastcall FUN_100b2330(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    pcVar3 = *(char **)(iVar2 + 4);
    cVar1 = *pcVar3;
    for (iVar4 = 0;
        (cVar1 != '\0' && (pcVar3 = pcVar3 + 1, iVar4 < *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8))
        ); iVar4 = iVar4 + 1) {
      cVar1 = *pcVar3;
    }
    FUN_100b2320(param_1,iVar4 + 1U);
    return iVar4 + 1U;
  }
  return 0;
}

