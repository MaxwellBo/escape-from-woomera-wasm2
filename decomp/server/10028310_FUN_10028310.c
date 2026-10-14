
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10028310(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  (**(code **)(*param_1 + 0x2c))();
  FUN_10099880(param_1[1]);
  iVar8 = param_1[1];
  if ((*(byte *)(iVar8 + 0x1a0) & 2) != 0) {
    fVar3 = *(float *)(iVar8 + 0x48) * _DAT_100df2b0;
    fVar4 = *(float *)(iVar8 + 0x4c) * _DAT_100df2b0;
    *(float *)(iVar8 + 0x44) = *(float *)(iVar8 + 0x44) * _DAT_100df2b0;
    *(float *)(iVar8 + 0x48) = fVar3;
    *(float *)(iVar8 + 0x4c) = fVar4;
  }
  iVar8 = param_1[1];
  pfVar1 = (float *)(param_1 + 0x44);
  fVar3 = (float)param_1[0x39];
  *pfVar1 = *(float *)(iVar8 + 0x50);
  param_1[0x45] = *(int *)(iVar8 + 0x54);
  param_1[0x46] = *(int *)(iVar8 + 0x58);
  pfVar2 = (float *)(param_1 + 0x47);
  fVar4 = *(float *)(iVar8 + 0x48);
  fVar5 = *(float *)(iVar8 + 0x4c);
  fVar6 = *(float *)(iVar8 + 0x54);
  fVar7 = *(float *)(iVar8 + 0x58);
  *pfVar2 = fVar3 * *(float *)(iVar8 + 0x44) + *(float *)(iVar8 + 0x50);
  param_1[0x48] = (int)(fVar3 * fVar4 + fVar6);
  param_1[0x49] = (int)(fVar3 * fVar5 + fVar7);
  if ((*(byte *)(iVar8 + 0x1a0) & 8) == 0) {
    *(undefined4 *)(iVar8 + 0x10c) = 4;
  }
  else {
    *(undefined4 *)(iVar8 + 0x10c) = 0;
  }
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  FUN_100afe10((int)param_1,param_1[1] + 8);
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  if (*(float *)(param_1[1] + 0x1f8) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0x42c80000;
  }
  iVar8 = param_1[1];
  if ((*(byte *)(iVar8 + 0x1a0) & 1) != 0) {
    *(float *)(iVar8 + 0x50) = *pfVar2;
    *(int *)(iVar8 + 0x54) = param_1[0x48];
    *(int *)(iVar8 + 0x58) = param_1[0x49];
    *pfVar2 = *pfVar1;
    param_1[0x48] = param_1[0x45];
    *pfVar1 = *pfVar1;
    param_1[0x49] = param_1[0x46];
    param_1[0x45] = param_1[0x45];
    param_1[0x46] = param_1[0x46];
    iVar8 = param_1[1];
    fVar3 = *(float *)(iVar8 + 0x48) * _DAT_100df2b0;
    fVar4 = *(float *)(iVar8 + 0x4c) * _DAT_100df2b0;
    *(float *)(iVar8 + 0x44) = *(float *)(iVar8 + 0x44) * _DAT_100df2b0;
    *(float *)(iVar8 + 0x48) = fVar3;
    *(float *)(iVar8 + 0x4c) = fVar4;
  }
  param_1[0x37] = 1;
  if (((*(uint *)(param_1[1] + 0x1a0) & 0x100) != 0) &&
     ((*(uint *)(param_1[1] + 0x1a0) & 0x400) == 0)) {
    param_1[0x1e] = 0;
    return;
  }
  param_1[0x1e] = (int)CBaseDoor::DoorTouch;
  return;
}

