
undefined4 __thiscall FUN_10032680(void *this,int param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  
  if (((-1 < param_1) && (param_1 < 10)) &&
     (in_EAX = 0, *(int *)((int)this + param_1 * 4 + 0x134) != 0)) {
    if (param_1 == 0) {
      if (*(int *)(DAT_100a5178 + 0x898 + DAT_100b6730 * 4) == -1) {
        uVar1 = (**(code **)(**(int **)((int)this + 0x134) + 600))();
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      param_1 = 10;
    }
    in_EAX = (**(code **)(**(int **)((int)this + param_1 * 4 + 0x134) + 0x260))();
    if (in_EAX == 0) {
      uVar1 = (**(code **)(**(int **)((int)this + param_1 * 4 + 0x134) + 600))();
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

