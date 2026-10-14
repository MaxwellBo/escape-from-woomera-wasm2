
undefined4 __thiscall FUN_10055750(void *this,int param_1)

{
  if ((*(int *)(param_1 + 0x4ec) == 0) &&
     ((*(uint *)(*(int *)(param_1 + 4) + 0x168) & 0x80000000) != 0)) {
    *(undefined4 *)(param_1 + 0x4ec) = 1;
    (*DAT_10121fe8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),&DAT_1010fb38,&DAT_1010c45c);
    (*DAT_10121ec0)(1,DAT_101248d0,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
    (*DAT_10121ee0)(**(int **)((int)this + 4) + *(int *)(DAT_10122044 + 0x98));
    (*DAT_10121ec4)();
    FUN_10094bb0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s__HEV_A1_1010fb30);
    return 1;
  }
  return 0;
}

