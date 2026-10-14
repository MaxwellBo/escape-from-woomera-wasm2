
undefined4 __thiscall FUN_10015ed0(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((*(int *)(param_1 + 0x88) != -1) && (*(int *)(param_1 + 0x80) != -1)) &&
     (*(int *)(param_1 + 0xa0) < 1)) {
    iVar1 = FUN_10015eb0(this,*(int *)(param_1 + 0x80));
    if (iVar1 == 0) {
      iVar1 = FUN_10015eb0(this,*(int *)(param_1 + 0x84));
      if ((iVar1 == 0) && ((*(byte *)(param_1 + 0x98) & 1) == 0)) {
        return 0;
      }
    }
  }
  return 1;
}

