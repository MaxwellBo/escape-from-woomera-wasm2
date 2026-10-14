
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10029cc0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x38] == 0) {
    param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
    return;
  }
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x1e4) = *DAT_10122044;
  iVar1 = param_1[1];
  if (((*(float *)(iVar1 + 0x150) == DAT_10121dd8) && (*(float *)(iVar1 + 0x154) == DAT_10121ddc))
     && (*(float *)(iVar1 + 0x158) == DAT_10121de0)) {
    *(undefined4 *)(iVar1 + 0x150) = 0x437f0000;
    *(undefined4 *)(iVar1 + 0x154) = 0x437f0000;
    *(undefined4 *)(iVar1 + 0x158) = 0x437f0000;
  }
  if (*(float *)(param_1[1] + 0x164) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x164) = 0x44800000;
  }
  if (((float)param_1[0x31] == _DAT_100dd5f8) &&
     (iVar1 = param_1[1], (*(byte *)(iVar1 + 0x1a0) & 8) == 0)) {
    param_1[0x1d] = 0;
    if ((*(float *)(iVar1 + 0x1e0) != _DAT_100dd5f8) || (*(int *)(iVar1 + 0x1c8) != 0)) {
      param_1[0x1d] = (int)CLightning::TripThink;
      (**(code **)(*param_1 + 8))(0x3dcccccd);
    }
    iVar1 = param_1[1];
    if (*(int *)(iVar1 + 0x1cc) != 0) {
      if ((*(byte *)(iVar1 + 0x1a0) & 1) == 0) {
        *(undefined4 *)(iVar1 + 0x118) = 0x80;
        param_1[0x2e] = 0;
        FUN_10019680((int)param_1);
        param_1[0x1f] = (int)CLightning::ToggleUse;
        return;
      }
      param_1[0x2e] = 1;
      param_1[0x1f] = (int)CLightning::ToggleUse;
      return;
    }
  }
  else {
    iVar1 = param_1[1];
    param_1[0x2e] = 0;
    if ((*(int *)(iVar1 + 0x1cc) == 0) ||
       ((param_1[0x1f] = (int)CLightning::StrikeUse, *(int *)(iVar1 + 0x1cc) == 0 ||
        ((*(byte *)(iVar1 + 0x1a0) & 1) != 0)))) {
      param_1[0x1d] = (int)CLightning::StrikeThink;
      (**(code **)(*param_1 + 8))(0x3f800000);
    }
  }
  return;
}

