
void __fastcall FUN_100b79e0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  (**(code **)(*param_1 + 0x2c))();
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  (&PTR_s_models_fungus_small__mdl_1011c134)[*(int *)(param_1[1] + 0x110)]);
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  fVar2 = (float10)(*DAT_10121f74)(0,0x437f0000);
  *(float *)(param_1[1] + 0x130) = (float)fVar2;
  fVar2 = (float10)(*DAT_10121f74)(0x3f333333,0x3fb33333);
  *(float *)(param_1[1] + 0x138) = (float)fVar2;
  FUN_10008190((int)param_1);
  iVar1 = *param_1;
  fVar2 = (float10)(*DAT_10121f74)(0x3dcccccd,0x3ecccccd);
  (**(code **)(iVar1 + 8))((float)fVar2);
  return;
}

