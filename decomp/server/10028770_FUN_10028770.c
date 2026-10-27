
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10028770(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  FUN_10098fc0(param_1[1]);
  *(undefined4 *)(param_1[1] + 0x10c) = 4;
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  FUN_100afe10((int)param_1,param_1[1] + 8);
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  if (*(float *)(param_1[1] + 0x1e0) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x1e0) = 0x40000000;
  }
  iVar5 = param_1[1];
  pfVar1 = (float *)(param_1 + 0x3e);
  param_1[0x58] = 0;
  *pfVar1 = *(float *)(iVar5 + 8);
  param_1[0x3f] = *(int *)(iVar5 + 0xc);
  pfVar2 = (float *)(param_1 + 0x41);
  param_1[0x40] = *(int *)(iVar5 + 0x10);
  fVar7 = (ABS((*(float *)(iVar5 + 0xf4) - _DAT_100de4ac) * *(float *)(iVar5 + 0x44)) +
          ABS((*(float *)(iVar5 + 0xf8) - _DAT_100de4ac) * *(float *)(iVar5 + 0x48)) +
          ABS((*(float *)(iVar5 + 0xfc) - _DAT_100de4ac) * *(float *)(iVar5 + 0x4c))) -
          (float)param_1[0x3b];
  fVar3 = *(float *)(iVar5 + 0x48);
  fVar4 = *(float *)(iVar5 + 0x4c);
  *pfVar2 = fVar7 * *(float *)(iVar5 + 0x44) + *pfVar1;
  param_1[0x42] = (int)(fVar7 * fVar3 + (float)param_1[0x3f]);
  param_1[0x43] = (int)(fVar7 * fVar4 + (float)param_1[0x40]);
  if ((*(byte *)(iVar5 + 0x1a0) & 1) != 0) {
    FUN_10063390((int)param_1);
    fVar3 = *pfVar2;
    iVar5 = param_1[0x42];
    iVar6 = param_1[0x43];
    *pfVar2 = *pfVar1;
    param_1[0x42] = param_1[0x3f];
    param_1[0x43] = param_1[0x40];
    *pfVar1 = fVar3;
    param_1[0x3f] = iVar5;
    param_1[0x40] = iVar6;
  }
  iVar5 = param_1[4];
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + 4);
    fVar3 = *(float *)(iVar6 + 0xc);
    fVar4 = *(float *)(iVar6 + 0x10);
    *pfVar1 = *pfVar1 - *(float *)(iVar6 + 8);
    param_1[0x3f] = (int)((float)param_1[0x3f] - fVar3);
    param_1[0x40] = (int)((float)param_1[0x40] - fVar4);
    iVar5 = *(int *)(iVar5 + 4);
    fVar3 = *(float *)(iVar5 + 0xc);
    fVar4 = *(float *)(iVar5 + 0x10);
    *pfVar2 = *pfVar2 - *(float *)(iVar5 + 8);
    param_1[0x42] = (int)((float)param_1[0x42] - fVar3);
    param_1[0x43] = (int)((float)param_1[0x43] - fVar4);
  }
  param_1[0x1e] = 0;
  (**(code **)(*param_1 + 0x2c))();
  return;
}

