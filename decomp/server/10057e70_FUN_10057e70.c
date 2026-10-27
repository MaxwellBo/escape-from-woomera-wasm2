
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10057e70(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  iVar1 = FUN_1001a140(param_3,(int)lVar2);
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)this + 4);
    if (*(float *)(iVar1 + 0x160) != _DAT_100dd5f8) {
      *(undefined4 *)(iVar1 + 0x160) = 0;
      FUN_10057ee0((int)this);
      return;
    }
    *(undefined4 *)(iVar1 + 0x160) = 0x3f800000;
    FUN_10057ee0((int)this);
  }
  return;
}

