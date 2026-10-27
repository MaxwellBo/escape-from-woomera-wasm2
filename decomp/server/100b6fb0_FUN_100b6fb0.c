
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100b6fb0(int *param_1)

{
  int iVar1;
  float unaff_ESI;
  float10 fVar2;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_tree_mdl_1011c1fc);
  fStack_18 = 30.0;
  fStack_14 = 30.0;
  uStack_10 = 0x433c0000;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  fStack_c = -30.0;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  fStack_8 = -30.0;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&fStack_c,&fStack_18);
  FUN_100b6750(param_1,1);
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  fVar2 = (float10)(*DAT_10121f74)(0,0x437f0000);
  *(float *)(param_1[1] + 0x130) = (float)fVar2;
  fVar2 = (float10)(*DAT_10121f74)(0x3f333333,0x3fb33333);
  *(float *)(param_1[1] + 0x138) = (float)fVar2;
  (*DAT_10121e58)(param_1[1] + 0x50,&stack0xffffffd8,0,0);
  fStack_c = fStack_24 * _DAT_100ddb10;
  iVar1 = param_1[1];
  fStack_8 = fStack_20 * _DAT_100ddb10;
  fStack_1c = unaff_ESI * _DAT_100ddb10 + *(float *)(iVar1 + 8);
  fStack_18 = fStack_c + *(float *)(iVar1 + 0xc);
  fStack_14 = fStack_8 + *(float *)(iVar1 + 0x10);
  iVar1 = FUN_100b6da0(*(undefined4 *)(iVar1 + 0x208),(undefined4 *)&stack0xffffffd8);
  param_1[0x38] = iVar1;
  uStack_10 = 0x41c00000;
  fStack_c = 24.0;
  fStack_8 = 128.0;
  fStack_1c = -24.0;
  fStack_18 = -24.0;
  fStack_14 = 0.0;
  FUN_100afdc0(*(int *)(iVar1 + 4),&fStack_1c,&uStack_10);
  return;
}

