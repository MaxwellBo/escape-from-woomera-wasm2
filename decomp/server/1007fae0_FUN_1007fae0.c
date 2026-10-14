
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007fae0(int param_1)

{
  void *this;
  uint uVar1;
  
  uVar1 = FUN_1007fa20(param_1);
  if (uVar1 != 0) {
    this = *(void **)(*(int *)(param_1 + 4) + 0x208);
    FUN_10094b20(this,this,1,s_items_flashlight1_wav_10105900,0x3f800000,0x3f4ccccd,0,100);
  }
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xfffffff7;
  (*DAT_10121ec0)(1,DAT_1012486c,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(*(undefined4 *)(param_1 + 0x328));
  (*DAT_10121ec4)();
  *(float *)(param_1 + 0x324) = *DAT_10122044 + (float)_DAT_100dd608;
  return;
}

