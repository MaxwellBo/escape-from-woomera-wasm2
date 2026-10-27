
undefined4 * FUN_10043da0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = (*DAT_10121e5c)();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0x80;
  }
  iVar1 = *(int *)(iVar2 + 0x208);
  if ((iVar1 == 0) || (puVar3 = *(undefined4 **)(iVar1 + 0x7c), puVar3 == (undefined4 *)0x0)) {
    puVar3 = (undefined4 *)(*DAT_10121f04)(iVar1,0x30c);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_10002dc0(puVar3);
      FUN_10002ec0(puVar3 + 0x7b,0x10,8,FUN_10002f10);
      *puVar3 = &PTR_FUN_100e5cb4;
    }
    puVar3[1] = iVar2;
  }
  *(undefined4 *)(puVar3[1] + 0x108) = 10;
  *(int *)puVar3[1] = (int)s_grenade_1010d384 - *(int *)(DAT_10122044 + 0x98);
  *(undefined4 *)(puVar3[1] + 0x10c) = 2;
  (*DAT_10121e10)(*(undefined4 *)(puVar3[1] + 0x208),s_models_grenade_mdl_10108710);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  FUN_100afdc0(puVar3[1],&uStack_c,&uStack_18);
  *(undefined4 *)(puVar3[1] + 0x1e0) = 0x43480000;
  FUN_100afe10((int)puVar3,&stack0x00000008);
  iVar2 = puVar3[1];
  *(undefined4 *)(iVar2 + 0x20) = in_stack_00000014;
  *(undefined4 *)(iVar2 + 0x24) = in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x28) = in_stack_0000001c;
  iVar2 = puVar3[1];
  *(undefined4 *)(iVar2 + 0x50) = DAT_10121dd8;
  *(undefined4 *)(iVar2 + 0x54) = DAT_10121ddc;
  *(undefined4 *)(iVar2 + 0x58) = DAT_10121de0;
  *(undefined4 *)(puVar3[1] + 0x198) = *(undefined4 *)(param_1 + 0x208);
  puVar3[0x1d] = CBaseEntity::SUB_DoNothing;
  puVar3[0x1f] = CGrenade::DetonateUse;
  puVar3[0x1e] = CGrenade::SlideTouch;
  *(undefined4 *)(puVar3[1] + 0x1a0) = 1;
  *(undefined4 *)(puVar3[1] + 0x120) = 0x3f666666;
  return puVar3;
}

