
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b330(float *param_1,float param_2)

{
  float fVar1;
  float10 fVar2;
  float fStack_18;
  float fStack_14;
  
  fVar2 = (float10)(*DAT_10121f74)(0x43480000,0x43960000);
  fVar1 = (float)fVar2;
  fVar2 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
  fStack_14 = (float)fVar2;
  fVar2 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
  if (param_2 <= _DAT_100de4d0) {
    if (param_2 <= _DAT_100e0d90) {
      fStack_18 = (float)(fVar2 * (float10)_DAT_100dd63c);
      fStack_14 = fStack_14 * _DAT_100dd63c;
      fVar1 = fVar1 * _DAT_100dd63c;
    }
    else {
      fStack_18 = (float)(fVar2 + fVar2);
      fStack_14 = fStack_14 + fStack_14;
      fVar1 = fVar1 + fVar1;
    }
  }
  else {
    fStack_18 = (float)(fVar2 * (float10)_DAT_100e0d94);
    fStack_14 = fStack_14 * _DAT_100e0d94;
    fVar1 = fVar1 * _DAT_100e0d94;
  }
  *param_1 = fStack_18;
  param_1[1] = fStack_14;
  param_1[2] = fVar1;
  return;
}

