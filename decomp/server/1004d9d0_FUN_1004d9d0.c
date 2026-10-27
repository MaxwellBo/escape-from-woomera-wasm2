
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004d9d0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x108) = 5;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x20;
  *(undefined4 *)(param_1[1] + 0x160) = 0x3f800000;
  iVar2 = (**(code **)(*DAT_10121db8 + 0x18))();
  if (iVar2 == 0) {
    fVar1 = *DAT_10122044 + (float)_DAT_100e08f0;
  }
  else {
    fVar1 = *DAT_10122044 + (float)_DAT_100e9458;
  }
  param_1[0xc2] = (int)fVar1;
  param_1[0x70] = 0x3f666666;
  iVar2 = (*DAT_10121f70)(1,5);
  if (iVar2 < 3) {
    param_1[0xc3] = 0;
    param_1[0xc4] = 0x44160000;
  }
  else {
    param_1[0xc3] = 1;
    param_1[0xc4] = 0x44480000;
  }
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_hornet_mdl_1010ecd8);
  uStack_18 = 0x40800000;
  uStack_14 = 0x40800000;
  uStack_10 = 0x40800000;
  uStack_c = 0xc0800000;
  uStack_8 = 0xc0800000;
  uStack_4 = 0xc0800000;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  param_1[0x1e] = (int)CHornet::DieTouch;
  param_1[0x1d] = (int)CHornet::StartTrack;
  if (*(int *)(param_1[1] + 0x198) != 0) {
    iVar2 = (*DAT_10121f20)(*(int *)(param_1[1] + 0x198));
    if ((iVar2 != 0) && ((*(byte *)(*(int *)(param_1[1] + 0x198) + 0x224) & 8) != 0)) {
      *(undefined4 *)(param_1[1] + 0x1e0) = DAT_10126b48;
      goto LAB_1004db4a;
    }
  }
  *(undefined4 *)(param_1[1] + 0x1e0) = DAT_10126b64;
LAB_1004db4a:
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  FUN_10008190((int)param_1);
  return;
}

