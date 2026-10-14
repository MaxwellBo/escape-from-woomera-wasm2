
int FUN_100ae470(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  FUN_100ae450(param_1 + param_2 + param_3);
  if (param_3 - param_2 == 0) {
    return param_2;
  }
  uVar1 = FUN_100ae410();
  return uVar1 % ((param_3 - param_2) + 1U) + param_2;
}

