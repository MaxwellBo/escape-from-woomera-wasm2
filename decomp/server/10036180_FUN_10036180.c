
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_10036180(int param_1,undefined4 *param_2)

{
  float10 fVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  float fStack_1c;
  
  fStack_3c = (float)param_2[2];
  uStack_50 = *param_2;
  fStack_48 = (float)param_2[2] + (float)_DAT_100e45b8;
  uStack_4c = param_2[1];
  FUN_100afc60(param_2,&uStack_50,1,0,auStack_38);
  if (fStack_28 != (float)_DAT_100dd628) {
    fStack_48 = fStack_1c;
  }
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a4) & 2) != 0) {
    fVar1 = FUN_100b0c00(param_2,fStack_3c,fStack_48);
    return fVar1;
  }
  return (float10)fStack_48;
}

