
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100a9f60(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint *this;
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar4 = FUN_1001a140(param_4,param_1[0x40]);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = param_1[0x40];
  param_1[0x40] = (uint)(iVar4 == 0);
  if ((iVar4 == 0) == 0) {
    param_1[0x39] = (int)*DAT_10122044;
    return;
  }
  if ((param_2 == (int *)0x0) || (iVar4 = (**(code **)(*param_2 + 0xcc))(), iVar4 == 0)) {
    iVar4 = (*DAT_10121f28)(1);
    if ((iVar4 == 0) && (iVar4 = (*DAT_10121f1c)(0), iVar4 == 0)) {
      param_2 = (int *)0x0;
    }
    else {
      param_2 = *(int **)(iVar4 + 0x7c);
    }
  }
  FUN_10019420(param_1 + 0x32,(int)param_2);
  this = (uint *)(param_1 + 0x34);
  param_1[0x39] = (int)((float)param_1[0x38] + *DAT_10122044);
  *(int *)(param_1[1] + 0x1f8) = param_1[0x3d];
  param_1[0x3c] = param_1[0x3d];
  if ((*(byte *)(param_1[1] + 0x1a0) & 2) == 0) {
    iVar4 = (**(code **)(*param_1 + 0xd8))();
    FUN_10019420(this,iVar4);
  }
  else {
    *this = param_1[0x32];
    param_1[0x35] = param_1[0x33];
  }
  bVar3 = FUN_10019450(this);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    return;
  }
  if ((*(byte *)(param_1[1] + 0x1a0) & 4) != 0) {
    FUN_100814e0(param_2,0);
  }
  if (param_1[0x37] == 0) {
    param_1[0x36] = 0;
  }
  else {
    iVar4 = FUN_100af030(0,(byte *)((int)DAT_10122044[0x26] + param_1[0x37]));
    param_1[0x36] = iVar4;
  }
  param_1[0x3a] = (int)*DAT_10122044;
  piVar1 = (int *)param_1[0x36];
  if (piVar1 != (int *)0x0) {
    if (*(float *)(piVar1[1] + 0x1f8) != _DAT_100dd5f8) {
      param_1[0x3c] = *(int *)(piVar1[1] + 0x1f8);
    }
    fVar5 = (float10)(**(code **)(*piVar1 + 0x94))();
    param_1[0x3a] = (int)(float)(fVar5 + (float10)(float)param_1[0x3a]);
  }
  iVar4 = param_1[1];
  if ((*(byte *)(iVar4 + 0x1a0) & 1) == 0) {
    fStack_c = 0.0;
    fStack_8 = 0.0;
    fStack_4 = 0.0;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x24) = 0;
    *(undefined4 *)(iVar4 + 0x28) = 0;
  }
  else {
    iVar4 = param_2[1];
    fStack_4 = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0x10);
    fStack_8 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 0xc);
    fStack_c = *(float *)(iVar4 + 0x174) + *(float *)(iVar4 + 8);
    FUN_100afe10((int)param_1,&fStack_c);
    *(float *)(param_1[1] + 0x50) = -*(float *)(param_2[1] + 0x50);
    *(undefined4 *)(param_1[1] + 0x54) = *(undefined4 *)(param_2[1] + 0x54);
    *(undefined4 *)(param_1[1] + 0x58) = 0;
    iVar4 = param_2[1];
    iVar2 = param_1[1];
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
  }
  if (param_1[0x41] == 0) {
    uVar7 = *(undefined4 *)(param_1[1] + 0x208);
    uVar6 = *(undefined4 *)(param_2[1] + 0x208);
  }
  else {
    iVar4 = FUN_100af030(0,(byte *)((int)DAT_10122044[0x26] + param_1[0x41]));
    if (iVar4 == 0) goto LAB_100aa20c;
    uVar7 = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x208);
    uVar6 = *(undefined4 *)(param_2[1] + 0x208);
  }
  (*DAT_10121f78)(uVar6,uVar7);
LAB_100aa20c:
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_2[1] + 0xb8) + (int)DAT_10122044[0x26]);
  param_1[0x1d] = (int)CTriggerCamera::FollowTarget;
  (**(code **)(*param_1 + 8))(0);
  param_1[0x3b] = 0;
  FUN_100aa520(param_1);
  return;
}

