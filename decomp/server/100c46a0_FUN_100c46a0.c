
void __thiscall FUN_100c46a0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xcc))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x88))(this);
    if (iVar1 != 0) {
      (**(code **)(*(int *)this + 0x14c))(param_1);
      FUN_100b0fe0((byte *)s_You_just_picked_up_the__s__1011c738);
    }
    FUN_10098e40(this,param_1,3,0);
  }
  return;
}

