
void __thiscall FUN_1005c170(void *param_1,int *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_1005ae40(param_1,(int)param_2);
  if ((CONCAT31(extraout_var,bVar1) != 0) &&
     ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 1) == 0)) {
    FUN_1005c1a0(param_1,param_2);
  }
  return;
}

