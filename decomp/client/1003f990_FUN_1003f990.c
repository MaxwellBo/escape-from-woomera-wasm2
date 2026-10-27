
undefined4 __thiscall FUN_1003f990(void *this,int param_1)

{
  int *piVar1;
  uint in_EAX;
  undefined4 uVar2;
  
  if (param_1 == 5) {
    uVar2 = (**(code **)(**(int **)((int)this + 0x110) + 600))();
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  if (param_1 == 6) {
    uVar2 = (**(code **)(**(int **)((int)this + 0x11c) + 600))();
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  if (((0 < param_1) && (in_EAX = DAT_100a5178, param_1 <= *(int *)(DAT_100a5178 + 0x8b4))) &&
     (piVar1 = *(int **)((int)this + param_1 * 4 + 0xfc), piVar1 != (int *)0x0)) {
    in_EAX = (**(code **)(*piVar1 + 0x28))();
    if ((char)in_EAX != '\0') {
      uVar2 = (**(code **)(**(int **)((int)this + param_1 * 4 + 0xfc) + 600))();
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

