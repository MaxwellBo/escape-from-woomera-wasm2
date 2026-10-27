
void __thiscall FUN_100b3cd0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x11c) != 0) {
    (**(code **)(*(int *)this + 0x168))();
    return;
  }
  (**(code **)(*(int *)this + 0x16c))(param_1);
  return;
}

