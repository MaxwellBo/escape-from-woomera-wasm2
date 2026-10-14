
undefined4 __thiscall FUN_1003bb80(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x164) != -0x40800000) {
    if (*(int *)(param_1 + 0x10) == 0) {
      fVar3 = *(float *)(param_1 + 0xbc) - *(float *)(param_2 + 8);
      fVar4 = *(float *)(param_1 + 0xc0) - *(float *)(param_2 + 0xc);
      fVar1 = *(float *)(param_1 + 0xc4);
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 4);
      fVar1 = *(float *)(iVar2 + 0x10) + *(float *)(param_1 + 0xc4);
      fVar3 = (*(float *)(iVar2 + 8) + *(float *)(param_1 + 0xbc)) - *(float *)(param_2 + 8);
      fVar4 = (*(float *)(iVar2 + 0xc) + *(float *)(param_1 + 0xc0)) - *(float *)(param_2 + 0xc);
    }
    fVar1 = fVar1 - *(float *)(param_2 + 0x10);
    if (*(float *)(*(int *)(param_1 + 4) + 0x164) <
        SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1)) {
      return 0;
    }
  }
  return 1;
}

