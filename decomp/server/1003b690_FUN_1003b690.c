
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1003b690(void *this,undefined4 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(float *)((int)this + 0xcc) == _DAT_100dd5f8) {
    FUN_1003ab70(this,param_1);
  }
  else {
    lVar2 = __ftol();
    iVar1 = (int)lVar2;
    if (0 < iVar1) {
      if (0 < iVar1) {
        do {
          FUN_1001a1f0(0x10109528,param_1,(undefined4 *)(*(int *)((int)this + 4) + 0x50),
                       *(undefined4 *)(*(int *)((int)this + 4) + 0x208));
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_1003ab70(this,param_1);
      return;
    }
  }
  return;
}

