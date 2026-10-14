
void __cdecl FUN_100b2ce0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_100b0f30(*(int **)(param_1 + 0x30));
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar1 + 0x80;
    }
    if (*(int *)(iVar2 + 0x10c) != 4) {
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar1 + 0x80;
      }
      if (*(int *)(iVar2 + 0x108) != 0xd) {
        return;
      }
    }
    piVar3 = (int *)0x0;
    if ((iVar1 != 0) && (iVar1 = (*DAT_10121f20)(iVar1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x30);
      if ((iVar1 == 0) && (iVar1 = (*DAT_10121f1c)(0), iVar1 == 0)) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = *(int **)(iVar1 + 0x7c);
      }
    }
    if (param_2 != 5) {
      iVar1 = FUN_100b2cb0(piVar3,2);
      FUN_100b0610(param_1,iVar1);
      return;
    }
    iVar1 = FUN_100b2cb0(piVar3,0x80);
    FUN_100b0450(param_1,iVar1);
  }
  return;
}

