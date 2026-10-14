
void __fastcall FUN_1000c210(CBasePlayerItem *param_1)

{
  **(int **)(param_1 + 4) = (int)s_weapon_9mmAR_10077450 - *(int *)(DAT_1007f7f8 + 0x98);
  (**(code **)(*(int *)param_1 + 0x2c))();
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_w_9mmAR_mdl_1007743c);
  *(undefined4 *)(param_1 + 0xe4) = 4;
  *(undefined4 *)(param_1 + 0x11c) = 0x19;
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

