
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10091a70(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  undefined4 uVar3;
  float10 fVar4;
  char *pcVar5;
  
  if ((0 < *(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4)) && (param_1[0x43] != 8)) {
    fVar4 = FUN_100ae400();
    if ((float10)(float)param_1[0x3e] <= fVar4) {
      if (param_1[0x3d] == 0) {
        (**(code **)(*param_1 + 0x17c))(5,1,0);
        param_1[0x3d] = 1;
        fVar4 = FUN_100ae400();
        *(float *)(param_1[0x37] + 700) = (float)(fVar4 + (float10)_DAT_100ddad8);
        fVar4 = FUN_100ae400();
        param_1[0x40] = (int)(float)(fVar4 + (float10)_DAT_100ddad8);
        fVar4 = FUN_100ae400();
        param_1[0x3e] = (int)(float)(fVar4 + (float10)_DAT_100dd628);
        fVar4 = FUN_100ae400();
        param_1[0x3f] = (int)(float)(fVar4 + (float10)_DAT_100dd628);
        return;
      }
      if (param_1[0x3d] == 1) {
        fVar4 = FUN_100ae400();
        if ((float10)(float)param_1[0x40] <= fVar4) {
          param_1[0x3d] = 2;
          iVar2 = (*DAT_10121f70)(0,1);
          if (iVar2 == 0) {
            uVar3 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
            iVar2 = (*DAT_10121f70)(0,0x1f);
            pcVar5 = s_weapons_reload3_wav_10116250;
            this = extraout_ECX_00;
          }
          else {
            uVar3 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
            iVar2 = (*DAT_10121f70)(0,0x1f);
            pcVar5 = s_weapons_reload1_wav_10116264;
            this = extraout_ECX;
          }
          FUN_10094b20(this,uVar3,3,pcVar5,0x3f800000,0x3f4ccccd,0,iVar2 + 0x55);
          (**(code **)(*param_1 + 0x17c))(3,1,0);
          fVar4 = FUN_100ae400();
          param_1[0x49] = (int)(float)(fVar4 + (float10)_DAT_100dd648);
          fVar4 = FUN_100ae400();
          param_1[0x40] = (int)(float)(fVar4 + (float10)_DAT_100dd648);
          return;
        }
      }
      else {
        piVar1 = (int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
        param_1[0x43] = param_1[0x43] + 1;
        *piVar1 = *piVar1 + -1;
        param_1[0x3d] = 1;
      }
    }
  }
  return;
}

