
bool __fastcall FUN_1008cba0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x150))();
  if (0 < *(int *)(param_1[0x37] + 0x534 + iVar1 * 4)) {
    return true;
  }
  return param_1[0x2b] != 0;
}

