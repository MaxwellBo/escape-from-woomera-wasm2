
int * __thiscall FUN_100db942(void *this,char param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 8) == 0) {
    iVar1 = *(int *)((int)this + *(int *)(*(int *)this + 4) + 4);
    if (*(int *)(iVar1 + 0x30) < 0) {
      FUN_100db550((LPCRITICAL_SECTION)(iVar1 + 0x34));
    }
    iVar1 = FUN_100db9af(*(void **)(*(int *)(*(int *)this + 4) + 4 + (int)this),param_1);
    if (iVar1 == -1) {
      FUN_100db07b((void *)(*(int *)(*(int *)this + 4) + (int)this),
                   *(uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this) | 2);
    }
    iVar1 = *(int *)(*(int *)(*(int *)this + 4) + 4 + (int)this);
    if (*(int *)(iVar1 + 0x30) < 0) {
      FUN_100db55b((LPCRITICAL_SECTION)(iVar1 + 0x34));
    }
  }
  return this;
}

