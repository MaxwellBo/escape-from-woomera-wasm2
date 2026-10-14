
int __cdecl FUN_100c2ee0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (**(code **)(*param_1 + 0xcc))();
  if (iVar2 == 0) {
    iVar2 = 0;
    if (0 < DAT_10132c70) {
      piVar3 = &DAT_10132470;
      while (((int *)piVar3[1] != param_1 || (*(int *)(*piVar3 + 0xe4) != param_2))) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 2;
        if (DAT_10132c70 <= iVar2) {
          return 0;
        }
      }
      return (&DAT_10132470)[iVar2 * 2];
    }
  }
  else {
    piVar3 = param_1 + 0x144;
    iVar2 = 0;
    do {
      for (iVar1 = *piVar3; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xe0)) {
        if (*(int *)(iVar1 + 0xe4) == param_2) {
          return iVar1;
        }
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 6);
  }
  return 0;
}

