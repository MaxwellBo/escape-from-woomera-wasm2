
void __fastcall FUN_100b6c30(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_hair_mdl_1011c1d0);
  uStack_18 = 0x40800000;
  uStack_14 = 0x40800000;
  uStack_10 = 0x42000000;
  uStack_c = 0xc0800000;
  uStack_8 = 0xc0800000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
    fVar2 = (float10)(*DAT_10121f74)(0,0x437f0000);
    *(float *)(param_1[1] + 0x130) = (float)fVar2;
    fVar2 = (float10)(*DAT_10121f74)(0x3f333333,0x3fb33333);
    *(float *)(param_1[1] + 0x138) = (float)fVar2;
  }
  FUN_10008190((int)param_1);
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  iVar1 = *param_1;
  fVar2 = (float10)(*DAT_10121f74)(0x3dcccccd,0x3ecccccd);
  (**(code **)(iVar1 + 8))((float)fVar2);
  return;
}

