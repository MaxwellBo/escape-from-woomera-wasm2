
int __thiscall FUN_1006eac0(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1[0xc9] == 100) {
    param_1[0xc9] = 0;
  }
  *param_1 = *param_1 + -1;
  *param_2 = param_1[param_1[0xc9] * 2 + 2];
  iVar1 = param_1[param_1[0xc9] * 2 + 1];
  param_1[0xc9] = param_1[0xc9] + 1;
  return iVar1;
}

