
void __thiscall FUN_100ad2f0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x128);
  if (iVar1 != param_1) {
    if (((param_1 < 1) || (2 < param_1)) || ((iVar1 != 1 && (iVar1 != 2)))) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0;
    }
    *(int *)(*(int *)((int)this + 4) + 0x128) = param_1;
    FUN_10008190((int)this);
    if (param_1 == 4) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0x437f0000;
      *(undefined4 *)(*(int *)((int)this + 4) + 0x138) = 0xbf800000;
    }
    else if (param_1 == 5) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x138) = 0x3f800000;
      return;
    }
  }
  return;
}

