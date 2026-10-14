
int * __thiscall FUN_100db566(void *this,int param_1)

{
  uint *puVar1;
  
  if (param_1 != 0) {
    *(undefined **)this = &DAT_100fa5f4;
    FUN_100dab6a((undefined4 *)((int)this + 0xc));
  }
  *(undefined ***)(*(int *)(*(int *)this + 4) + (int)this) = &PTR_FUN_100fa5f0;
  puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 0x24 + (int)this);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}

