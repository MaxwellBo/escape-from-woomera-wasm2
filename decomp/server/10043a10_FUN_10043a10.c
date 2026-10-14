
void __fastcall FUN_10043a10(int param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 10;
  **(int **)(param_1 + 4) = (int)s_grenade_1010d384 - *(int *)(DAT_10122044 + 0x98);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 2;
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_grenade_mdl_10108710);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  FUN_100afdc0(*(int *)(param_1 + 4),&uStack_c,&uStack_18);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e0) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x308) = 0;
  return;
}

