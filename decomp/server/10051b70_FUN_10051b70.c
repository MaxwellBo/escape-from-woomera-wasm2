
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10051b70(int *param_1,int *param_2)

{
  uint *puVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [16];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  switch(*param_2) {
  case 0x4d:
    if (param_1[0x35] == 0) {
      return;
    }
    *(undefined4 *)(param_1[1] + 0x170) = 2;
    break;
  default:
    FUN_10005140(param_1,param_2);
    return;
  case 0x5d:
    puVar1 = (uint *)(param_1 + 0x58);
    bVar2 = FUN_10019450(puVar1);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      if ((param_1[0x57] & 0x40000000U) == 0) {
        param_1[0x78] = 4;
      }
      goto LAB_100520e7;
    }
    iVar4 = *param_1;
    uVar3 = FUN_10019410(puVar1);
    iVar4 = (**(code **)(iVar4 + 0x110))(uVar3);
    if (iVar4 == 0) {
      param_1[0xd4] = (int)(*DAT_10122044 + (float)_DAT_100dd608);
      goto LAB_100520e7;
    }
    piVar5 = (int *)FUN_10019460(puVar1);
    (**(code **)(*piVar5 + 0xfc))(&fStack_a4);
    iVar4 = param_1[1];
    fVar7 = *(float *)(iVar4 + 8) - fStack_a4;
    fVar9 = *(float *)(iVar4 + 0xc) - fStack_a0;
    fVar10 = *(float *)(iVar4 + 0x10) - fStack_9c;
    fVar8 = SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar10 * fVar10);
    if (fVar8 == _DAT_100dd5f8) {
      fVar10 = 1.0;
      fVar9 = 0.0;
      fVar7 = 0.0;
    }
    else {
      fVar8 = _DAT_100dd618 / fVar8;
      fVar10 = fVar10 * fVar8;
      fVar9 = fVar9 * fVar8;
      fVar7 = fVar7 * fVar8;
    }
    FUN_10001d60(&fStack_b0,fVar7,fVar9,fVar10);
    fVar9 = fStack_ac - _DAT_100dd5f8;
    fVar7 = _DAT_100dd5f8 - fStack_b0;
    fVar8 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + 0.0);
    if (fVar8 == _DAT_100dd5f8) {
      fVar10 = 1.0;
      fVar7 = 0.0;
      fVar9 = 0.0;
    }
    else {
      fVar8 = _DAT_100dd618 / fVar8;
      fVar10 = fVar8 * 0.0;
      fVar7 = fVar7 * fVar8;
      fVar9 = fVar9 * fVar8;
    }
    FUN_10001d60(&fStack_bc,fVar9,fVar7,fVar10);
    if (fStack_bc * (float)param_1[0xc9] +
        fStack_b8 * (float)param_1[0xca] + fStack_b4 * (float)param_1[0xcb] < _DAT_100dd5f8) {
      fStack_bc = fStack_bc * _DAT_100df2b0;
      fStack_b8 = fStack_b8 * _DAT_100df2b0;
      fStack_b4 = fStack_b4 * _DAT_100df2b0;
    }
    fVar9 = (float)param_1[0xcc];
    fStack_80 = fStack_b0 * fVar9 + fStack_a4;
    fStack_7c = fStack_ac * fVar9 + fStack_a0;
    FUN_10001d60(&fStack_98,fStack_80 + fStack_bc * _DAT_100ddac8,
                 fStack_7c + fStack_b8 * _DAT_100ddac8,
                 fVar9 * fStack_a8 + fStack_9c + fStack_b4 * _DAT_100ddac8);
    iVar4 = FUN_10019460(puVar1);
    FUN_100afc90(&fStack_a4,&fStack_98,1,2,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x208),auStack_38);
    if ((float)_DAT_100dd648 < fStack_28) {
      fStack_98 = fStack_24;
      fStack_94 = fStack_20;
      fStack_90 = fStack_1c;
    }
    iVar4 = param_1[1];
    fStack_84 = fStack_90 - *(float *)(iVar4 + 0x10);
    fStack_88 = fStack_94 - *(float *)(iVar4 + 0xc);
    fStack_8c = fStack_98 - *(float *)(iVar4 + 8);
    fVar6 = FUN_1000a9b0(&fStack_8c);
    if (fVar6 == (float10)_DAT_100dd5f8) {
      fVar9 = 1.0;
      fVar7 = 0.0;
      fVar8 = 0.0;
    }
    else {
      fVar6 = (float10)_DAT_100dd618 / fVar6;
      fVar9 = (float)((float10)fStack_84 * fVar6);
      fVar7 = (float)((float10)fStack_88 * fVar6);
      fVar8 = (float)((float10)fStack_8c * fVar6);
    }
    FUN_10001d60(auStack_44,fVar8,fVar7,fVar9);
    FUN_10002280(auStack_44,&fStack_50,0.2);
    fVar9 = (float)param_1[0xc5];
    FUN_10001d60(&fStack_5c,fStack_50 * fVar9,fStack_4c * fVar9,fStack_48 * fVar9);
    FUN_10001d60(&fStack_74,(float)param_1[0xc9] * _DAT_100e1138,
                 (float)param_1[0xca] * _DAT_100e1138,(float)param_1[0xcb] * _DAT_100e1138);
    FUN_10001d60(&iStack_68,fStack_5c + fStack_74,fStack_58 + fStack_70,fStack_54 + fStack_6c);
    param_1[0xc9] = iStack_68;
    param_1[0xca] = iStack_64;
    param_1[0xcb] = iStack_60;
    if ((param_1[0x57] & 0x80000U) != 0) {
      piVar5 = (int *)FUN_10019460(puVar1);
      iVar4 = (**(code **)(*piVar5 + 0x110))(param_1);
      if (iVar4 != 0) {
        param_1[0xd4] = (int)((float)param_1[0xd4] - (float)_DAT_100dfb80);
        if ((float)param_1[0xcc] < (float)param_1[0xd2]) {
          param_1[0xcc] = (int)((float)param_1[0xcc] + _DAT_100de4fc);
        }
        if ((float)param_1[0xc5] <= (float)param_1[0xd1]) {
          if ((float)param_1[0xc5] < (float)param_1[0xd1]) {
            fVar9 = (float)param_1[0xc5] + _DAT_100de4ac;
            goto LAB_10052045;
          }
        }
        else {
          fVar9 = (float)param_1[0xc5] - _DAT_100de4ac;
LAB_10052045:
          param_1[0xc5] = (int)fVar9;
        }
        if ((float)param_1[0xd1] < (float)param_1[0xd0]) {
          param_1[0xd1] = (int)((float)param_1[0xd1] + (float)_DAT_100dd648);
        }
        goto LAB_100520e7;
      }
    }
    param_1[0xd4] = (int)((float)param_1[0xd4] + (float)_DAT_100dfb80);
    if (_DAT_100ddaf4 < (float)param_1[0xcc]) {
      param_1[0xcc] = (int)((float)param_1[0xcc] - _DAT_100de4fc);
    }
    if ((float)param_1[0xc5] < (float)param_1[0xd0]) {
      param_1[0xc5] = (int)((float)param_1[0xc5] + _DAT_100de4fc);
    }
LAB_100520e7:
    if (*DAT_10122044 <= (float)param_1[0xd4]) {
      return;
    }
    (**(code **)(*param_1 + 0x21c))();
    fVar6 = (float10)(*DAT_10121f74)(0x40400000,0x40a00000);
    param_1[0xd4] = (int)(float)(fVar6 + (float10)*DAT_10122044);
    return;
  case 0x5e:
    if (param_1[0x35] == 0) {
      return;
    }
    break;
  case 0x5f:
    fVar6 = FUN_100afec0(0.0,*(undefined4 *)(param_1[1] + 0x50),20.0);
    *(float *)(param_1[1] + 0x50) = (float)fVar6;
    iVar4 = param_1[1];
    fVar9 = *(float *)(iVar4 + 0x24) * _DAT_100e1138;
    fVar7 = *(float *)(iVar4 + 0x28) * _DAT_100e1138;
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) * _DAT_100e1138;
    *(float *)(iVar4 + 0x24) = fVar9;
    *(float *)(iVar4 + 0x28) = fVar7;
    iVar4 = param_1[1];
    if (((1 < *(int *)(iVar4 + 0x1c0)) && (*(int *)(iVar4 + 0x1c4) != -0x13)) &&
       (*(float *)(iVar4 + 0x28) < _DAT_100ddb10)) {
      *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + _DAT_100de45c;
      return;
    }
    *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) - _DAT_100de45c;
    return;
  }
  if ((param_1[0x57] & 0x40000000U) != 0) {
    return;
  }
  param_1[0x78] = 4;
  return;
}

