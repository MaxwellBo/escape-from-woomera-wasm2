
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10009620(int *param_1)

{
  void *this;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  this = (void *)param_1[1];
  *(undefined4 *)((int)this + 0x11c) = 0x3e99999a;
  FUN_10094b20(this,*(undefined4 *)(param_1[1] + 0x208),6,s_apache_ap_rotor2_wav_10102c90,0,0,0x20,
               100);
  uStack_18 = 0x42000000;
  uStack_14 = 0x42000000;
  uStack_10 = 0;
  uStack_c = 0xc2000000;
  uStack_8 = 0xc2000000;
  uStack_4 = 0xc2800000;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  param_1[0x1d] = (int)CApache::DyingThink;
  param_1[0x1e] = (int)CApache::CrashTouch;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  *(undefined4 *)(param_1[1] + 0x160) = 0;
  *(undefined4 *)(param_1[1] + 0x16c) = 0;
  if ((*(byte *)(param_1[1] + 0x1a0) & 8) != 0) {
    param_1[0xc4] = (int)(*DAT_10122044 + (float)_DAT_100de470);
    return;
  }
  param_1[0xc4] = (int)(*DAT_10122044 + (float)_DAT_100de468);
  return;
}

