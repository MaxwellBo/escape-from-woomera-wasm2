
void __thiscall FUN_100c23a0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x2c) != param_1) {
    if (*(int *)((int)this + 0x2c) != 0) {
      **(undefined1 **)((int)this + 0x38) = *(undefined1 *)((int)this + 0x30);
      *(undefined4 *)(*(int *)((int)this + 0x2c) + 8) = *(undefined4 *)((int)this + 0x38);
      *(undefined4 *)(*(int *)((int)this + 0x2c) + 0x10) = *(undefined4 *)((int)this + 0x34);
    }
    *(int *)((int)this + 0x2c) = param_1;
    FUN_100c23f0((int)this);
    *(undefined4 *)((int)this + 0x44) = 1;
  }
  return;
}

