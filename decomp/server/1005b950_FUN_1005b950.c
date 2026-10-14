
void __thiscall FUN_1005b950(void *param_1,int *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  
  bVar1 = FUN_1005ae40(param_1,(int)param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 2) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xbf800000;
    }
    FUN_10098bd0(param_1,param_2,2,uVar2);
    if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 1) != 0) {
      FUN_100b0ef0((int)param_1);
    }
  }
  return;
}

