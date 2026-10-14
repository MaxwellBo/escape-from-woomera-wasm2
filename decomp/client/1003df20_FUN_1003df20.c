
uint __thiscall FUN_1003df20(void *this,undefined4 param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)((int)this + 0xaa0) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0xaa0) + 0x208))(param_1);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

