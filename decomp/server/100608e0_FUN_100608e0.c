
void __thiscall FUN_100608e0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  
  FUN_100af200(*(int *)(param_1 + 4) + 0x50);
  fVar1 = *(float *)(param_1 + 0x2f4);
  fVar2 = *(float *)(DAT_10122044 + 0x38);
  fVar3 = *(float *)(DAT_10122044 + 0x3c);
  fVar4 = *(float *)(param_1 + 0x2ec);
  fVar5 = *(float *)(DAT_10122044 + 0x44);
  fVar6 = *(float *)(DAT_10122044 + 0x48);
  fVar7 = *(float *)(param_1 + 0x2f0);
  iVar12 = *(int *)(param_1 + 4);
  fVar8 = *(float *)(DAT_10122044 + 0x2c);
  fVar9 = *(float *)(DAT_10122044 + 0x30);
  fVar10 = *(float *)(iVar12 + 0xc);
  fVar11 = *(float *)(iVar12 + 0x10);
  *param_2 = fVar7 * *(float *)(DAT_10122044 + 0x28) + *(float *)(iVar12 + 8) +
             fVar4 * *(float *)(DAT_10122044 + 0x40) + fVar1 * *(float *)(DAT_10122044 + 0x34);
  param_2[1] = fVar7 * fVar8 + fVar10 + fVar4 * fVar5 + fVar1 * fVar2;
  param_2[2] = fVar7 * fVar9 + fVar11 + fVar4 * fVar6 + fVar1 * fVar3;
  return;
}

