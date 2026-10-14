
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1009d340(int *param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x108) = 5;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x160) = 0x42960000;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_tentacle2_mdl_101182f0);
  uStack_18 = 0x42000000;
  uStack_14 = 0x42000000;
  uStack_10 = 0x42800000;
  uStack_c = 0xc2000000;
  uStack_8 = 0xc2000000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  *(undefined4 *)(param_1[1] + 0x16c) = 0x40000000;
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x20;
  param_1[0xb4] = 0xc3;
  param_1[0x1d] = (int)CTentacle::Start;
  param_1[0x1e] = (int)CTentacle::HitTouch;
  param_1[0x1f] = (int)CTentacle::CommandUse;
  (**(code **)(*param_1 + 8))(0x3e4ccccd);
  FUN_10008190((int)param_1);
  param_1[0xc5] = 1;
  *(undefined4 *)(param_1[1] + 0xb0) = 0x41900000;
  iVar1 = *(int *)(param_1[1] + 0x54);
  param_1[0xc2] = iVar1;
  *(int *)(param_1[1] + 0xac) = iVar1;
  fVar2 = _DAT_100dd5f8;
  DAT_101312f8 = 0;
  DAT_101312f4 = 0;
  param_1[0xcb] = 0x14;
  if ((float)param_1[0xcf] <= fVar2) {
    param_1[0xcf] = 0x42820000;
  }
  param_1[0x76] = 1;
  FUN_100afe10((int)param_1,param_1[1] + 8);
  return;
}

