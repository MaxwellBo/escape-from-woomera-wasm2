
void __fastcall FUN_1000d5c0(CBasePlayerItem *param_1)

{
  bool bVar1;
  
  (**(code **)(*(int *)param_1 + 0x2c))();
  *(undefined4 *)(param_1 + 0xe4) = 8;
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_w_rpg_mdl_100775a4);
  *(undefined4 *)(param_1 + 0x124) = 1;
  bVar1 = FUN_1000a1d0();
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x11c) = 2;
    CBasePlayerItem::AttemptToMaterialize(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x11c) = 1;
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

