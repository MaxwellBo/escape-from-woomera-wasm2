
void __fastcall FUN_10030550(int *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_sprites_null_spr_10108000);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
    param_1[0x1d] = (int)CEnvBeamTrail::StartTrailThink;
    FUN_10063370(param_1);
  }
  return;
}

