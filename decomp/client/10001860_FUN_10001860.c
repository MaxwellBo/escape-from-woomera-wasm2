
void __fastcall FUN_10001860(CBasePlayerItem *param_1)

{
  (**(code **)(*(int *)param_1 + 0x2c))();
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                  s_models_w_crossbow_clip_mdl_100761ec);
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

