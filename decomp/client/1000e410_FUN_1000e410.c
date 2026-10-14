
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000e410(int *param_1)

{
  int *piVar1;
  float10 fVar2;
  
  if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) != 0) {
    FUN_1000a1e0(s_models_v_satchel_radio_mdl_100776c0,param_1[0x37]);
    (**(code **)(*param_1 + 0x17c))(2,1,0);
    CBasePlayerAmmo::DefaultTouch((CBasePlayerAmmo *)param_1[0x37],(CBaseEntity *)0x5);
    param_1[0x2b] = 1;
    piVar1 = (int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
    *piVar1 = *piVar1 + -1;
    fVar2 = FUN_10018f40();
    param_1[0x3e] = (int)(float)(fVar2 + (float10)_DAT_10059a10);
    fVar2 = FUN_10018f40();
    param_1[0x3f] = (int)(float)(fVar2 + (float10)_DAT_100599f0);
  }
  return;
}

