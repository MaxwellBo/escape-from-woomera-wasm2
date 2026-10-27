
void __thiscall FUN_100391f0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  iVar2 = *(int *)((int)this + 8) + (int)param_1;
  iVar1 = *(int *)((int)this + 0x10) + iVar2;
  if (DAT_100a4dd0 < iVar1) {
    iVar1 = iVar1 - DAT_100a4dd0;
    if (0 < iVar1) {
      do {
        lVar4 = __ftol();
        iVar3 = (int)lVar4;
      } while (iVar3 < iVar1);
    }
    iVar2 = iVar2 - iVar3;
    if (iVar2 < 0) {
      iVar3 = iVar3 + iVar2;
      iVar2 = 0;
    }
  }
  iVar1 = 0;
  if (0 < *(int *)((int)this + 600)) {
    param_1 = (undefined4 *)((int)this + 200);
    do {
      FUN_10033240((void *)*param_1,iVar3);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
    } while (iVar1 < *(int *)((int)this + 600));
  }
  (*(code *)**(undefined4 **)this)(*(undefined4 *)((int)this + 4),iVar2);
  return;
}

