
void __fastcall FUN_1003b2e0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1003b3a0((int)param_1);
  if (iVar1 == 0) {
    FUN_100b0ef0((int)param_1);
    (*DAT_10121efc)(4,s_Laser_tank_with_no_env_laser__101094f0);
    FUN_10019470(param_1);
    return;
  }
  FUN_1002bed0(param_1[0x52]);
  FUN_10019470(param_1);
  return;
}

