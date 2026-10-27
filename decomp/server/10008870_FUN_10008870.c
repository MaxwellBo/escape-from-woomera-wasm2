
int __cdecl FUN_10008870(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 != 0) {
    iVar3 = 0;
    iVar1 = -1;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xa4)) {
      piVar4 = (int *)(*(int *)(param_1 + 0xa8) + param_1 + 0x2c);
      do {
        if ((piVar4[-1] == param_3) && (iVar3 < *piVar4)) {
          iVar1 = iVar2;
          iVar3 = *piVar4;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 0x2c;
      } while (iVar2 < *(int *)(param_1 + 0xa4));
    }
    return iVar1;
  }
  return 0;
}

