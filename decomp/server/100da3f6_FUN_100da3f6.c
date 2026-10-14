
int * __thiscall FUN_100da3f6(void *this,undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int unaff_retaddr;
  
  iVar2 = FUN_100da4b5(this);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)this + 4) + 4 + (int)this) + 0x14))
                      (param_1,param_2);
    if (iVar2 != unaff_retaddr) {
      puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
      *puVar1 = *puVar1 | 6;
    }
    FUN_100da529(this);
  }
  return this;
}

