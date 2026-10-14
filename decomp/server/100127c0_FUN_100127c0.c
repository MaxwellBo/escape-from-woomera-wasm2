
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100127c0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  
  FUN_10099880(param_1[1]);
  iVar5 = param_1[1];
  if ((*(byte *)(iVar5 + 0x1a0) & 8) == 0) {
    *(undefined4 *)(iVar5 + 0x10c) = 4;
  }
  else {
    *(undefined4 *)(iVar5 + 0x10c) = 0;
  }
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  FUN_100afe10((int)param_1,param_1[1] + 8);
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  if ((float)param_1[0x2f] != _DAT_100dd5f8) {
    if (*(float *)(param_1[1] + 0x1f8) == _DAT_100dd5f8) {
      *(undefined4 *)(param_1[1] + 0x1f8) = 0x42c80000;
    }
    iVar5 = param_1[1];
    param_1[0x2e] =
         (int)((*(float *)(iVar5 + 0x1f8) * *(float *)(iVar5 + 0x1f8)) /
              (ABS((float)param_1[0x2f]) + ABS((float)param_1[0x2f])));
    param_1[0x32] = *(int *)(iVar5 + 0x1f8);
    fVar6 = (float)param_1[0x2f] * (float)_DAT_100dd648;
    param_1[0x37] = (int)*(float *)(iVar5 + 0x50);
    param_1[0x38] = *(int *)(iVar5 + 0x54);
    param_1[0x39] = *(int *)(iVar5 + 0x58);
    fVar1 = *(float *)(iVar5 + 0x48);
    fVar2 = *(float *)(iVar5 + 0x4c);
    fVar3 = *(float *)(iVar5 + 0x54);
    fVar4 = *(float *)(iVar5 + 0x58);
    param_1[0x34] = (int)(fVar6 * *(float *)(iVar5 + 0x44) + *(float *)(iVar5 + 0x50));
    param_1[0x35] = (int)(fVar6 * fVar1 + fVar3);
    param_1[0x36] = (int)(fVar6 * fVar2 + fVar4);
    if ((*(byte *)(iVar5 + 0x1a0) & 1) != 0) {
      param_1[0x1d] = (int)CBaseEntity::SUB_CallUseToggle;
      (**(code **)(*param_1 + 8))(0x3dcccccd);
    }
    *(undefined4 *)(param_1[1] + 0x1f8) = 0;
    param_1[0x1f] = (int)CPendulum::PendulumUse;
  }
  return;
}

