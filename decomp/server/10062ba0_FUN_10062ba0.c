
void __cdecl FUN_10062ba0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    if (DAT_10122060 == 0) {
      (*DAT_10121efc)(1,s_AddToAssistList__s___s__has_no_A_10111764,
                      **(int **)(param_1 + 4) + *(int *)(DAT_10122044 + 0x98),
                      (*(int **)(param_1 + 4))[0x73] + *(int *)(DAT_10122044 + 0x98));
      return;
    }
    iVar3 = *(int *)(DAT_10122060 + 0x38);
    iVar2 = DAT_10122060;
    while (iVar1 = iVar3, iVar1 != 0) {
      iVar2 = iVar1;
      iVar3 = *(int *)(iVar1 + 0x38);
    }
    if (iVar2 != param_1) {
      *(int *)(iVar2 + 0x38) = param_1;
    }
  }
  return;
}

