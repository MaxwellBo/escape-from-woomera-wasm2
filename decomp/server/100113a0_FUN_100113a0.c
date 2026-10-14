
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100113a0(void *this,float param_1)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  if (_DAT_100dd5f8 <= param_1) {
    *(undefined4 *)(*(int *)((int)this + 4) + 0x150) = 0;
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 4) + 0x150) = 0x3f800000;
  }
  *(float *)(*(int *)((int)this + 4) + 0x154) = (float)((int)(uint)lVar1 >> 8);
  *(float *)(*(int *)((int)this + 4) + 0x158) = (float)((uint)lVar1 & 0xff);
  return;
}

