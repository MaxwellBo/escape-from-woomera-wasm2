
void __thiscall FUN_100db0da(void *this,LPCSTR param_1,uint param_2,uint param_3)

{
  void *this_00;
  int *piVar1;
  
  this_00 = *(void **)(*(int *)(*(int *)this + 4) + 4 + (int)this);
  if ((*(int *)((int)this_00 + 0x4c) == -1) &&
     (piVar1 = FUN_100dbcfd(this_00,param_1,param_2 | 1,param_3), piVar1 != (int *)0x0)) {
    return;
  }
  FUN_100db07b((void *)(*(int *)(*(int *)this + 4) + (int)this),
               *(uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this) | 2);
  return;
}

