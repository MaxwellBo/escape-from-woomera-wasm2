
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000f4f0(void *param_1)

{
  CBasePlayerItem *extraout_ECX;
  CBasePlayerItem *this;
  float10 fVar1;
  
  fVar1 = (float10)(*DAT_1007f03c)(0,0x3f800000);
  this = extraout_ECX;
  if (fVar1 <= (float10)_DAT_100599f0) {
    this = *(CBasePlayerItem **)(*(int *)((int)param_1 + 4) + 0x208);
  }
  CBasePlayerItem::AttemptToMaterialize(this);
  *(undefined4 *)(*(int *)((int)param_1 + 0xdc) + 0x314) = 200;
  FUN_1000a3e0(param_1,s_models_v_squeak_mdl_10077834,s_models_p_squeak_mdl_10077820,4,
               s_squeak_10077850,0,0);
  return;
}

