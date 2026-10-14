
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002e070(int *param_1,int *param_2)

{
  if (*(float *)(param_1[1] + 0x1b4) <= *DAT_10122044) {
    *(float *)(param_1[1] + 0x1b4) = *DAT_10122044 + (float)_DAT_100dfb80;
    if (*(int *)(param_1[1] + 0x1d0) != 0) {
      FUN_10098c10((uint *)((int)DAT_10122044[0x26] + *(int *)(param_1[1] + 0x1d0)),param_1,param_1,
                   3,0);
    }
    if (((*(int *)(param_1[1] + 0x1d4) != 0) && (param_2 != (int *)0x0)) &&
       (param_2 != DAT_10122060)) {
      FUN_10098c10((uint *)((int)DAT_10122044[0x26] + *(int *)(param_1[1] + 0x1d4)),param_2,param_1,
                   3,0);
    }
  }
  return;
}

