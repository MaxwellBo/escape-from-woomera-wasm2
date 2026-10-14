
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1007a1f0(void *this,undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (_DAT_100dd5f8 < *(float *)(iVar1 + 0x160)) {
    *(float *)(iVar1 + 0x160) = *(float *)(iVar1 + 0x160) - param_3;
    if (*(float *)(*(int *)((int)this + 4) + 0x160) <= _DAT_100dd5f8) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x160) = 0;
      (**(code **)(*(int *)this + 0x164))();
      iVar1 = *(int *)(*(int *)((int)this + 4) + 0x1d4);
      if (iVar1 != 0) {
        FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + iVar1),this,this,3,0);
      }
    }
  }
  return 0;
}

