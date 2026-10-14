
void __fastcall FUN_1000fa00(CBasePlayerItem *param_1)

{
  bool bVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*(int *)param_1 + 0x2c))();
  *(undefined4 *)(param_1 + 0xe4) = 0xd;
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_v_tripmine_mdl_10077858);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x114) = 3;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x128) = 8;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0;
  CBasePlayerItem::AttemptToMaterialize(param_1);
  *(undefined4 *)(param_1 + 0x11c) = 1;
  bVar1 = FUN_1000a1d0();
  if (!bVar1) {
    uStack_c = 0xc1800000;
    uStack_8 = 0xc1800000;
    uStack_4 = 0;
    CBasePlayerItem::AttemptToMaterialize((CBasePlayerItem *)&uStack_c);
  }
  return;
}

