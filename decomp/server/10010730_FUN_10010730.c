
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10010730(int param_1)

{
  longlong lVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 6;
  **(int **)(param_1 + 4) = (int)s_bmortar_10103a78 - (int)DAT_10122044[0x26];
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 2;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x148) = 4;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14c) = 0x437f0000;
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_sprites_mommaspit_spr_10103920);
  uStack_18 = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
  uStack_14 = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x144) = 0x3f000000;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  FUN_100afdc0(*(int *)(param_1 + 4),&uStack_c,&uStack_18);
  (*DAT_10121e18)(*(undefined4 *)(*(int *)(param_1 + 4) + 0xb4));
  lVar1 = __ftol();
  *(int *)(param_1 + 0xb8) = (int)lVar1;
  *(float *)(*(int *)(param_1 + 4) + 0x1e4) = *DAT_10122044 + (float)_DAT_100df2a8;
  return;
}

