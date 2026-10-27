
void __thiscall FUN_100db0a9(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = FUN_100dbc89(*(void **)(*(int *)(*(int *)this + 4) + 4 + (int)this),param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_100db07b((void *)(*(int *)(*(int *)this + 4) + (int)this),
                 *(uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this) | 2);
  }
  return;
}

