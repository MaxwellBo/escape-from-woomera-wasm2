
void __fastcall FUN_10001e50(CBasePlayerItem *param_1)

{
  (**(code **)(*(int *)param_1 + 0x2c))();
  *(undefined4 *)(param_1 + 0xe4) = 1;
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_w_crowbar_mdl_10076238);
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

