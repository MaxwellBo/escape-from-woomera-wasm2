
undefined4 __thiscall
FUN_10033e80(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  uint in_EAX;
  
  if ((((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc0))) &&
      (in_EAX = param_2, -1 < param_2)) && (param_2 < *(int *)((int)this + 0xc4))) {
    *param_3 = *(undefined4 *)(*(int *)((int)this + 0xd8) + param_1 * 4);
    *param_5 = *(undefined4 *)(*(int *)((int)this + 0xd0) + param_1 * 4);
    *param_4 = *(undefined4 *)(*(int *)((int)this + 0xdc) + param_2 * 4);
    *param_6 = *(undefined4 *)(*(int *)((int)this + 0xd4) + param_2 * 4);
    return CONCAT31((int3)((uint)param_6 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}

