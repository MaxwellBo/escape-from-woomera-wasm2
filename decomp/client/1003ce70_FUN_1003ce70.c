
void __thiscall FUN_1003ce70(void *this,int param_1)

{
  int iVar1;
  
  *(int *)((int)this + 0xaa0) = param_1;
  if (param_1 != 0) {
    iVar1 = (**(code **)(DAT_100a5144 + 4))();
    if (iVar1 == 0) {
      (**(code **)(**(int **)((int)this + 0xaa0) + 0x200))();
    }
  }
  return;
}

