
int __cdecl FUN_100087f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    piVar4 = (int *)(param_1 + 0xa4);
    iVar2 = *(int *)(param_1 + 0xa8) + param_1;
    iVar3 = 0;
    iVar5 = 0;
    param_1 = -1;
    if (0 < *piVar4) {
      piVar4 = (int *)(iVar2 + 0x2c);
      do {
        if ((piVar4[-1] == param_3) &&
           ((iVar3 = iVar3 + *piVar4, iVar3 == 0 ||
            (iVar2 = (*DAT_10121f70)(0,iVar3 + -1), iVar2 < *piVar4)))) {
          param_1 = iVar5;
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 0x2c;
      } while (iVar5 < *(int *)(iVar1 + 0xa4));
    }
    return param_1;
  }
  return 0;
}

