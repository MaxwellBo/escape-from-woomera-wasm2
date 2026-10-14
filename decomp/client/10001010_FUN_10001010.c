
void __fastcall FUN_10001010(CBasePlayerItem *param_1)

{
  (**(code **)(*(int *)param_1 + 0x2c))();
  *(undefined4 *)(param_1 + 0xe4) = 6;
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_w_crossbow_mdl_10076120);
  *(undefined4 *)(param_1 + 0x11c) = 5;
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

