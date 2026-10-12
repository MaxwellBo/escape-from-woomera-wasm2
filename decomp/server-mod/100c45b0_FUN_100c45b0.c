
void __fastcall FUN_100c45b0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x2c))();
  param_1[0x43] = -1;
  iVar1 = (**(code **)(*param_1 + 0x1ac))();
  param_1[0x39] = iVar1;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),param_1[0x48]);
  FUN_100b3430(param_1);
  param_1[0x1e] = (int)CBasePlayerItem::DefaultTouch;
  return;
}

