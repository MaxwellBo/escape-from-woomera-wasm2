
bool __fastcall FUN_1001e590(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x4c))();
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return param_1[0xb4] == 0xc3;
  }
  return false;
}

