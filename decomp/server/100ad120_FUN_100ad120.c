
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100ad120(int *param_1)

{
  int iVar1;
  
  FUN_10007fc0((int)param_1,0.0);
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  if (param_1[0xc3] == 0) {
    FUN_100ad2f0(param_1,2);
    if (param_1[0xde] == 0) {
      (**(code **)(*param_1 + 8))(0x3f800000);
      FUN_10094b20(*(void **)(param_1[1] + 0x208),*(void **)(param_1[1] + 0x208),4,
                   s_turret_tu_spinup_wav_1011a334,0x3f000000,0x3f4ccccd,0,100);
      param_1[0xde] = 1;
      *(undefined4 *)(param_1[1] + 0x138) = 0x3dcccccd;
    }
    else {
      iVar1 = param_1[1];
      if (*(float *)(iVar1 + 0x138) < (float)_DAT_100dd628) {
        *(float *)(iVar1 + 0x138) = *(float *)(iVar1 + 0x138) + (float)_DAT_100f5e78;
      }
      else {
        (**(code **)(*param_1 + 8))(0x3dcccccd);
        FUN_10094b20((void *)param_1[1],*(undefined4 *)(param_1[1] + 0x208),6,
                     s_turret_tu_active2_wav_1011a3a0,0x3f000000,0x3f4ccccd,0,100);
        param_1[0x1d] = (int)CBaseTurret::ActiveThink;
        param_1[0xde] = 0;
        param_1[0xc3] = 1;
      }
    }
    if (param_1[0xc3] == 0) {
      return;
    }
  }
  param_1[0x1d] = (int)CBaseTurret::ActiveThink;
  return;
}

