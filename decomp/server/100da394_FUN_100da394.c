
int * __thiscall FUN_100da394(void *this,byte param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_100da4b5(this);
  if (iVar2 != 0) {
    uVar3 = FUN_100da3d4(*(void **)(*(int *)(*(int *)this + 4) + 4 + (int)this),(uint)param_1);
    if (uVar3 == 0xffffffff) {
      puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
      *puVar1 = *puVar1 | 6;
    }
    FUN_100da529(this);
  }
  return this;
}

