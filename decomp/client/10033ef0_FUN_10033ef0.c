
undefined4 __thiscall FUN_10033ef0(void *this,int param_1)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    in_EAX = *(uint *)(param_1 + 0xc0);
    if (in_EAX == *(uint *)((int)this + 0xc0)) {
      iVar1 = 0;
      if (0 < (int)*(uint *)((int)this + 0xc0)) {
        do {
          *(undefined4 *)(*(int *)((int)this + 0xd0) + iVar1 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xd0) + iVar1 * 4);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)((int)this + 0xc0));
      }
      uVar2 = FUN_100341a0(this,0);
      *(undefined1 *)((int)this + 0xbc) = 1;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

