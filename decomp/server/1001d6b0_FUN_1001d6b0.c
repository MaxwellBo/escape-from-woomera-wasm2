
void FUN_1001d6b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x288);
  if ((iVar2 == 0) && (iVar2 = (*DAT_10121f1c)(0), iVar2 == 0)) {
    return;
  }
  iVar2 = *(int *)(iVar2 + 0x7c);
  if (iVar2 != 0) {
    iVar1 = *(int *)(*(int *)(iVar2 + 4) + 0x240);
    if (iVar1 != 0) {
      FUN_100ae6b0(iVar1,0);
    }
    *(undefined4 *)(iVar2 + 0x308) = param_3;
  }
  return;
}

