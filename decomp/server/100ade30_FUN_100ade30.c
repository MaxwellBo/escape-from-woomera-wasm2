
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100ade30(int *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  iVar1 = param_1[1];
  if (*(int *)(iVar1 + 0xb8) == 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = s_models_sentry_mdl_1011a40c;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0xb8));
  }
  (*DAT_10121e10)(uVar3,pcVar2);
  if (*(float *)(param_1[1] + 0x160) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x160) = DAT_10126b14;
  }
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0x42400000;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0x42400000;
  *(undefined4 *)(param_1[1] + 0x17c) = 0x42400000;
  param_1[0xd3] = 0x49742400;
  param_1[0xc2] = 0x49742400;
  FUN_100ac070(param_1);
  param_1[199] = 0x40;
  param_1[0xc6] = 0x40;
  param_1[200] = -0x3c;
  uStack_18 = 0x41800000;
  uStack_14 = 0x41800000;
  uStack_10 = 0x42800000;
  uStack_c = 0xc1800000;
  uStack_8 = 0xc1800000;
  uStack_4 = 0xc2800000;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  param_1[0x1e] = (int)CSentry::SentryTouch;
  param_1[0x1d] = (int)CBaseTurret::Initialize;
  (**(code **)(*param_1 + 8))(0x3e99999a);
  return;
}

