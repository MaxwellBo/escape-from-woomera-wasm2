
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10011ae0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  fVar4 = (float)_DAT_100de1e8;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x31] = 0x42c60000;
  if ((float)param_1[0x30] == fVar4) {
    param_1[0x30] = 0x3f800000;
  }
  iVar2 = param_1[1];
  param_1[0x2f] = 0x3f4ccccd;
  uVar3 = *(uint *)(iVar2 + 0x1a0);
  if ((uVar3 & 0x80) == 0) {
    if ((uVar3 & 0x100) == 0) {
      if ((uVar3 & 0x200) != 0) {
        param_1[0x2f] = 0x3f4ccccd;
      }
    }
    else {
      param_1[0x2f] = 0x3fa00000;
    }
  }
  else {
    param_1[0x2f] = 0x40000000;
  }
  if ((float)param_1[0x2e] <= _DAT_100dd5f8) {
    param_1[0x2e] = 0x3f800000;
  }
  puVar1 = (undefined4 *)(iVar2 + 0x44);
  if (((*(float *)(iVar2 + 0x44) == DAT_10121dd8) && (*(float *)(iVar2 + 0x48) == DAT_10121ddc)) &&
     (*(float *)(iVar2 + 0x4c) == DAT_10121de0)) {
    if ((*(uint *)(iVar2 + 0x1a0) & 4) == 0) {
      if ((*(uint *)(iVar2 + 0x1a0) & 8) != 0) {
        *puVar1 = 0x3f800000;
        *(undefined4 *)(iVar2 + 0x48) = 0;
        *(undefined4 *)(iVar2 + 0x4c) = 0;
        goto LAB_10011c4d;
      }
      *puVar1 = 0;
      uVar6 = 0;
      *(undefined4 *)(iVar2 + 0x48) = 0x3f800000;
    }
    else {
      *puVar1 = 0;
      uVar6 = 0x3f800000;
      *(undefined4 *)(iVar2 + 0x48) = 0;
    }
    *(undefined4 *)(iVar2 + 0x4c) = uVar6;
  }
LAB_10011c4d:
  iVar2 = param_1[1];
  if ((*(byte *)(iVar2 + 0x1a0) & 2) != 0) {
    fVar4 = *(float *)(iVar2 + 0x48) * _DAT_100df2b0;
    fVar5 = *(float *)(iVar2 + 0x4c) * _DAT_100df2b0;
    *(float *)(iVar2 + 0x44) = *(float *)(iVar2 + 0x44) * _DAT_100df2b0;
    *(float *)(iVar2 + 0x48) = fVar4;
    *(float *)(iVar2 + 0x4c) = fVar5;
  }
  iVar2 = param_1[1];
  if ((*(byte *)(iVar2 + 0x1a0) & 0x40) == 0) {
    *(undefined4 *)(iVar2 + 0x10c) = 4;
    *(undefined4 *)(param_1[1] + 0x108) = 7;
  }
  else {
    *(undefined4 *)(iVar2 + 0x10c) = 0;
    *(undefined4 *)(param_1[1] + 0x110) = 0xffffffff;
    *(undefined4 *)(param_1[1] + 0x108) = 7;
  }
  FUN_100afe10((int)param_1,param_1[1] + 8);
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  param_1[0x1f] = (int)CFuncRotating::RotatingUse;
  if (*(float *)(param_1[1] + 0x1f8) <= _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0;
  }
  if (((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) || (*(int *)(param_1[1] + 0x1cc) == 0)) {
    param_1[0x1d] = (int)CFuncRotating::WaitForStart;
    (**(code **)(*param_1 + 8))(0x3fc00000);
  }
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x20) != 0) {
    param_1[0x1e] = (int)CFuncRotating::HurtTouch;
  }
  (**(code **)(*param_1 + 0x2c))();
  return;
}

