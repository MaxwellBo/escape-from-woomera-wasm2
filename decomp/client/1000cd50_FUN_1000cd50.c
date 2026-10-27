
void __fastcall FUN_1000cd50(CBasePlayerItem *param_1)

{
  **(int **)(param_1 + 4) = (int)s_weapon_357_10077538 - *(int *)(DAT_1007f7f8 + 0x98);
  (**(code **)(*(int *)param_1 + 0x2c))();
  *(undefined4 *)(param_1 + 0xe4) = 3;
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_w_357_mdl_10077524);
  *(undefined4 *)(param_1 + 0x11c) = 6;
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

