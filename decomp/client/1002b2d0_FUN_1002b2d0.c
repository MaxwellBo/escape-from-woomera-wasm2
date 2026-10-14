
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1002b2d0(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [3];
  float local_c [3];
  
  FUN_10026230(param_1,local_c,&local_24,local_18);
  param_1 = (float *)0xffffffff;
  fVar1 = local_24 * *param_2 + local_20 * param_2[1] + local_1c * param_2[2];
  if (_DAT_10059a18 <= fVar1) {
    param_1 = (float *)0x1;
  }
  fVar2 = ABS((float10)fVar1);
  if (fVar2 < (float10)param_4) {
    return (float10)(int)param_1 * ((fVar2 * (float10)param_3) / (float10)param_4);
  }
  return (float10)(int)param_1 * (float10)param_3;
}

