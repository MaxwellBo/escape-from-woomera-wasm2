
int __cdecl FUN_100af120(byte *param_1,float *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = FUN_100af030(0,param_1);
  if (iVar5 == 0) {
    param_3 = param_3 * param_3;
    for (iVar6 = FUN_100aec40(0,param_1); iVar6 != 0; iVar6 = FUN_100aec40(iVar6,param_1)) {
      iVar1 = *(int *)(iVar6 + 4);
      fVar2 = *(float *)(iVar1 + 8) - *param_2;
      fVar3 = *(float *)(iVar1 + 0xc) - param_2[1];
      fVar4 = *(float *)(iVar1 + 0x10) - param_2[2];
      fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
      fVar2 = fVar2 * fVar2;
      if (fVar2 < param_3) {
        iVar5 = iVar6;
        param_3 = fVar2;
      }
    }
  }
  return iVar5;
}

