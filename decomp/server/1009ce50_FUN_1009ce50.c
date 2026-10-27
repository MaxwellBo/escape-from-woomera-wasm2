
undefined4 __thiscall FUN_1009ce50(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((param_2 != 0) && (param_2 != param_3)) {
    iVar1 = (**(code **)(*param_1 + 200))(param_2,param_3);
    if (iVar1 == 1) {
      return 0xffffffff;
    }
  }
  return 1;
}

