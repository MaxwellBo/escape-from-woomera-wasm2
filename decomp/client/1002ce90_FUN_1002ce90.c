
undefined4 __cdecl FUN_1002ce90(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1 - (int)param_2;
  do {
    if (*(float *)(iVar2 + (int)param_2) != *param_2) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 < 3);
  return 1;
}

