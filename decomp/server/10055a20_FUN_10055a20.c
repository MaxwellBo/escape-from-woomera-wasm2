
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10055a20(int *param_1)

{
  int iVar1;
  char *pcVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  iVar1 = param_1[1];
  if (*(int *)(iVar1 + 0xb8) == 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = s_models_leech_mdl_1010fd1c;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = (char *)((int)DAT_10122044[0x26] + *(int *)(iVar1 + 0xb8));
  }
  (*DAT_10121e10)(uVar4,pcVar2);
  uStack_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x40000000;
  uStack_c = 0xbf800000;
  uStack_8 = 0xbf800000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 5;
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 2;
  if (*(float *)(param_1[1] + 0x160) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x160) = DAT_10126ad0;
  }
  param_1[0x70] = -0x41000000;
  param_1[0xb8] = 0x443b8000;
  (**(code **)(*param_1 + 0x134))();
  iVar1 = param_1[1];
  param_1[0x1d] = (int)CLeech::SwimThink;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(iVar1 + 0x174) = DAT_10121dd8;
  *(undefined4 *)(iVar1 + 0x178) = DAT_10121ddc;
  *(undefined4 *)(iVar1 + 0x17c) = DAT_10121de0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  (**(code **)(*param_1 + 0x1a8))(6);
  FUN_10062000(param_1,1);
  fVar3 = (float10)(*DAT_10121f74)(0x3f800000,0x40a00000);
  param_1[0xcc] = (int)(float)(fVar3 + (float10)*DAT_10122044);
  return;
}

