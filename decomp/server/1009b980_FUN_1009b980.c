
void __thiscall FUN_1009b980(void *this,int param_1,int param_2,float param_3,uint param_4)

{
  int iVar1;
  int *this_00;
  
  iVar1 = (**(code **)(*(int *)this + 0xb8))();
  if ((((iVar1 != 0) && (param_2 != 0)) && (*(int *)((int)this + 0x1d8) != 5)) &&
     ((*(byte *)(param_2 + 0x1a4) & 8) != 0)) {
    this_00 = FUN_1009af10(this,0);
    if (this_00 != (int *)0x0) {
      iVar1 = (**(code **)(*this_00 + 0xb8))();
      if (iVar1 != 0) {
        FUN_10004e70(this_00,0x10117b68);
      }
    }
  }
  FUN_1001f350(this,param_1,param_2,param_3,param_4);
  return;
}

