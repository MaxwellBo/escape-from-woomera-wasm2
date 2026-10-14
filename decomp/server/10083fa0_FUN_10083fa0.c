
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10083fa0(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = FUN_100841e0(param_1);
  fVar2 = FUN_100841e0(param_2);
  if (((float)fVar1 != _DAT_100dd5f8) && ((float)fVar2 != _DAT_100dd5f8)) {
    fVar3 = (float10)FUN_100c9190();
    return (fVar3 / ((float10)(float)fVar2 * (float10)(float)fVar1)) * (float10)_DAT_100ddaec *
           (float10)_DAT_100ef340;
  }
  return (float10)_DAT_100dd5f8;
}

