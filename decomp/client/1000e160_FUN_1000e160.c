
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000e160(void *param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = FUN_10018f40();
  *(float *)(*(int *)((int)param_1 + 0xdc) + 700) = (float)(fVar1 + (float10)_DAT_10059a10);
  fVar1 = FUN_10018fb0(*(int *)(*(int *)((int)param_1 + 0xdc) + 0x308),10.0,0x41700000);
  fVar2 = FUN_10018f40();
  *(float *)((int)param_1 + 0x100) = (float)(fVar2 + (float10)(float)fVar1);
  if (*(int *)((int)param_1 + 0xac) != 0) {
    FUN_1000a3e0(param_1,s_models_v_satchel_radio_mdl_100776c0,s_models_p_satchel_radio_mdl_1007768c
                 ,2,&DAT_10077434,0,0);
    return;
  }
  FUN_1000a3e0(param_1,s_models_v_satchel_mdl_100776dc,s_models_p_satchel_mdl_100776a8,2,
               &DAT_10077704,0,0);
  return;
}

