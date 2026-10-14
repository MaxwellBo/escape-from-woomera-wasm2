
void __fastcall FUN_10007ad0(CBasePlayerItem *param_1)

{
  (**(code **)(*(int *)param_1 + 0x2c))();
  *(undefined4 *)(param_1 + 0xe4) = 9;
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_w_gauss_mdl_100769d8);
  *(undefined4 *)(param_1 + 0x11c) = 0x14;
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

