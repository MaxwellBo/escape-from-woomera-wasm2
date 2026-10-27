
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007e530(int *param_1)

{
  uint *this;
  void *this_00;
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  longlong lVar8;
  float fVar9;
  uint uVar10;
  int iStack_4;
  
  if ((DAT_10121dd0 != 0) || (iVar3 = (**(code **)(*param_1 + 0xb8))(), iVar3 == 0))
  goto LAB_1007e7c4;
  this = (uint *)(param_1 + 0x137);
  bVar2 = FUN_10019450(this);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    piVar4 = (int *)FUN_10019460(this);
    iVar3 = (**(code **)(*piVar4 + 0xb0))(param_1[1]);
    if ((iVar3 == 0) || (*(int *)(param_1[1] + 0xc0) != 0)) {
      piVar4 = (int *)FUN_10019460(this);
      (**(code **)(*piVar4 + 0xe4))(param_1,param_1,0,0);
      FUN_10019420(this,0);
    }
  }
  FUN_10080d60(param_1);
  iVar3 = param_1[1];
  if ((((*(uint *)(iVar3 + 0x1a4) & 0x200) != 0) && (_DAT_100dd5f8 < *(float *)(iVar3 + 0x160))) &&
     (_DAT_100e843c <= (float)param_1[0xd1])) {
    if ((*(int *)(iVar3 + 0x1c4) != -3) && (_DAT_100ece14 < (float)param_1[0xd1])) {
      fVar7 = (float10)(**(code **)(*DAT_10121db8 + 0x3c))(param_1);
      fVar9 = (float)fVar7;
      if (*(float *)(param_1[1] + 0x160) < fVar9) {
        this_00 = *(void **)(param_1[1] + 0x208);
        FUN_10094b20(this_00,this_00,3,s_common_bodysplat_wav_101058e8,0x3f800000,0x3f4ccccd,0,100);
      }
      if (_DAT_100dd5f8 < fVar9) {
        iVar3 = (*DAT_10121f1c)(0);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = iVar3 + 0x80;
        }
        iVar5 = (*DAT_10121f1c)(0);
        if (iVar5 != 0) {
          iVar5 = iVar5 + 0x80;
        }
        (**(code **)(*param_1 + 0x60))(iVar5,iVar3,fVar9,0x20);
        *(undefined4 *)(param_1[1] + 0x68) = 0;
      }
    }
    iVar3 = (**(code **)(*param_1 + 0xb8))();
    if (iVar3 != 0) {
      FUN_1007c580(param_1,1);
    }
  }
  if ((*(uint *)(param_1[1] + 0x1a4) & 0x200) != 0) {
    if ((_DAT_100ddb10 < (float)param_1[0xd1]) &&
       (iVar3 = (**(code **)(*DAT_10121db8 + 0x18))(), iVar3 == 0)) {
      fVar9 = 0.2;
      lVar8 = __ftol();
      FUN_10095d30(4,(undefined4 *)(param_1[1] + 8),(int)lVar8,fVar9);
    }
    param_1[0xd1] = 0;
  }
  iVar3 = (**(code **)(*param_1 + 0xb8))();
  if (iVar3 != 0) {
    iVar3 = param_1[1];
    if ((*(float *)(iVar3 + 0x20) == _DAT_100dd5f8) && (*(float *)(iVar3 + 0x24) == _DAT_100dd5f8))
    {
      uVar10 = 0;
    }
    else {
      if ((((*(float *)(iVar3 + 0x20) == _DAT_100dd5f8) &&
           (*(float *)(iVar3 + 0x24) == _DAT_100dd5f8)) || ((*(uint *)(iVar3 + 0x1a4) & 0x200) == 0)
          ) && (*(int *)(iVar3 + 0x1c0) < 2)) goto LAB_1007e797;
      uVar10 = 1;
    }
    FUN_1007c580(param_1,uVar10);
  }
LAB_1007e797:
  FUN_10007fc0((int)param_1,0.0);
  FUN_1007e980(param_1[1]);
  FUN_1007e3a0((int)param_1);
  param_1[0xcb] = *(int *)(param_1[1] + 0x180);
LAB_1007e7c4:
  piVar4 = param_1 + 0x144;
  iStack_4 = 6;
  do {
    for (piVar1 = (int *)*piVar4; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x38]) {
      piVar6 = (int *)(**(code **)(*piVar1 + 0x15c))();
      if ((piVar6 != (int *)0x0) && (iVar3 = (**(code **)(*piVar6 + 0x19c))(), iVar3 != 0)) {
        fVar9 = (float)piVar6[0x3e] - *(float *)(DAT_10122044 + 4);
        if (fVar9 <= (float)_DAT_100ee938) {
          fVar9 = (float)_DAT_100ee938;
        }
        piVar6[0x3e] = (int)fVar9;
        fVar9 = (float)piVar6[0x3f] - *(float *)(DAT_10122044 + 4);
        if (fVar9 <= (float)_DAT_100e0b50) {
          fVar9 = (float)_DAT_100e0b50;
        }
        piVar6[0x3f] = (int)fVar9;
        if (piVar6[0x40] != 0x447a0000) {
          fVar9 = (float)piVar6[0x40] - *(float *)(DAT_10122044 + 4);
          if (fVar9 <= (float)_DAT_100e0b50) {
            fVar9 = (float)_DAT_100e0b50;
          }
          piVar6[0x40] = (int)fVar9;
        }
        iVar3 = piVar6[1];
        if (*(int *)(iVar3 + 0x254) != 0x447a0000) {
          fVar9 = *(float *)(iVar3 + 0x254) - *(float *)(DAT_10122044 + 4);
          if (fVar9 <= (float)_DAT_100e0b50) {
            fVar9 = (float)_DAT_100e0b50;
          }
          *(float *)(iVar3 + 0x254) = fVar9;
        }
      }
    }
    piVar4 = piVar4 + 1;
    iStack_4 = iStack_4 + -1;
  } while (iStack_4 != 0);
  fVar9 = (float)param_1[0xaf] - *(float *)(DAT_10122044 + 4);
  param_1[0xaf] = (int)fVar9;
  if (fVar9 < (float)_DAT_100e0b50) {
    param_1[0xaf] = -0x457ced91;
  }
  if ((param_1[0x1a6] != 0x447a0000) &&
     (fVar9 = (float)param_1[0x1a6] - *(float *)(DAT_10122044 + 4), param_1[0x1a6] = (int)fVar9,
     fVar9 < (float)_DAT_100e0b50)) {
    param_1[0x1a6] = -0x457ced91;
  }
  if ((param_1[0x1a4] != 0x447a0000) &&
     (fVar9 = (float)param_1[0x1a4] - *(float *)(DAT_10122044 + 4), param_1[0x1a4] = (int)fVar9,
     fVar9 < (float)_DAT_100e0b50)) {
    param_1[0x1a4] = -0x457ced91;
  }
  return;
}

