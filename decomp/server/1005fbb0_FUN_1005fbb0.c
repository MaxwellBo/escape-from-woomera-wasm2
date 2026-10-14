
int __thiscall FUN_1005fbb0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x4c))();
  if ((iVar1 != 2) || (iVar2 = *(int *)((int)this + 0x304), iVar2 == 0)) {
    iVar2 = (**(code **)(*(int *)this + 0x4c))();
    return *(int *)(&DAT_10110a88 + (iVar2 + iVar1 + iVar2 * 0x10) * 4);
  }
  if (iVar2 == 1) {
    return 0;
  }
  if (iVar2 == 4) {
    return 2;
  }
  return ((int)*(char *)((int)this + 0x2a0) & 1U) << 1;
}

