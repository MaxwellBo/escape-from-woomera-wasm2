
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10049400(int *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_10048d90(param_1);
  iVar1 = param_1[1];
  if (*(int *)(iVar1 + 0xb8) == 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = s_models_baby_headcrab_mdl_1010dea4;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0x208);
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0xb8));
  }
  (*DAT_10121e10)(uVar3,pcVar2);
  uStack_18 = 0x41400000;
  *(undefined4 *)(param_1[1] + 0x148) = 2;
  *(undefined4 *)(param_1[1] + 0x14c) = 0x43400000;
  uStack_14 = 0x41400000;
  uStack_10 = 0x41c00000;
  uStack_c = 0xc1400000;
  uStack_8 = 0xc1400000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  *(float *)(param_1[1] + 0x160) = DAT_10126a98 * (float)_DAT_100dd5f0;
  return;
}

