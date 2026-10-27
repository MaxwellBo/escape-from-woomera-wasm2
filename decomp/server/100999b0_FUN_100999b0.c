
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100999b0(int param_1,int param_2)

{
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  float fStack_28;
  
  fStack_44 = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 8);
  fStack_40 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0xc);
  fStack_3c = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x10);
  fStack_50 = *(float *)(param_2 + 8) + *(float *)(param_2 + 0x174);
  fStack_4c = *(float *)(param_2 + 0x178) + *(float *)(param_2 + 0xc);
  fStack_48 = *(float *)(param_2 + 0x17c) + *(float *)(param_2 + 0x10);
  FUN_100afc60(&fStack_44,&fStack_50,1,*(undefined4 *)(param_1 + 0x208),auStack_38);
  if (((iStack_30 == 0) || (iStack_2c == 0)) && (fStack_28 == _DAT_100dd618)) {
    return 1;
  }
  return 0;
}

