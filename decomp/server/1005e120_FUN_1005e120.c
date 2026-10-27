
void __thiscall FUN_1005e120(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10008100(this,param_1);
  if (-1 < iVar1) {
    if (((*(int *)(*(int *)((int)this + 4) + 0x128) != iVar1) || (*(int *)((int)this + 0xd8) == 0))
       && (((*(int *)((int)this + 0x1cc) != 3 && (*(int *)((int)this + 0x1cc) != 4)) ||
           ((param_1 != 3 && (param_1 != 4)))))) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0;
    }
    *(int *)(*(int *)((int)this + 4) + 0x128) = iVar1;
    FUN_10008190((int)this);
    (**(code **)(*(int *)this + 0x1b8))();
    *(int *)((int)this + 0x1cc) = param_1;
    *(int *)((int)this + 0x1d0) = param_1;
    return;
  }
  (*DAT_10121efc)(1,s__s_has_no_sequence_for_act__d_10103954,
                  *(int *)(DAT_10122044 + 0x98) + **(int **)((int)this + 4),param_1);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x128) = 0;
  *(int *)((int)this + 0x1cc) = param_1;
  *(int *)((int)this + 0x1d0) = param_1;
  return;
}

