
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10016be0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar7 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(iVar7 + 8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(iVar7 + 0xc);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(iVar7 + 0x10);
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 4);
    iVar7 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(iVar7 + 0xc);
    fVar2 = *(float *)(iVar5 + 0xc);
    fVar3 = *(float *)(iVar7 + 0x10);
    fVar4 = *(float *)(iVar5 + 0x10);
    *(float *)(param_1 + 0xf8) = *(float *)(iVar7 + 8) - *(float *)(iVar5 + 8);
    *(float *)(param_1 + 0xfc) = fVar1 - fVar2;
    *(float *)(param_1 + 0x100) = fVar3 - fVar4;
  }
  pfVar8 = (float *)(param_1 + 0xf8);
  pfVar6 = (float *)(param_1 + 0x104);
  fVar3 = (ABS((*(float *)(iVar7 + 0xf4) - _DAT_100de4ac) * *(float *)(iVar7 + 0x44)) +
          ABS((*(float *)(iVar7 + 0xf8) - _DAT_100de4ac) * *(float *)(iVar7 + 0x48)) +
          ABS((*(float *)(iVar7 + 0xfc) - _DAT_100de4ac) * *(float *)(iVar7 + 0x4c))) -
          *(float *)(param_1 + 0xec);
  fVar1 = *(float *)(iVar7 + 0x48);
  fVar2 = *(float *)(iVar7 + 0x4c);
  *pfVar6 = fVar3 * *(float *)(iVar7 + 0x44) + *pfVar8;
  *(float *)(param_1 + 0x108) = fVar3 * fVar1 + *(float *)(param_1 + 0xfc);
  *(float *)(param_1 + 0x10c) = fVar3 * fVar2 + *(float *)(param_1 + 0x100);
  fVar2 = *(float *)(param_1 + 0x108) - *(float *)(param_1 + 0xfc);
  fVar1 = *(float *)(param_1 + 0x10c) - *(float *)(param_1 + 0x100);
  if ((SQRT((*pfVar6 - *pfVar8) * (*pfVar6 - *pfVar8) + fVar2 * fVar2 + fVar1 * fVar1) <
       _DAT_100dd618) || ((*(byte *)(iVar7 + 0x1a0) & 1) != 0)) {
    *pfVar6 = *pfVar8;
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xfc);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x100);
  }
  return;
}

