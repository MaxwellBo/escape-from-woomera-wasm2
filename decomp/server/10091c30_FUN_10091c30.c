
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10091c30(int *param_1)

{
  int iVar1;
  void *this;
  void *this_00;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 auStack_c [3];
  
  (**(code **)(*param_1 + 0x178))();
  FUN_10081540((void *)param_1[0x37],auStack_c);
  if (((float)param_1[0x3c] != _DAT_100dd5f8) && ((float)param_1[0x3c] < *DAT_10122044)) {
    uVar2 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
    iVar1 = (*DAT_10121f70)(0,0x1f);
    FUN_10094b20(this,uVar2,3,s_weapons_scock1_wav_1011623c,0x3f800000,0x3f4ccccd,0,iVar1 + 0x5f);
    param_1[0x3c] = 0;
  }
  fVar3 = FUN_100ae400();
  if ((float10)(float)param_1[0x40] < fVar3) {
    if (param_1[0x43] == 0) {
      if (param_1[0x3d] != 0) goto LAB_10091d1e;
      if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) != 0) {
        (**(code **)(*param_1 + 0x18c))();
        return;
      }
    }
    if (param_1[0x3d] != 0) {
LAB_10091d1e:
      if ((param_1[0x43] != 8) && (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) != 0)) {
        (**(code **)(*param_1 + 0x18c))();
        return;
      }
      (**(code **)(*param_1 + 0x17c))(4,1,0);
      uVar2 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
      iVar1 = (*DAT_10121f70)(0,0x1f);
      FUN_10094b20(this_00,uVar2,3,s_weapons_scock1_wav_1011623c,0x3f800000,0x3f4ccccd,0,
                   iVar1 + 0x5f);
      param_1[0x3d] = 0;
      fVar3 = FUN_100ae400();
      param_1[0x40] = (int)(float)(fVar3 + (float10)_DAT_100dd650);
      return;
    }
    fVar3 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),0.0,0x3f800000);
    if ((float10)_DAT_100dd600 < fVar3) {
      if ((float10)_DAT_100f14a0 < fVar3) {
        uVar2 = 8;
      }
      else {
        uVar2 = 0;
      }
      fVar3 = FUN_100ae400();
      fVar3 = fVar3 + (float10)_DAT_100f14a8;
    }
    else {
      uVar2 = 9;
      fVar3 = FUN_100ae400();
      fVar3 = fVar3 + (float10)_DAT_100e08f0;
    }
    param_1[0x40] = (int)(float)fVar3;
    (**(code **)(*param_1 + 0x17c))(uVar2,1,0);
  }
  return;
}

