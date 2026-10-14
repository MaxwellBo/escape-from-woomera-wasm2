
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10046de0(int *param_1)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 in_stack_ffffff98;
  undefined4 uVar6;
  float *pfVar7;
  undefined4 in_stack_ffffffa4;
  undefined4 in_stack_ffffffa8;
  float fVar8;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (((float)param_1[0x2a] == _DAT_100dd5f8) && ((float)param_1[0x29] != _DAT_100dd5f8)) {
    param_1[0x2a] = (int)*DAT_10122044;
  }
  fVar4 = FUN_100ae400();
  if (fVar4 < (float10)(float)param_1[0x40]) {
    return;
  }
  if ((float)param_1[0x29] == _DAT_100dd5f8) {
    if (_DAT_100dd5f8 < (float)param_1[0x2a]) {
      param_1[0x29] = 0;
      if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) != 0) {
        (**(code **)(*param_1 + 0x17c))();
        fVar4 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
        fVar5 = FUN_100ae400();
        param_1[0x2a] = -0x40800000;
        param_1[0x40] = (int)(float)(fVar5 + (float10)(float)fVar4);
        return;
      }
      (**(code **)(*param_1 + 0x194))();
      return;
    }
    if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) == 0) {
      return;
    }
    fVar4 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),0.0,0x3f800000);
    if ((float10)_DAT_100e1860 < fVar4) {
      fVar4 = FUN_100ae400();
      fVar4 = fVar4 + (float10)_DAT_100e0ed8;
    }
    else {
      fVar5 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
      fVar4 = FUN_100ae400();
      fVar4 = fVar4 + (float10)(float)fVar5;
    }
    param_1[0x40] = (int)(float)fVar4;
    (**(code **)(*param_1 + 0x17c))();
    return;
  }
  iVar3 = *(int *)(param_1[0x37] + 4);
  fStack_34 = *(float *)(iVar3 + 0x70) + *(float *)(iVar3 + 0x7c);
  fStack_38 = *(float *)(iVar3 + 0x6c) + *(float *)(iVar3 + 0x78);
  fVar8 = *(float *)(iVar3 + 0x74) + *(float *)(iVar3 + 0x68);
  dVar2 = _DAT_100e7fb0;
  if (fVar8 < _DAT_100dd5f8) {
    dVar2 = _DAT_100e7fb8;
  }
  fStack_3c = fVar8 * (float)dVar2 - (float)_DAT_100de4a0;
  fStack_44 = (_DAT_100de4b0 - fStack_3c) * _DAT_100de4fc;
  if (_DAT_100df284 < fStack_44) {
    fStack_44 = 500.0;
  }
  fVar8 = 2.611777e-29;
  FUN_100af200(&fStack_3c);
  iVar3 = *(int *)(param_1[0x37] + 4);
  fStack_1c = DAT_10122044[0xc] * _DAT_100dd634;
  fStack_2c = *(float *)(iVar3 + 0x178) + *(float *)(iVar3 + 0xc);
  fStack_28 = *(float *)(iVar3 + 0x17c) + *(float *)(iVar3 + 0x10);
  fStack_c = *(float *)(iVar3 + 0x174) + *(float *)(iVar3 + 8) + DAT_10122044[10] * _DAT_100dd634;
  fStack_8 = fStack_2c + DAT_10122044[0xb] * _DAT_100dd634;
  fStack_4 = fStack_28 + fStack_1c;
  fStack_24 = fStack_44 * DAT_10122044[10];
  iVar3 = *(int *)(param_1[0x37] + 4);
  fStack_20 = fStack_44 * DAT_10122044[0xb];
  fStack_10 = fStack_44 * DAT_10122044[0xc] + *(float *)(iVar3 + 0x28);
  fStack_14 = fStack_20 + *(float *)(iVar3 + 0x24);
  fStack_18 = fStack_24 + *(float *)(iVar3 + 0x20);
  fStack_40 = ((float)param_1[0x29] - *DAT_10122044) + (float)_DAT_100de538;
  if (fStack_40 < _DAT_100dd5f8) {
    fStack_40 = 0.0;
  }
  pfVar7 = &fStack_18;
  uVar6 = 0x10046fbf;
  FUN_10003850(&stack0xffffffa4,pfVar7);
  FUN_10003850(&stack0xffffff98,&fStack_c);
  FUN_10043bd0(*(int *)(param_1[0x37] + 4),in_stack_ffffff98,uVar6,pfVar7,in_stack_ffffffa4,
               in_stack_ffffffa8,fVar8,fStack_40);
  if (_DAT_100df284 <= fStack_44) {
    if (fStack_44 < _DAT_100e08e0) {
      (**(code **)(*param_1 + 0x17c))();
      goto LAB_1004702e;
    }
    iVar3 = *param_1;
  }
  else {
    iVar3 = *param_1;
  }
  (**(code **)(iVar3 + 0x17c))();
LAB_1004702e:
  FUN_1007c580((void *)param_1[0x37],5);
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  fVar4 = FUN_100ae400();
  param_1[0x3e] = (int)(float)(fVar4 + (float10)_DAT_100dd648);
  fVar4 = FUN_100ae400();
  piVar1 = (int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
  param_1[0x40] = (int)(float)(fVar4 + (float10)_DAT_100dd648);
  *piVar1 = *piVar1 + -1;
  if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) != 0) {
    return;
  }
  fVar4 = FUN_100ae400();
  fVar4 = fVar4 + (float10)_DAT_100dd648;
  param_1[0x3e] = (int)(float)fVar4;
  param_1[0x3f] = (int)(float)fVar4;
  param_1[0x40] = (int)(float)fVar4;
  return;
}

