
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10048740(int *param_1)

{
  float10 fVar1;
  
  (*DAT_100a503c)(s_efw_pause_0_1007ba48);
  (**(code **)(*param_1 + 0x24))(0);
  param_1[0x33] = 0;
  if (param_1[0x32] != 0) {
    (**(code **)(*DAT_100a5178 + 0x4c))(param_1);
  }
  FUN_100463c0();
  fVar1 = FUN_10044870();
  _DAT_100bc9f4 = (float)fVar1;
  return;
}

