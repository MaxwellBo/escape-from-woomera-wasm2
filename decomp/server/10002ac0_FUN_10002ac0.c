
void __thiscall FUN_10002ac0(void *this,int param_1)

{
  *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)((int)this + 0x30c);
  *(int *)((int)this + 0x30c) = param_1;
  *(void **)(param_1 + 0x308) = this;
  return;
}

