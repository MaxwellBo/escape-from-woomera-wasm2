
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100679c0(void *param_1)

{
  undefined4 uVar1;
  
  if (1 < *(int *)((int)param_1 + 0x374)) {
    uVar1 = FUN_10008160(param_1,(byte *)s_float_open_101124a0);
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x128) = uVar1;
    return;
  }
  if (_DAT_100de4f8 < *(float *)((int)param_1 + 800)) {
    uVar1 = FUN_10008160(param_1,(byte *)s_walk_r_10112498);
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x128) = uVar1;
    return;
  }
  if (*(float *)((int)param_1 + 800) < _DAT_100de504) {
    uVar1 = FUN_10008160(param_1,(byte *)s_walk_l_10112490);
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x128) = uVar1;
    return;
  }
  if (_DAT_100de4f8 < *(float *)((int)param_1 + 0x318)) {
    uVar1 = FUN_10008160(param_1,(byte *)s_walk_u_10112488);
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x128) = uVar1;
    return;
  }
  if (*(float *)((int)param_1 + 0x318) < _DAT_100de504) {
    uVar1 = FUN_10008160(param_1,(byte *)s_walk_d_10112480);
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x128) = uVar1;
    return;
  }
  uVar1 = FUN_10008160(param_1,(byte *)s_float_10112478);
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x128) = uVar1;
  return;
}

