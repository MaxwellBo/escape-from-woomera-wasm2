
void __fastcall FUN_100298f0(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  
  pfVar3 = (float *)FUN_10029530(param_1);
  pfVar4 = (float *)FUN_10029570(param_1);
  if (*pfVar4 <= *pfVar3) {
    fVar1 = *pfVar4;
  }
  else {
    fVar1 = *pfVar3;
  }
  *(float *)(*(int *)(param_1 + 4) + 0xdc) = fVar1;
  if (pfVar4[1] <= pfVar3[1]) {
    fVar1 = pfVar4[1];
  }
  else {
    fVar1 = pfVar3[1];
  }
  *(float *)(*(int *)(param_1 + 4) + 0xe0) = fVar1;
  if (pfVar4[2] <= pfVar3[2]) {
    fVar1 = pfVar4[2];
  }
  else {
    fVar1 = pfVar3[2];
  }
  *(float *)(*(int *)(param_1 + 4) + 0xe4) = fVar1;
  if (*pfVar3 <= *pfVar4) {
    fVar1 = *pfVar4;
  }
  else {
    fVar1 = *pfVar3;
  }
  *(float *)(*(int *)(param_1 + 4) + 0xe8) = fVar1;
  if (pfVar3[1] <= pfVar4[1]) {
    fVar1 = pfVar4[1];
  }
  else {
    fVar1 = pfVar3[1];
  }
  *(float *)(*(int *)(param_1 + 4) + 0xec) = fVar1;
  if (pfVar3[2] <= pfVar4[2]) {
    fVar1 = pfVar4[2];
  }
  else {
    fVar1 = pfVar3[2];
  }
  *(float *)(*(int *)(param_1 + 4) + 0xf0) = fVar1;
  iVar2 = *(int *)(param_1 + 4);
  *(float *)(iVar2 + 0xdc) = *(float *)(iVar2 + 0xdc) - *(float *)(iVar2 + 8);
  *(float *)(iVar2 + 0xe0) = *(float *)(iVar2 + 0xe0) - *(float *)(iVar2 + 0xc);
  *(float *)(iVar2 + 0xe4) = *(float *)(iVar2 + 0xe4) - *(float *)(iVar2 + 0x10);
  iVar2 = *(int *)(param_1 + 4);
  *(float *)(iVar2 + 0xe8) = *(float *)(iVar2 + 0xe8) - *(float *)(iVar2 + 8);
  *(float *)(iVar2 + 0xec) = *(float *)(iVar2 + 0xec) - *(float *)(iVar2 + 0xc);
  *(float *)(iVar2 + 0xf0) = *(float *)(iVar2 + 0xf0) - *(float *)(iVar2 + 0x10);
  iVar2 = *(int *)(param_1 + 4);
  FUN_100afdc0(iVar2,iVar2 + 0xdc,iVar2 + 0xe8);
  FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
  return;
}

