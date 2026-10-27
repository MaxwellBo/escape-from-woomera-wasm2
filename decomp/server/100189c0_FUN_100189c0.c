
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100189c0(void *this,int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  iVar1 = FUN_1001a140(param_3,(int)lVar2);
  if (iVar1 != 0) {
    *(float *)(*(int *)((int)this + 4) + 0x130) =
         _DAT_100dd618 - *(float *)(*(int *)((int)this + 4) + 0x130);
    if (*(float *)(*(int *)((int)this + 4) + 0x130) != _DAT_100dd5f8) {
      FUN_10098bd0(this,param_1,1,0);
      return;
    }
    FUN_10098bd0(this,param_1,0,0);
  }
  return;
}

