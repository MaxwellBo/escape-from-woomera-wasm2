
void FUN_100631c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_10122060;
  if (DAT_10122060 == 0) {
    (*DAT_10121efc)(4,s_CheckAssistList_has_no_AssistLis_101117dc);
    return;
  }
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x38)) {
  }
  piVar1 = *(int **)(DAT_10122060 + 0x38);
  iVar2 = DAT_10122060;
  while (piVar1 != (int *)0x0) {
    FUN_10062ed0(piVar1);
    iVar3 = *(int *)(iVar2 + 0x38);
    if ((*(byte *)(iVar3 + 0x5c) & 0xa0) == 0) {
      *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar3 + 0x38);
      *(undefined4 *)(iVar3 + 0x38) = 0;
      iVar3 = iVar2;
    }
    iVar2 = iVar3;
    piVar1 = *(int **)(iVar3 + 0x38);
  }
  return;
}

