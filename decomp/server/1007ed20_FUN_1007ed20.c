
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007ed20(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined4 *puVar9;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_100c6970(param_1);
  *(int *)param_1[1] = (int)s_player_10101c54 - (int)DAT_10122044[0x26];
  *(undefined4 *)(param_1[1] + 0x160) = 0x42c80000;
  *(undefined4 *)(param_1[1] + 0x1bc) = 0;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x40000000;
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 3;
  *(undefined4 *)(param_1[1] + 0x1b0) = *(undefined4 *)(param_1[1] + 0x160);
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) & 0x100000;
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 8;
  *(float *)(param_1[1] + 0x1fc) = *DAT_10122044 + _DAT_100dd624;
  *(undefined4 *)(param_1[1] + 0x1e0) = 0x40000000;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x170) = 0;
  *(undefined4 *)(param_1[1] + 0x1d8) = 0;
  *(undefined4 *)(param_1[1] + 0x1dc) = 0;
  *(undefined4 *)(param_1[1] + 0x120) = 0x3f800000;
  *(undefined4 *)(param_1[1] + 0x11c) = 0x3f800000;
  param_1[0x132] = -1;
  param_1[0xb0] = 0;
  param_1[0xd9] = 0;
  param_1[0x13b] = 0;
  (*DAT_10121fe8)(*(undefined4 *)(param_1[1] + 0x208),&DAT_1010fb38,&DAT_101083f8);
  (*DAT_10121fe8)(*(undefined4 *)(param_1[1] + 0x208),&DAT_10114f3c,&DAT_1010c45c);
  uVar3 = FUN_100c5b80();
  if (CONCAT31(extraout_var,uVar3) != 1) {
    (*DAT_10121fa0)(*(undefined4 *)(param_1[1] + 0x208),0x43340000);
  }
  param_1[0x142] = 0;
  *(undefined4 *)(param_1[1] + 0x214) = 0;
  param_1[0x143] = -1;
  param_1[0x196] = 0;
  fVar1 = *DAT_10122044;
  fVar2 = (float)_DAT_100e4138;
  param_1[0xdb] = 0;
  param_1[299] = 0;
  param_1[0x70] = 0x3f000000;
  param_1[0xb4] = 0xf7;
  param_1[0x129] = (int)(fVar1 + fVar2);
  fVar8 = FUN_100ae400();
  param_1[0xaf] = (int)(float)fVar8;
  (**(code **)(*param_1 + 0xa8))();
  param_1[0xca] = 99;
  param_1[0xc9] = 0x3f800000;
  param_1[0xd1] = 0;
  (**(code **)(*DAT_10121db8 + 0xdc))(param_1);
  (**(code **)(*DAT_10121db8 + 0x58))(param_1);
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_player_mdl_10105870);
  DAT_10121dcc = *(undefined4 *)(param_1[1] + 0xb4);
  uVar4 = FUN_10008100(param_1,1);
  *(undefined4 *)(param_1[1] + 0x128) = uVar4;
  if ((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0) {
    puVar9 = &uStack_14;
    uStack_14 = 0x41800000;
    uStack_10 = 0x41800000;
    uStack_c = 0x42100000;
    puVar7 = (undefined4 *)&stack0xffffffe0;
  }
  else {
    puVar9 = (undefined4 *)&stack0xffffffe0;
    uStack_14 = 0xc1800000;
    uStack_10 = 0xc1800000;
    uStack_c = 0xc1900000;
    puVar7 = &uStack_14;
  }
  FUN_100afdc0(param_1[1],puVar7,puVar9);
  iVar6 = param_1[1];
  *(undefined4 *)(iVar6 + 0x174) = 0;
  *(undefined4 *)(iVar6 + 0x178) = 0;
  *(undefined4 *)(iVar6 + 0x17c) = 0x41e00000;
  (**(code **)(*param_1 + 0x2c))();
  param_1[0xbb] = 0;
  param_1[0xbc] = 0x42000000;
  param_1[0xbd] = 0;
  if (param_1[0xc3] == -1) {
    (*DAT_10121efc)(1,s_Couldn_t_alloc_player_sound_slot_10114f18);
  }
  param_1[0x13a] = 0;
  param_1[0x14c] = 0;
  param_1[0x133] = 1;
  param_1[0x141] = -1;
  param_1[0x136] = 0;
  param_1[0x14b] = 0;
  param_1[0x13f] = -1;
  piVar5 = param_1 + 0x16d;
  iVar6 = 0x20;
  do {
    piVar5[-0x20] = 0;
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  param_1[0x194] = 0;
  param_1[0x193] = 0;
  (**(code **)(*DAT_10121db8 + 0x48))(param_1);
  FUN_100c27f0();
  FUN_100c3020(param_1);
  return;
}

