
void __thiscall FUN_10037370(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)((int)this + 0x2684c);
  if (param_2 == iVar1) {
    iVar2 = param_1;
    if (param_1 != 0) goto LAB_10037395;
  }
  else if (param_1 != 0) {
    return;
  }
  iVar2 = iVar1;
LAB_10037395:
  *(int *)((int)this + 0x26ae8) = iVar2;
  lVar3 = __ftol();
  *(int *)((int)this + 0x26aec) = (int)lVar3;
  if (param_1 == iVar1) {
    *(int *)((int)this + 0x26ae8) = iVar1;
  }
  return;
}

