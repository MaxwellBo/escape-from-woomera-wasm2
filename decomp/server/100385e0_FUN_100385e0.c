
undefined4 __thiscall FUN_100385e0(void *param_1,int param_2,int param_3,float param_4,uint param_5)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 0x80) != 0) {
    uVar1 = FUN_10037540(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 1;
}

