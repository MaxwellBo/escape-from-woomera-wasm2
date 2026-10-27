
void __fastcall FUN_10002a80(CBasePlayerItem *param_1)

{
  (**(code **)(*(int *)param_1 + 0x2c))();
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_w_chainammo_mdl_10076450);
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

