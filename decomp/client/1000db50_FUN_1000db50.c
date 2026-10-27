
void __fastcall FUN_1000db50(int *param_1)

{
  CBasePlayerItem *this;
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x108) = 10;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  (*DAT_1007eed8)(*(undefined4 *)(param_1[1] + 0x208),s_models_w_satchel_mdl_1007761c);
  CBasePlayerItem::AttemptToMaterialize((CBasePlayerItem *)param_1[1]);
  CBasePlayerItem::AttemptToMaterialize(this);
  param_1[0x1e] = (int)CSatchelCharge::SatchelSlide;
  param_1[0x1f] = (int)CGrenade::DetonateUse;
  param_1[0x1d] = (int)CSatchelCharge::SatchelThink;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  *(undefined4 *)(param_1[1] + 0x11c) = 0x3f000000;
  *(undefined4 *)(param_1[1] + 0x120) = 0x3f4ccccd;
  *(undefined4 *)(param_1[1] + 0x1e0) = DAT_1007f220;
  *(undefined4 *)(param_1[1] + 0x128) = 1;
  return;
}

