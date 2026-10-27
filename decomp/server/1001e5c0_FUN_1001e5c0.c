
void __fastcall FUN_1001e5c0(CBaseEntity *param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0;
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x20) = DAT_10121dd8;
  *(undefined4 *)(iVar1 + 0x24) = DAT_10121ddc;
  *(undefined4 *)(iVar1 + 0x28) = DAT_10121de0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x5c) = DAT_10121dd8;
  *(undefined4 *)(iVar1 + 0x60) = DAT_10121ddc;
  *(undefined4 *)(iVar1 + 100) = DAT_10121de0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x134) = *DAT_10122044;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x20;
  CBaseEntity::SUB_StartFadeOut(param_1);
  return;
}

