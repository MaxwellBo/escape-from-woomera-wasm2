
void __fastcall FUN_1006d310(int *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_player_mdl_10105870);
  uStack_18 = 0x41800000;
  uStack_14 = 0x41800000;
  uStack_10 = 0x42900000;
  uStack_c = 0xc1800000;
  uStack_8 = 0xc1800000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 4;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x160) = 0x42480000;
  *(undefined4 *)(param_1[1] + 0xb0) = 0x41000000;
  if (DAT_10122780 == 0) {
    param_1[0x1d] = (int)CTestHull::DropDelay;
    (**(code **)(*param_1 + 8))(0x3f800000);
  }
  else {
    param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
    (**(code **)(*param_1 + 8))(0);
  }
  *(undefined4 *)(param_1[1] + 0x148) = 2;
  *(undefined4 *)(param_1[1] + 0x14c) = 0;
  return;
}

