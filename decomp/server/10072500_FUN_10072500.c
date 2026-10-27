
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10072500(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float afStack_18 [6];
  
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  *(undefined4 *)(param_1[1] + 0x11c) = 0x3e99999a;
  iVar1 = param_1[1];
  *(int *)(iVar1 + 0x20) = param_1[0xd7];
  *(int *)(iVar1 + 0x24) = param_1[0xd8];
  *(int *)(iVar1 + 0x28) = param_1[0xd9];
  fVar2 = (float10)(*DAT_10121f74)(0xc2480000,0x42480000);
  fVar3 = (float10)(*DAT_10121f74)(0xc1a00000,0x41a00000);
  iVar1 = param_1[1];
  afStack_18[0] = (float)fVar3;
  afStack_18[1] = 0.0;
  *(float *)(iVar1 + 0x5c) = afStack_18[0];
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(float *)(iVar1 + 100) = (float)fVar2;
  afStack_18[2] = (float)fVar2;
  FUN_10094b20(*(void **)(param_1[1] + 0x208),*(void **)(param_1[1] + 0x208),6,
               s_apache_ap_rotor4_wav_10113680,0,0,0x20,100);
  afStack_18[0] = 32.0;
  afStack_18[1] = 32.0;
  afStack_18[2] = 0.0;
  afStack_18[3] = -32.0;
  afStack_18[4] = -32.0;
  afStack_18[5] = -64.0;
  FUN_100afdc0(param_1[1],afStack_18 + 3,afStack_18);
  param_1[0x1d] = (int)COsprey::DyingThink;
  param_1[0x1e] = (int)COsprey::CrashTouch;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  *(undefined4 *)(param_1[1] + 0x160) = 0;
  *(undefined4 *)(param_1[1] + 0x16c) = 0;
  param_1[0xd5] = (int)(*DAT_10122044 + (float)_DAT_100de470);
  return;
}

