
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10045ff0(int *param_1,float param_2)

{
  float unaff_retaddr;
  float afStack_c [3];
  
  (**(code **)(*param_1 + 0x14))();
  if ((ABS(unaff_retaddr - (float)afStack_c) <= _DAT_10059cf8) &&
     (ABS(param_2 - afStack_c[0]) <= _DAT_10059cf8)) {
    return 1;
  }
  return 0;
}

