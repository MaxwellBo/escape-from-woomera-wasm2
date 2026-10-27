
void __fastcall FUN_1000f3b0(CBasePlayerItem *param_1)

{
  (**(code **)(*(int *)param_1 + 0x2c))();
  *(undefined4 *)(param_1 + 0xe4) = 0xf;
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_w_sqknest_mdl_100777c8);
  CBasePlayerItem::AttemptToMaterialize(param_1);
  *(undefined4 *)(param_1 + 0x11c) = 5;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x128) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x134) = *DAT_1007f7f8;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0x3f800000;
  return;
}

