
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100485d0(int *param_1)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  (*DAT_100a503c)(s_efw_pause_0_1007ba48);
  (**(code **)(*param_1 + 0x24))(0);
  param_1[0x33] = 0;
  if (param_1[0x32] != 0) {
    (**(code **)(*DAT_100a5178 + 0x4c))(param_1);
  }
  _DAT_1007ab60 = DAT_1007ab5c;
  DAT_1007ab5c = 0xffffffff;
  fVar2 = FUN_10044870();
  _DAT_100bc9f4 = (float)fVar2;
  puVar1 = (undefined4 *)param_1[0x37];
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = &DAT_10064d30;
  }
  (*DAT_100a503c)(puVar1);
  return;
}

