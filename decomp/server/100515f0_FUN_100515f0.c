
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100515f0(int *param_1)

{
  int iVar1;
  float fVar2;
  char *pcVar3;
  undefined4 uVar4;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  iVar1 = param_1[1];
  if (*(int *)(iVar1 + 0xb8) == 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x208);
    pcVar3 = s_models_icky_mdl_1010f81c;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x208);
    pcVar3 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0xb8));
  }
  (*DAT_10121e10)(uVar4,pcVar3);
  uStack_c = 0x42000000;
  uStack_8 = 0x42000000;
  uStack_4 = 0x42000000;
  uStack_18 = 0xc2000000;
  fStack_14 = -32.0;
  fStack_10 = -32.0;
  FUN_100afdc0(param_1[1],&uStack_18,&uStack_c);
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x108) = 5;
  param_1[0xb4] = 0xc3;
  if (*(float *)(param_1[1] + 0x160) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x160) = DAT_10126ac8;
  }
  iVar1 = param_1[1];
  uStack_18 = 0;
  fStack_14 = 0.0;
  fStack_10 = 16.0;
  *(undefined4 *)(iVar1 + 0x174) = 0;
  *(undefined4 *)(iVar1 + 0x178) = 0;
  *(undefined4 *)(iVar1 + 0x17c) = 0x41800000;
  param_1[0x70] = -0x40cccccd;
  param_1[0x76] = 0;
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 2;
  param_1[0xc5] = 0x43160000;
  param_1[199] = 0x40200000;
  param_1[0xae] = 0x810;
  (**(code **)(*param_1 + 0x134))();
  param_1[0xcc] = 0x43c00000;
  param_1[0xd2] = 0x43c00000;
  param_1[0x1e] = (int)CIchthyosaur::BiteTouch;
  param_1[0x1f] = (int)CIchthyosaur::CombatUse;
  param_1[0xd1] = 0x42a00000;
  param_1[0xd0] = 0x43960000;
  (*DAT_10121e58)(param_1[1] + 0x50,&fStack_24,0,0);
  fStack_10 = SQRT(fStack_24 * fStack_24 + fStack_20 * fStack_20 + fStack_1c * fStack_1c);
  if (fStack_10 == _DAT_100dd5f8) {
    fStack_14 = 0.0;
    fStack_10 = 1.0;
    fStack_24 = _DAT_100dd5f8;
  }
  else {
    fStack_10 = _DAT_100dd618 / fStack_10;
    fStack_24 = fStack_24 * fStack_10;
    fStack_14 = fStack_20 * fStack_10;
    fStack_10 = fStack_1c * fStack_10;
  }
  fVar2 = (float)param_1[0xc5];
  iVar1 = param_1[1];
  *(float *)(iVar1 + 0x20) = fStack_24 * fVar2;
  *(float *)(iVar1 + 0x24) = fStack_14 * fVar2;
  *(float *)(iVar1 + 0x28) = fStack_10 * fVar2;
  iVar1 = param_1[1];
  param_1[0xc9] = *(int *)(iVar1 + 0x20);
  param_1[0xca] = *(int *)(iVar1 + 0x24);
  param_1[0xcb] = *(int *)(iVar1 + 0x28);
  return;
}

