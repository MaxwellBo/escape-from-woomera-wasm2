
void __thiscall FUN_100399a0(void *this,int param_1)

{
  *(int *)((int)this + 0xbc) = param_1;
  (**(code **)(*(int *)this + 8))(0x3f800000);
  return;
}

