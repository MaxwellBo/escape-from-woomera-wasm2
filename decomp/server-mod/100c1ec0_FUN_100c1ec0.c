
int __thiscall FUN_100c1ec0(void *this,undefined1 *param_1)

{
  int *this_00;
  uint uVar1;
  
  this_00 = *(int **)((int)this + 0x24);
  if ((*(byte *)(*(int *)(*this_00 + 4) + 8 + (int)this_00) & 7) == 0) {
    FUN_100da305(this_00,param_1);
    uVar1 = *(uint *)(*(int *)(**(int **)((int)this + 0x24) + 4) + 8 +
                     (int)*(int **)((int)this + 0x24));
    if ((uVar1 & 1) == 0) {
      return (-(uint)((uVar1 & 4) != 0) & 0xfffffffe) + 1;
    }
  }
  return 0;
}

