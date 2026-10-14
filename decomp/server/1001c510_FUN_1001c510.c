
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001c510(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar1 = param_2;
  if (param_1 != 0) {
    iVar1 = param_1;
  }
  if ((*(uint *)(param_2 + 0x224) & 0x100000) != 0) {
    *param_3 = 0;
    *param_4 = 0;
    return;
  }
  fStack_18 = *(float *)(iVar1 + 500) + *(float *)(iVar1 + 0x88);
  fStack_14 = *(float *)(iVar1 + 0x1f8) + *(float *)(iVar1 + 0x8c);
  fStack_10 = *(float *)(iVar1 + 0x1fc) + *(float *)(iVar1 + 0x90);
  if ((*(uint *)(iVar1 + 0x224) & 0x4000) != 0) {
    fStack_10 = fStack_10 - _DAT_100e0b48;
    fStack_c = fStack_18;
    fStack_8 = fStack_14;
    fStack_4 = fStack_10;
  }
  uVar2 = (*DAT_10121ff8)(&fStack_18);
  *param_3 = uVar2;
  uVar2 = (*DAT_10121ffc)(&fStack_18);
  *param_4 = uVar2;
  return;
}

