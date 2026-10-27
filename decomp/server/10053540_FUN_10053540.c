
int __thiscall FUN_10053540(void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xcc))();
  if (((iVar1 != 0) && ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 0x40) != 0)) &&
     ((*(byte *)((int)param_1 + 0x2a0) & 1) == 0)) {
    return 0;
  }
  iVar1 = FUN_1005fbb0(param_1,param_2);
  return iVar1;
}

