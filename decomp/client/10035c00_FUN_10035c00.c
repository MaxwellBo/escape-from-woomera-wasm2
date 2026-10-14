
int __thiscall FUN_10035c00(void *this,int param_1)

{
  if (param_1 < *(int *)((int)this + 8)) {
    return *(int *)((int)this + 4) + param_1 * 0x7c;
  }
  return *(int *)((int)this + 4);
}

