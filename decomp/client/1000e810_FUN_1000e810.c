
void __fastcall FUN_1000e810(CBasePlayerItem *param_1)

{
  (**(code **)(*(int *)param_1 + 0x2c))();
  *(undefined4 *)(param_1 + 0xe4) = 7;
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_w_shotgun_mdl_10077718);
  *(undefined4 *)(param_1 + 0x11c) = 0xc;
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

