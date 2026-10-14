
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100aa930(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x108) = 5;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_v_tripmine_mdl_10119f7c);
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  *(undefined4 *)(param_1[1] + 0x114) = 3;
  *(undefined4 *)(param_1[1] + 0x128) = 7;
  FUN_10008190((int)param_1);
  *(undefined4 *)(param_1[1] + 0x138) = 0;
  uStack_18 = 0x41000000;
  uStack_14 = 0x41000000;
  uStack_10 = 0x41000000;
  uStack_c = 0xc1000000;
  uStack_8 = 0xc1000000;
  uStack_4 = 0xc1000000;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
    fVar1 = *DAT_10122044 + (float)_DAT_100e0ed8;
  }
  else {
    fVar1 = *DAT_10122044 + (float)_DAT_100dd628;
  }
  param_1[0xc3] = (int)fVar1;
  param_1[0x1d] = (int)CTripmineGrenade::PowerupThink;
  (**(code **)(*param_1 + 8))(0x3e4ccccd);
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1[1] + 0x1e0) = DAT_10126b54;
  *(undefined4 *)(param_1[1] + 0x160) = 0x3f800000;
  iVar6 = param_1[1];
  if (*(int *)(iVar6 + 0x198) != 0) {
    FUN_10094b20((void *)0x3f800000,*(undefined4 *)(iVar6 + 0x208),2,
                 s_weapons_mine_deploy_wav_10119f64,0x3f800000,0x3f4ccccd,0,100);
    FUN_10094b20((void *)param_1[1],*(undefined4 *)(param_1[1] + 0x208),4,
                 s_weapons_mine_charge_wav_1010d054,0x3e4ccccd,0x3f4ccccd,0,100);
    iVar6 = param_1[1];
    param_1[0xd4] = *(int *)(iVar6 + 0x198);
  }
  FUN_100af210((float *)(iVar6 + 0x50));
  pfVar5 = DAT_10122044;
  param_1[0xc4] = (int)DAT_10122044[10];
  param_1[0xc5] = (int)pfVar5[0xb];
  param_1[0xc6] = (int)pfVar5[0xc];
  fVar3 = (float)param_1[0xc5] * _DAT_100de9b8;
  fVar4 = (float)param_1[0xc6] * _DAT_100de9b8;
  iVar6 = param_1[1];
  fVar1 = *(float *)(iVar6 + 0xc);
  fVar2 = *(float *)(iVar6 + 0x10);
  param_1[199] = (int)((float)param_1[0xc4] * _DAT_100de9b8 + *(float *)(iVar6 + 8));
  param_1[200] = (int)(fVar3 + fVar1);
  param_1[0xc9] = (int)(fVar4 + fVar2);
  return;
}

