
bool __fastcall FUN_1003e4a0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_100b6620 != 9) {
    return true;
  }
  uVar1 = *(uint *)(param_1 + 300);
  if ((uVar1 & 2) == 0) {
    uVar2 = *(uint *)(DAT_100a5178 + 0x8b8);
    if ((uVar2 & 1) != 0) {
      return true;
    }
  }
  else {
    uVar2 = *(uint *)(DAT_100a5178 + 0x8b8);
    if ((uVar2 & 1) == 0) {
      return true;
    }
  }
  if ((uVar1 & 4) != 0) {
    return (uVar2 & 0x1e) == 0;
  }
  if ((uVar1 & 1) != 0) {
    if ((*(int *)(param_1 + 0x130) == 0) && ((uVar2 & 2) == 0)) {
      return true;
    }
    if ((*(int *)(param_1 + 0x130) == 1) && ((uVar2 & 4) == 0)) {
      return true;
    }
  }
  if (((uVar1 & 8) != 0) &&
     (((*(int *)(param_1 + 0x130) != 0 || ((uVar2 & 8) == 0)) &&
      ((*(int *)(param_1 + 0x130) != 1 || ((uVar2 & 0x10) == 0)))))) {
    return true;
  }
  return false;
}

