
void __fastcall FUN_1000bc50(CBasePlayerItem *param_1)

{
  (**(code **)(*(int *)param_1 + 0x2c))();
  *(undefined4 *)(param_1 + 0xe4) = 0xb;
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_w_hgun_mdl_100773e8);
  *(undefined4 *)(param_1 + 0x11c) = 8;
  *(undefined4 *)(param_1 + 0x128) = 0;
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

