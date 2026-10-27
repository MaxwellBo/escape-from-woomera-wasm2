
int * __thiscall FUN_100da68a(void *this,int param_1)

{
  if (param_1 != 0) {
    *(undefined **)this = &DAT_100fa568;
    FUN_100dab6a((undefined4 *)((int)this + 8));
  }
  *(undefined ***)(*(int *)(*(int *)this + 4) + (int)this) = &PTR_FUN_100fa564;
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}

