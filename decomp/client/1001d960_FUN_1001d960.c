
void __cdecl FUN_1001d960(float *param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_4[1];
  fVar3 = param_3[2];
  fVar4 = param_4[2];
  fVar5 = param_3[3];
  fVar6 = param_4[3];
  *param_1 = (*param_4 - *param_3) * param_2 + *param_3;
  param_1[1] = (fVar2 - fVar1) * param_2 + fVar1;
  param_1[2] = (fVar4 - fVar3) * param_2 + fVar3;
  param_1[3] = (fVar6 - fVar5) * param_2 + fVar5;
  return;
}

