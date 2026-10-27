
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002b810(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  
  pfVar5 = (float *)FUN_10029530(param_1);
  pfVar6 = (float *)FUN_10029570(param_1);
  fVar1 = pfVar6[1];
  fVar2 = pfVar5[1];
  fVar3 = pfVar6[2];
  fVar4 = pfVar5[2];
  *param_2 = (*pfVar6 + *pfVar5) * _DAT_100dd614;
  param_2[1] = (fVar1 + fVar2) * _DAT_100dd614;
  param_2[2] = (fVar3 + fVar4) * _DAT_100dd614;
  return;
}

