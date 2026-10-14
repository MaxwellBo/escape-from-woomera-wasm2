
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10039950(void *this,float param_1)

{
  if (param_1 < *(float *)((int)this + 0x100)) {
    return 0;
  }
  if ((_DAT_100dd5f8 < *(float *)((int)this + 200)) && (*(float *)((int)this + 200) < param_1)) {
    return 0;
  }
  return 1;
}

