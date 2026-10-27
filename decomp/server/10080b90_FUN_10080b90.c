
undefined4 __thiscall FUN_10080b90(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x528) == param_2) {
    FUN_10081e70(param_1);
    (**(code **)(*param_2 + 0x134))(0);
    FUN_10019680((int)param_2);
    param_2[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x528) = 0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xbc) = 0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc0) = 0;
  }
  else if (*(int **)(param_1 + 0x530) == param_2) {
    *(undefined4 *)(param_1 + 0x530) = 0;
  }
  iVar3 = (**(code **)(*param_2 + 0x160))();
  piVar1 = *(int **)(param_1 + 0x510 + iVar3 * 4);
  if (piVar1 == param_2) {
    iVar3 = (**(code **)(*param_2 + 0x160))();
    *(int *)(param_1 + 0x510 + iVar3 * 4) = param_2[0x38];
    return 1;
  }
  do {
    piVar2 = piVar1;
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar2[0x38];
  } while ((int *)piVar2[0x38] != param_2);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  piVar2[0x38] = param_2[0x38];
  return 1;
}

