
undefined4 __thiscall FUN_1009cdf0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((param_3 == 0) && (param_3 = (*DAT_10121f1c)(0), param_3 == 0)) {
    return 1;
  }
  piVar1 = *(int **)(param_3 + 0x7c);
  if (((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xcc))(), iVar2 != 0)) &&
     (iVar2 = (**(code **)(*param_1 + 200))(param_2,piVar1), iVar2 == 1)) {
    return 0;
  }
  return 1;
}

