
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10073f70(void *this,float *param_1)

{
  if ((*(int *)((int)this + 0x10) != 0) &&
     (_DAT_100dd5f8 <=
      (*param_1 * *(float *)this +
      param_1[1] * *(float *)((int)this + 4) + param_1[2] * *(float *)((int)this + 8)) -
      *(float *)((int)this + 0xc))) {
    return 1;
  }
  return 0;
}

