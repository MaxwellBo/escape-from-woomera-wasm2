
float10 __thiscall FUN_1005cd30(int param_1,float *param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  fVar2 = (float10)*param_2 - (float10)*(float *)(iVar1 + 8);
  fVar3 = (float10)param_2[1] - (float10)*(float *)(iVar1 + 0xc);
  fVar4 = (float10)param_2[2] - (float10)*(float *)(iVar1 + 0x10);
  return (float10)(int)param_2[4] - SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
}

