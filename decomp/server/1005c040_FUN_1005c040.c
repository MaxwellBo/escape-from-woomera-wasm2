
void __thiscall FUN_1005c040(void *param_1,int *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_1005ae40(param_1,(int)param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_10098bd0(param_1,param_2,2,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x164));
    if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 1) != 0) {
      FUN_100b0ef0((int)param_1);
    }
  }
  return;
}

