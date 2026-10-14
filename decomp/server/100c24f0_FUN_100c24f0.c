
void __thiscall FUN_100c24f0(void *this,int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 4) = 0;
  *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1 == *(int *)((int)this + 0x2c)) {
    FUN_100c23f0((int)this);
  }
  return;
}

