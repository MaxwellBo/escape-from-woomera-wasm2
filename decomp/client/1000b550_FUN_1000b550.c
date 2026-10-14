
void __fastcall FUN_1000b550(CBasePlayerItem *param_1)

{
  **(int **)(param_1 + 4) = (int)s_weapon_9mmhandgun_10077358 - *(int *)(DAT_1007f7f8 + 0x98);
  (**(code **)(*(int *)param_1 + 0x2c))();
  *(undefined4 *)(param_1 + 0xe4) = 2;
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_w_9mmhandgun_mdl_10077340)
  ;
  *(undefined4 *)(param_1 + 0x11c) = 0x11;
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

