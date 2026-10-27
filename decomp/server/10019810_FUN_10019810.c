
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10019810(void *this,float param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(float *)(iVar1 + 0x16c) == _DAT_100dd5f8) {
    return 0;
  }
  if (*(float *)(iVar1 + 0x1b0) <= *(float *)(iVar1 + 0x160)) {
    return 0;
  }
  *(float *)(iVar1 + 0x160) = param_1 + *(float *)(iVar1 + 0x160);
  iVar1 = *(int *)((int)this + 4);
  if (*(float *)(iVar1 + 0x1b0) < *(float *)(iVar1 + 0x160)) {
    *(undefined4 *)(iVar1 + 0x160) = *(undefined4 *)(iVar1 + 0x1b0);
  }
  return 1;
}

