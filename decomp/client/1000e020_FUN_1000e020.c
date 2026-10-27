
void __fastcall FUN_1000e020(CBasePlayerItem *param_1)

{
  (**(code **)(*(int *)param_1 + 0x2c))();
  *(undefined4 *)(param_1 + 0xe4) = 0xe;
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_w_satchel_mdl_1007761c);
  *(undefined4 *)(param_1 + 0x11c) = 1;
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

