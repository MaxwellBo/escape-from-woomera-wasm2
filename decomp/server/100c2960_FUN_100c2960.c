
undefined4 __thiscall FUN_100c2960(int *param_1,int *param_2)

{
  int iVar1;
  
  param_2[6] = *(int *)param_1[1] + *(int *)(DAT_10122044 + 0x98);
  param_2[2] = 0;
  param_2[3] = -1;
  param_2[4] = 0;
  param_2[5] = -1;
  param_2[7] = -1;
  iVar1 = (**(code **)(*param_1 + 0x160))();
  *param_2 = iVar1 + -1;
  iVar1 = (**(code **)(*param_1 + 0x1ac))();
  param_2[8] = iVar1;
  param_2[1] = iVar1 + -0xf;
  param_2[10] = 0;
  return 1;
}

