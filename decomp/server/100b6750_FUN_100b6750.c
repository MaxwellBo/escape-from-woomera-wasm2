
void __thiscall FUN_100b6750(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10008100(this,param_1);
  if (iVar1 != -1) {
    *(int *)(*(int *)((int)this + 4) + 0x128) = iVar1;
    *(int *)((int)this + 0xdc) = param_1;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0;
    FUN_10008190((int)this);
  }
  return;
}

