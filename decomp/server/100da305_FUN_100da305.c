
int * __thiscall FUN_100da305(void *this,undefined1 *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_100db775(this,1);
  if (iVar2 != 0) {
    uVar3 = FUN_100dbbf4(*(int **)(*(int *)(*(int *)this + 4) + 4 + (int)this));
    if (uVar3 == 0xffffffff) {
      puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
      *puVar1 = *puVar1 | 3;
    }
    else {
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
    *param_1 = (char)uVar3;
    FUN_100da2d0(this);
  }
  return this;
}

