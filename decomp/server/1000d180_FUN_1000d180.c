
void __thiscall FUN_1000d180(void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 2) {
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x114) = 1;
    *(undefined4 *)((int)param_1 + 900) = 1;
    return;
  }
  if (iVar1 != 3) {
    if (iVar1 != 4) {
      FUN_1009a890(param_1,param_2);
      return;
    }
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x114) = 0;
    *(undefined4 *)((int)param_1 + 900) = 0;
    return;
  }
  FUN_1000cf90(param_1);
  return;
}

