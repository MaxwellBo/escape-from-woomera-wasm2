
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000fa00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_10019410((uint *)(param_1 + 0x5a));
  param_1[0xa8] = param_1[0xa8] & 0xbfffffff;
  if (iVar2 != 0) {
    if (*(float *)(*(int *)(iVar2 + 4) + 0x160) != _DAT_100dd5f8) {
      *(float *)(param_1[1] + 0x160) = _DAT_10126a64 * *(float *)(*(int *)(iVar2 + 4) + 0x160);
      *(undefined4 *)(param_1[1] + 0x1b0) = *(undefined4 *)(param_1[1] + 0x160);
    }
    if (((param_1[0xa8] & 0x10000000U) == 0) &&
       (iVar1 = *(int *)(*(int *)(iVar2 + 4) + 0x1d4), iVar1 != 0)) {
      FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + iVar1),param_1,param_1,3,0);
    }
    param_1[0xa8] = param_1[0xa8] & 0xefffffff;
    *(undefined4 *)(param_1[1] + 0x1d0) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x1c8);
    if (*(float *)(*(int *)(iVar2 + 4) + 0x160) == _DAT_100dd5f8) {
      param_1[0xa8] = param_1[0xa8] | 0x40000000;
    }
  }
  return;
}

