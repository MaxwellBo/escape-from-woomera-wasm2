
void __fastcall FUN_10001810(int param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x170) = 0;
  **(int **)(param_1 + 4) = (int)s_monster_flyer_10101344 - *(int *)(DAT_10122044 + 0x98);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 3;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x160) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0x3e4ccccd;
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_boid_mdl_101012d0);
  uStack_18 = 0x40a00000;
  uStack_14 = 0x40a00000;
  uStack_10 = 0x40000000;
  uStack_c = 0xc0a00000;
  uStack_8 = 0xc0a00000;
  uStack_4 = 0;
  FUN_100afdc0(*(int *)(param_1 + 4),&uStack_c,&uStack_18);
  return;
}

