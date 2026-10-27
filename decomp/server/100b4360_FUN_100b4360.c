
void __fastcall FUN_100b4360(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = 0x41800000;
  local_14 = 0x41800000;
  local_10 = 0x41800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 6;
  local_c = 0xc1800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  local_8 = 0xc1800000;
  local_4 = 0;
  FUN_100afdc0(*(int *)(param_1 + 4),&local_c,&local_18);
  FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
  *(code **)(param_1 + 0x78) = CBasePlayerAmmo::DefaultTouch;
  return;
}

