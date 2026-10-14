
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100110d0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  iVar1 = FUN_1001a140(param_3,(int)lVar2);
  if (iVar1 != 0) {
    *(float *)(*(int *)((int)this + 4) + 0x130) =
         _DAT_100dd618 - *(float *)(*(int *)((int)this + 4) + 0x130);
    iVar1 = *(int *)((int)this + 0xb8);
    if (0x1f < iVar1) {
      if (*(float *)(*(int *)((int)this + 4) + 0x130) != _DAT_100dd5f8) {
        (*DAT_10121eb4)(iVar1,&DAT_10103c14);
        return;
      }
      (*DAT_10121eb4)(iVar1,&DAT_10103c18);
      return;
    }
    if (iVar1 < -0x1f) {
      if (*(float *)(*(int *)((int)this + 4) + 0x130) != _DAT_100dd5f8) {
        (*DAT_10121eb4)(-iVar1,&DAT_10103c18);
        return;
      }
      (*DAT_10121eb4)(-iVar1,&DAT_10103c14);
    }
  }
  return;
}

