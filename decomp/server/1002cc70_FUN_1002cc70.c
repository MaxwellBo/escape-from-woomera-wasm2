
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002cc70(void *this,float param_1)

{
  int iVar1;
  float10 fVar2;
  
  *(float *)(*(int *)((int)this + 4) + 0x130) =
       param_1 + *(float *)(*(int *)((int)this + 4) + 0x130);
  iVar1 = *(int *)((int)this + 4);
  if (*(float *)((int)this + 0xbc) < *(float *)(iVar1 + 0x130)) {
    if ((*(byte *)(iVar1 + 0x1a0) & 2) != 0) {
      FUN_1002cce0((int)this);
      return;
    }
    if (_DAT_100dd5f8 < *(float *)((int)this + 0xbc)) {
      fVar2 = (float10)FUN_100c8a0a(this);
      *(float *)(iVar1 + 0x130) = (float)fVar2;
    }
  }
  return;
}

