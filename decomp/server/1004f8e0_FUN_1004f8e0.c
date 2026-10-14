
void __thiscall FUN_1004f8e0(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 != *(int *)((int)this + 0x1cc)) {
    if (((*(int *)((int)this + 0x1d8) == 2) && (param_1 == 1)) &&
       (iVar1 = (*DAT_10121f70)(0,1), iVar1 != 0)) {
      iVar1 = FUN_10008160(this,(byte *)s_madidle_1010f208);
      *(undefined4 *)((int)this + 0x1cc) = 1;
      *(undefined4 *)((int)this + 0x1d0) = 1;
      if (iVar1 < 0) {
        return;
      }
      *(int *)(*(int *)((int)this + 4) + 0x128) = iVar1;
      *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0;
      FUN_10008190((int)this);
      (**(code **)(*(int *)this + 0x1b8))();
      return;
    }
    FUN_1005e120(this,param_1);
  }
  return;
}

