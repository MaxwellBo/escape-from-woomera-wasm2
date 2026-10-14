
void __thiscall FUN_100577a0(void *this,int param_1)

{
  if (0x1f < *(int *)((int)this + 0x60)) {
    *(int *)((int)this + 0xd8) = param_1;
    (*DAT_10121eb4)(*(int *)((int)this + 0x60),*(int *)(DAT_10122044 + 0x98) + param_1);
  }
  return;
}

