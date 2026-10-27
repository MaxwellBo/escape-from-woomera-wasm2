
undefined4 __thiscall FUN_10033d70(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc4))) {
    *(undefined4 *)(*(int *)((int)this + 0xd4) + param_1 * 4) = param_2;
    uVar1 = FUN_10034200(this,param_1 + 1);
    *(undefined1 *)((int)this + 0xbc) = 1;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return param_1 & 0xffffff00;
}

