
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10002340(CBasePlayerItem *param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_10018f40();
  *(float *)(*(int *)(param_1 + 0xdc) + 700) = (float)(fVar1 + (float10)_DAT_100599f0);
  (**(code **)(*(int *)param_1 + 0x17c))(10,1,0);
  FUN_10002930(param_1);
  return;
}

