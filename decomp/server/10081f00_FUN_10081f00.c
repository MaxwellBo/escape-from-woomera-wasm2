
void __thiscall FUN_10081f00(void *this,int param_1)

{
  if ((0 < param_1) && (param_1 < 8)) {
    *(int *)((int)this + 0x654) = param_1;
    return;
  }
  *(undefined4 *)((int)this + 0x654) = 0xffffffff;
  return;
}

