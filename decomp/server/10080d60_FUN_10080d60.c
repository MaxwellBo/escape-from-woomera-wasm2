
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10080d60(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_10019450((uint *)(param_1 + 0x137));
  if ((CONCAT31(extraout_var,bVar1) == 0) && ((float)param_1[0xaf] <= _DAT_100dd5f8)) {
    (**(code **)(*param_1 + 0x240))();
    if ((int *)param_1[0x14a] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x14a] + 0x140))();
    }
  }
  return;
}

