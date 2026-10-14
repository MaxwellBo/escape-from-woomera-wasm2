
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1009b910(void *this,float param_1)

{
  if (param_1 <= _DAT_100dd5f8) {
    *(float *)((int)this + 0x378) = *DAT_10122044 + _DAT_100ddad4;
    return;
  }
  *(float *)((int)this + 0x378) = param_1 + *DAT_10122044;
  return;
}

