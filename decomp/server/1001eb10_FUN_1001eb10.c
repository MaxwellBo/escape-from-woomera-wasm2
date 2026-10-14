
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1001eb10(void *this,int param_1)

{
  if (param_1 == 0) {
    if (*(float *)(*(int *)((int)this + 4) + 0x160) < _DAT_100de504) {
      return 1;
    }
  }
  else if (param_1 == 2) {
    return 1;
  }
  return 0;
}

