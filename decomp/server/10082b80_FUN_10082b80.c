
void __thiscall FUN_10082b80(int param_1,int *param_2)

{
  int iVar1;
  
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0xcc))(), iVar1 == 0)) {
    iVar1 = (**(code **)(*DAT_10121db8 + 0x1c))();
    if (iVar1 != 0) {
      return;
    }
    iVar1 = (*DAT_10121f28)(1);
    if ((iVar1 == 0) && (iVar1 = (*DAT_10121f1c)(0), iVar1 == 0)) {
      param_2 = (int *)0x0;
    }
    else {
      param_2 = *(int **)(iVar1 + 0x7c);
    }
  }
  if (param_2 != (int *)0x0) {
    FUN_1007bf80(param_2,*(uint *)(*(int *)(param_1 + 4) + 0x1a0),*(int *)(param_1 + 0xb8),
                 *(int *)(param_1 + 0xbc),*(int *)(param_1 + 0xc0),*(int *)(param_1 + 0xc4),
                 *(int *)(param_1 + 200),*(int *)(param_1 + 0xcc),*(int *)(param_1 + 0xd0),
                 *(int *)(param_1 + 0xd4),*(int *)(param_1 + 0xd8),*(int *)(param_1 + 0xdc),
                 *(int *)(param_1 + 0xe0),*(int **)(param_1 + 0xe4));
  }
  return;
}

