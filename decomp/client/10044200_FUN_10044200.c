
void __fastcall FUN_10044200(CBasePlayerItem *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*(int *)param_1 + 0x2c))();
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  uVar1 = (**(code **)(*(int *)param_1 + 0x1ac))();
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  (*DAT_1007eed8)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),*(undefined4 *)(param_1 + 0x120));
  CBasePlayerItem::AttemptToMaterialize(param_1);
  *(code **)(param_1 + 0x78) = CBasePlayerAmmo::DefaultTouch;
  return;
}

