
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** __fastcall FUN_1008e1a0(CBaseEntity *param_1)

{
  CBaseEntity *pCVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined3 extraout_var;
  int *piVar7;
  float10 fVar8;
  
  piVar4 = (int *)FUN_10019410((uint *)(param_1 + 0x160));
  if ((*(uint *)(param_1 + 0x15c) & 0x20000) != 0) {
    iVar5 = (**(code **)(*(int *)param_1 + 0x1e4))();
    if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0xc) & 0x20) != 0)) {
      ppuVar6 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x13);
      return ppuVar6;
    }
  }
  iVar5 = *(int *)(param_1 + 0x1d8);
  if (iVar5 != 1) {
    if (iVar5 == 2) {
      uVar2 = *(uint *)(param_1 + 0x15c);
      if ((uVar2 & 0x10000) != 0) {
        return &PTR_DAT_101158c8;
      }
      if (((uVar2 & 0x10) == 0) && ((uVar2 & 0x20000) != 0)) {
        return &PTR_DAT_10107008;
      }
      return &PTR_DAT_10115808;
    }
    if (iVar5 != 3) {
      ppuVar6 = FUN_10006c50(param_1);
      return ppuVar6;
    }
  }
  if (piVar4 != (int *)0x0) {
    if (((byte)param_1[0x15c] & 0x10) == 0) {
      iVar5 = (**(code **)(*piVar4 + 0xb8))();
      if ((iVar5 == 0) || (_DAT_100dd5d4 < *DAT_10122044 - *(float *)(param_1 + 0x38c))) {
        FUN_10019420(param_1 + 0x160,0);
        piVar4 = (int *)0x0;
      }
    }
    else {
      *(float *)(param_1 + 0x38c) = *DAT_10122044;
    }
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x300) != 0) {
    ppuVar6 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x11);
    return ppuVar6;
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x20000) != 0) {
    iVar5 = (**(code **)(*(int *)param_1 + 0x1e4))();
    if (((iVar5 != 0) && ((*(byte *)(iVar5 + 0xc) & 0x21) != 0)) &&
       (_DAT_100ddad4 < *DAT_10122044 - *(float *)(param_1 + 0x38c))) {
      *(float *)(param_1 + 0x38c) = *DAT_10122044;
      ppuVar6 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x33);
      return ppuVar6;
    }
  }
  pCVar1 = param_1 + 0x168;
  bVar3 = FUN_10019450((uint *)pCVar1);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    piVar7 = (int *)FUN_10019460((uint *)pCVar1);
    iVar5 = (**(code **)(*piVar7 + 0xcc))();
    if (iVar5 != 0) {
      piVar7 = (int *)FUN_10019460((uint *)pCVar1);
      iVar5 = (**(code **)(*piVar7 + 0xb8))();
      if (iVar5 == 0) {
        (**(code **)(*(int *)param_1 + 0x228))(0);
        ppuVar6 = FUN_10006c50(param_1);
        return ppuVar6;
      }
      if (piVar4 != (int *)0x0) {
        iVar5 = (**(code **)(*(int *)param_1 + 0x130))(piVar4);
        if ((iVar5 == 1) || (iVar5 == 2)) {
          if ((*(uint *)(param_1 + 0x15c) & 0x10000) != 0) {
            ppuVar6 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x31);
            return ppuVar6;
          }
          ppuVar6 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x35);
          return ppuVar6;
        }
      }
      fVar8 = FUN_1009a810((int)param_1);
      if (fVar8 <= (float10)_DAT_100ddaf4) {
        iVar5 = FUN_1008e580((int)param_1);
        if (iVar5 != 0) {
          return &PTR_DAT_10115710;
        }
        if ((*(uint *)(param_1 + 0x15c) & 0x10000000) != 0) {
          ppuVar6 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x2d);
          return ppuVar6;
        }
      }
      ppuVar6 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0xf);
      return ppuVar6;
    }
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x10000000) != 0) {
    ppuVar6 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x2c);
    return ppuVar6;
  }
  FUN_1009bd00((int *)param_1);
  ppuVar6 = FUN_10006c50(param_1);
  return ppuVar6;
}

