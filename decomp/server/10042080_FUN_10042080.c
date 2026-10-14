
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10042080(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  char *pcVar5;
  void *this;
  
  (**(code **)(*param_1 + 0x178))();
  if ((*(float *)(param_1[0x37] + 0x694) == _DAT_100dd5f8) ||
     (*DAT_10122044 <= *(float *)(param_1[0x37] + 0x694))) goto LAB_100421a1;
  iVar1 = (*DAT_10121f70)(0,3);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
    fVar3 = (float10)(*DAT_10121f74)(0x3f333333,0x3f4ccccd);
    this = (void *)(float)fVar3;
    pcVar5 = s_weapons_electro4_wav_101064b0;
LAB_10042185:
    FUN_10094b20(this,uVar2,1,pcVar5,this,0x3f4ccccd,0,100);
  }
  else {
    if (iVar1 == 1) {
      uVar2 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
      fVar3 = (float10)(*DAT_10121f74)(0x3f333333,0x3f4ccccd);
      this = (void *)(float)fVar3;
      pcVar5 = s_weapons_electro5_wav_1010d168;
      goto LAB_10042185;
    }
    if (iVar1 == 2) {
      uVar2 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
      fVar3 = (float10)(*DAT_10121f74)(0x3f333333,0x3f4ccccd);
      this = (void *)(float)fVar3;
      pcVar5 = s_weapons_electro6_wav_1010d150;
      goto LAB_10042185;
    }
  }
  *(undefined4 *)(param_1[0x37] + 0x694) = 0;
LAB_100421a1:
  fVar3 = FUN_100ae400();
  if ((float10)(float)param_1[0x40] <= fVar3) {
    if (param_1[0x2c] != 0) {
      FUN_10041710(param_1);
      param_1[0x2c] = 0;
      fVar3 = FUN_100ae400();
      param_1[0x40] = (int)(float)(fVar3 + (float10)_DAT_100e4138);
      return;
    }
    fVar3 = (float10)(*DAT_10121f74)(0,0x3f800000);
    if (fVar3 <= (float10)_DAT_100dd648) {
      fVar3 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
      fVar4 = FUN_100ae400();
      param_1[0x40] = (int)(float)(fVar4 + (float10)(float)fVar3);
      return;
    }
    if (fVar3 <= (float10)_DAT_100e1860) {
      fVar3 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
      fVar4 = FUN_100ae400();
      param_1[0x40] = (int)(float)(fVar4 + (float10)(float)fVar3);
      return;
    }
    fVar3 = FUN_100ae400();
    param_1[0x40] = (int)(float)(fVar3 + (float10)_DAT_100ddad4);
  }
  return;
}

