
void __fastcall FUN_10008810(CBasePlayerItem *param_1)

{
  (**(code **)(*(int *)param_1 + 0x2c))();
  *(undefined4 *)(param_1 + 0xe4) = 0xc;
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_w_grenade_mdl_10076a9c);
  *(undefined4 *)(param_1 + 0x11c) = 5;
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

