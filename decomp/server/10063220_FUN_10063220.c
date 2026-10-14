
void FUN_10063220(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 100;
  if (DAT_10122064 != (int *)0x0) {
    (*DAT_10121efc)(1,s_CheckDesiredList__doingDesired_i_1011184c);
  }
  DAT_10122064 = (int *)0x1;
  if (DAT_10122060 == 0) {
    (*DAT_10121efc)(1,s_CheckDesiredList_has_no_AssistLi_10111824);
    return;
  }
  piVar2 = *(int **)(DAT_10122060 + 0x38);
  if (*(int **)(DAT_10122060 + 0x38) != (int *)0x0) {
    while( true ) {
      piVar1 = (int *)piVar2[0xe];
      FUN_10062cb0(piVar2);
      iVar3 = iVar3 + -1;
      if (iVar3 < 1) break;
      piVar2 = piVar1;
      if (piVar1 == (int *)0x0) {
        DAT_10122064 = piVar1;
        return;
      }
    }
    (*DAT_10121efc)(4,s_Infinite____loop_in_DesiredList__10111800);
  }
  DAT_10122064 = (int *)0x0;
  return;
}

