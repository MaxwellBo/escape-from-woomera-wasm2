
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10081e70(int param_1)

{
  if ((*(float *)(param_1 + 0x634) != _DAT_100dd5f8) ||
     (*(float *)(param_1 + 0x638) != _DAT_100dd5f8)) {
    *(undefined4 *)(param_1 + 0x634) = 0;
    *(undefined4 *)(param_1 + 0x638) = 0;
    *(undefined4 *)(param_1 + 0x63c) = 0;
    (*DAT_10121f80)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),0,0);
  }
  *(undefined4 *)(param_1 + 0x640) = 0;
  return;
}

