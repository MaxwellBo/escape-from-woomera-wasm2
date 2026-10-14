
uint __thiscall FUN_100da19d(void *this,uint param_1)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0x34) < 0) {
    FUN_100db550((LPCRITICAL_SECTION)((int)this + 0x38));
  }
  uVar1 = *(uint *)((int)this + 0x24);
  *(uint *)((int)this + 0x24) = uVar1 | param_1;
  if (*(int *)((int)this + 0x34) < 0) {
    FUN_100db55b((LPCRITICAL_SECTION)((int)this + 0x38));
  }
  return uVar1;
}

