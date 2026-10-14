
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1009cd20(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = (**(code **)(*(int *)this + 200))(param_1,param_2);
    if (((iVar1 == 1) && (_DAT_10109674 == _DAT_100dd5f8)) && (param_2 != param_1)) {
      return 0;
    }
  }
  uVar2 = FUN_100651c0();
  return uVar2;
}

