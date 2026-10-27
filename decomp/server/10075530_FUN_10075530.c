
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10075530(int param_1,int *param_2)

{
  int iVar1;
  
  FUN_10063390(param_1);
  if (*(float *)(param_1 + 0xe0) <= *DAT_10122044) {
    *(float *)(param_1 + 0xe0) = *DAT_10122044 + (float)_DAT_100dd648;
    iVar1 = *(int *)(param_1 + 4);
    if (*(float *)(iVar1 + 0x1e0) != _DAT_100dd5f8) {
      (**(code **)(*param_2 + 0x60))(iVar1,iVar1,*(float *)(iVar1 + 0x1e0),1);
    }
  }
  return;
}

