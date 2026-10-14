
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100411f0(int *param_1)

{
  int *piVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar5;
  void *this_01;
  void *this_02;
  float10 fVar6;
  float10 fVar7;
  longlong lVar8;
  float fVar9;
  
  this = *(void **)(param_1[0x37] + 4);
  if ((*(int *)((int)this + 0x1c0) == 3) && (-0x11 < *(int *)((int)this + 0x1c4))) {
    if (param_1[0x2c] == 0) {
      (**(code **)(*param_1 + 0x174))();
    }
    else {
      uVar2 = *(undefined4 *)((int)this + 0x208);
      iVar3 = (*DAT_10121f70)(0);
      FUN_10094b20(this_00,uVar2,1,s_weapons_electro4_wav_101064b0,0x3f800000,0x3f4ccccd,0,
                   iVar3 + 0x50);
      (**(code **)(*param_1 + 0x17c))(0,1);
      param_1[0x2c] = 0;
    }
    fVar6 = FUN_100ae400();
    fVar7 = (float10)_DAT_100dd648;
    param_1[0x3e] = (int)(float)(fVar6 + fVar7);
    param_1[0x3f] = (int)(float)(fVar6 + fVar7);
    return;
  }
  if (param_1[0x2c] == 0) {
    piVar1 = (int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
    if (*piVar1 < 1) {
      FUN_10094b20(this,*(undefined4 *)((int)this + 0x208),1,s_weapons_357_cock1_wav_101085d8,
                   0x3f4ccccd,0x3f4ccccd,0,100);
      fVar7 = FUN_100ae400();
      *(float *)(param_1[0x37] + 700) = (float)(fVar7 + (float10)_DAT_100dd648);
      return;
    }
    param_1[0x4c] = 0;
    *piVar1 = *piVar1 + -1;
    fVar7 = FUN_100ae400();
    *(float *)(param_1[0x37] + 0x698) = (float)fVar7;
    *(undefined4 *)(param_1[0x37] + 0x314) = 0x100;
    (**(code **)(*param_1 + 0x17c))(3,1);
    param_1[0x2c] = 1;
    fVar7 = FUN_100ae400();
    param_1[0x40] = (int)(float)(fVar7 + (float10)_DAT_100dd648);
    *(float *)(param_1[0x37] + 0x68c) = *DAT_10122044;
    fVar7 = FUN_10040e50();
    fVar9 = (float)fVar7;
    fVar7 = FUN_100ae400();
    *(float *)(param_1[0x37] + 0x690) = (float)(fVar7 + (float10)fVar9);
    (*DAT_10121ff4)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                    CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0x136)),0,&DAT_10121dd8,
                    &DAT_10121dd8,0,0,0x6e,0,0,0);
    param_1[0x4b] = 0x80;
    return;
  }
  if (param_1[0x2c] == 1) {
    fVar7 = FUN_100ae400();
    if ((float10)(float)param_1[0x40] < fVar7) {
      (**(code **)(*param_1 + 0x17c))(4,1);
      param_1[0x2c] = 2;
      return;
    }
  }
  else {
    iVar3 = param_1[0x37];
    fVar7 = FUN_100ae400();
    if (((float10)*(float *)(iVar3 + 0x698) <= fVar7) && (*(int *)(iVar3 + 0x698) != 0x447a0000)) {
      iVar4 = (**(code **)(*DAT_10121db8 + 0x18))();
      piVar1 = (int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
      iVar3 = *(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
      if (iVar4 == 0) {
        *piVar1 = iVar3 + -1;
        fVar7 = FUN_100ae400();
        fVar7 = fVar7 + (float10)_DAT_100e0eb8;
      }
      else {
        *piVar1 = iVar3 + -1;
        fVar7 = FUN_100ae400();
        fVar7 = fVar7 + (float10)_DAT_100dfb80;
      }
      *(float *)(param_1[0x37] + 0x698) = (float)fVar7;
    }
    if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) < 1) {
      FUN_10041710(param_1);
      param_1[0x2c] = 0;
      fVar7 = FUN_100ae400();
      param_1[0x40] = (int)(float)(fVar7 + (float10)_DAT_100dd628);
      fVar7 = FUN_100ae400();
      *(float *)(param_1[0x37] + 700) = (float)(fVar7 + (float10)_DAT_100dd618);
      return;
    }
    iVar3 = param_1[0x37];
    fVar7 = FUN_100ae400();
    if ((float10)*(float *)(iVar3 + 0x690) <= fVar7) {
      *(undefined4 *)(iVar3 + 0x698) = 0x447a0000;
    }
    FUN_10040e50();
    lVar8 = __ftol();
    iVar3 = (int)lVar8;
    if (0xfa < iVar3) {
      iVar3 = 0xfa;
    }
    uVar5 = extraout_var_00;
    if (param_1[0x4b] == 0) {
      (*DAT_10121efc)(1,s_sound_state__d_1010d1c4);
      uVar5 = extraout_var_01;
    }
    (*DAT_10121ff4)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                    CONCAT22(uVar5,*(undefined2 *)((int)param_1 + 0x136)),0,&DAT_10121dd8,
                    &DAT_10121dd8,0,0,iVar3,0,param_1[0x4b] == 0x80);
    param_1[0x4b] = 0x80;
    *(undefined4 *)(param_1[0x37] + 0x314) = 0x100;
    if (*(float *)(param_1[0x37] + 0x68c) < *DAT_10122044 - _DAT_100dd63c) {
      uVar2 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
      iVar3 = (*DAT_10121f70)(0);
      FUN_10094b20(this_01,uVar2,1,s_weapons_electro4_wav_101064b0,0x3f800000,0x3f4ccccd,0,
                   iVar3 + 0x50);
      uVar2 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
      iVar3 = (*DAT_10121f70)(0,0x3f);
      FUN_10094b20(this_02,uVar2,3,s_weapons_electro6_wav_1010d150,0x3f800000,0x3f4ccccd,0,
                   iVar3 + 0x4b);
      param_1[0x2c] = 0;
      fVar7 = FUN_100ae400();
      param_1[0x40] = (int)(float)(fVar7 + (float10)_DAT_100dd628);
      fVar7 = FUN_100ae400();
      *(float *)(param_1[0x37] + 700) = (float)(fVar7 + (float10)_DAT_100dd628);
      iVar3 = (*DAT_10121f1c)();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + 0x80;
      }
      iVar4 = (*DAT_10121f1c)();
      if (iVar4 != 0) {
        iVar4 = iVar4 + 0x80;
      }
      (**(code **)(*(int *)param_1[0x37] + 0x60))(iVar4,iVar3,0x42480000);
      FUN_100af6a0((int *)param_1[0x37]);
      (**(code **)(*param_1 + 0x17c))(0,1,0);
    }
  }
  return;
}

