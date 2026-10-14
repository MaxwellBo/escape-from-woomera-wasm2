
void FUN_1001d700(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x288);
  if ((iVar1 == 0) && (iVar1 = (*DAT_10121f1c)(0), iVar1 == 0)) {
    return;
  }
  if ((*(int *)(iVar1 + 0x7c) != 0) && (*(int *)(*(int *)(*(int *)(iVar1 + 0x7c) + 4) + 0x240) != 0)
     ) {
    FUN_100ae6d0();
    return;
  }
  return;
}

