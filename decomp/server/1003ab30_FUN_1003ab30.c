
void __thiscall FUN_1003ab30(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_100b0030(*(int *)((int)this + 0x138),0);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    (**(code **)(*(int *)this + 0x118))(param_1,param_2,param_3);
  }
  return;
}

