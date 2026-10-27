
void __fastcall FUN_100b3430(int *param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  FUN_100afe10((int)param_1,param_1[1] + 8);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_100afdc0(param_1[1],&local_c,&local_18);
  param_1[0x1e] = (int)CBasePlayerItem::DefaultTouch;
  param_1[0x1d] = (int)CBasePlayerItem::FallThink;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  return;
}

