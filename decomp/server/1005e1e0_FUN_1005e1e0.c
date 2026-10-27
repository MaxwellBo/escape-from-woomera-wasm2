
void __thiscall FUN_1005e1e0(void *this,byte *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10008160(this,param_1);
  if (-1 < iVar1) {
    if ((*(int *)(*(int *)((int)this + 4) + 0x128) != iVar1) || (*(int *)((int)this + 0xd8) == 0)) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0;
    }
    *(int *)(*(int *)((int)this + 4) + 0x128) = iVar1;
    FUN_10008190((int)this);
    (**(code **)(*(int *)this + 0x1b8))();
    return;
  }
  (*DAT_10121efc)(2,s__s_has_no_sequence_named__f_10111240,
                  *(int *)(DAT_10122044 + 0x98) + **(int **)((int)this + 4),param_1);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x128) = 0;
  return;
}

