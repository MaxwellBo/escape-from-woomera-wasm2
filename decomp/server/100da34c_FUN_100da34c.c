
int * __thiscall FUN_100da34c(void *this,undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint unaff_retaddr;
  
  iVar2 = FUN_100db775(this,1);
  if (iVar2 != 0) {
    uVar3 = (**(code **)(**(int **)(*(int *)(*(int *)this + 4) + 4 + (int)this) + 0x18))
                      (param_1,param_2);
    *(uint *)((int)this + 8) = uVar3;
    if (uVar3 < unaff_retaddr) {
      puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
      *puVar1 = *puVar1 | 3;
    }
    FUN_100da2d0(this);
  }
  return this;
}

