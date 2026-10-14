
bool __thiscall FUN_1009cf40(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[5] == 0) {
    return true;
  }
  iVar1 = (**(code **)(*param_1 + 0xcc))(param_2);
  return iVar1 != -1;
}

