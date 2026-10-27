
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10010f30(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 0xd4);
  fVar2 = *(float *)(param_2 + 200);
  fVar3 = *(float *)(param_2 + 0xd8);
  fVar4 = *(float *)(param_2 + 0xcc);
  *param_1 = (*(float *)(param_2 + 0xd0) + *(float *)(param_2 + 0xc4)) * _DAT_100dd614;
  param_1[1] = (fVar1 + fVar2) * _DAT_100dd614;
  param_1[2] = (fVar3 + fVar4) * _DAT_100dd614;
  return;
}

