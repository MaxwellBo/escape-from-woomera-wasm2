
void __thiscall FUN_1006ea10(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 400)) {
    iVar2 = param_1 - (int)param_2;
    do {
      iVar1 = iVar1 + 1;
      *param_2 = *(undefined4 *)(iVar2 + (int)param_2);
      param_2 = param_2 + 1;
    } while (iVar1 < *(int *)(param_1 + 400));
  }
  return;
}

