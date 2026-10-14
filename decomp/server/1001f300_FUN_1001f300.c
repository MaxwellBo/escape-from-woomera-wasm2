
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1001f300(void *this,float param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(float *)(*(int *)((int)this + 4) + 0x16c) == _DAT_100dd5f8) {
    return 0;
  }
  *(uint *)((int)this + 0x2c0) = *(uint *)((int)this + 0x2c0) & ~(param_2 & 0x3fff);
  uVar1 = FUN_10019810(this,param_1);
  return uVar1;
}

