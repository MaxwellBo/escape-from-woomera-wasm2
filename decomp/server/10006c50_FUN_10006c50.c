
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** __fastcall FUN_10006c50(CBaseEntity *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined **ppuVar4;
  float10 fVar5;
  
  switch(*(undefined4 *)(param_1 + 0x1d8)) {
  case 0:
    (*DAT_10121efc)(2,s_MONSTERSTATE_IS_NONE__10101d60);
    return &PTR_DAT_10106dd8;
  case 1:
    if ((*(uint *)(param_1 + 0x15c) & 0x20000) != 0) {
      ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(5);
      return ppuVar4;
    }
    iVar3 = FUN_1005d2d0((int)param_1);
    if (iVar3 != 0) {
      ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(1);
      return ppuVar4;
    }
    ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(2);
    return ppuVar4;
  case 2:
    break;
  case 3:
    if (((*(uint *)(param_1 + 0x15c) & 0x100000) != 0) &&
       (iVar3 = FUN_10008100(param_1,0x41), iVar3 != -1)) {
      ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0xe);
      return ppuVar4;
    }
    if ((*(uint *)(param_1 + 0x15c) & 0x300) == 0) {
      if ((*(uint *)(param_1 + 0x15c) & 0x20000) != 0) {
        ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(5);
        return ppuVar4;
      }
      ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(8);
      return ppuVar4;
    }
    fVar5 = FUN_10060350((int)param_1);
    if (ABS(fVar5) <
        ((float10)_DAT_100dd628 - (float10)*(float *)(param_1 + 0x1c0)) * (float10)_DAT_100ddb18) {
      ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x14);
      return ppuVar4;
    }
    ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(6);
    return ppuVar4;
  default:
    (*DAT_10121efc)(2,s_Invalid_State_for_GetSchedule__10101d08);
    return &PTR_DAT_10106dd8;
  case 5:
    ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x26);
    return ppuVar4;
  case 6:
    if (*(int *)(param_1 + 0x2fc) == 0) {
      (*DAT_10121efc)(2,s_Script_failed_for__s_10101d28,
                      **(int **)(param_1 + 4) + *(int *)(DAT_10122044 + 0x98));
      FUN_10090540(param_1);
      ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(1);
      return ppuVar4;
    }
    ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x28);
    return ppuVar4;
  case 8:
    ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x21);
    return ppuVar4;
  }
  uVar1 = *(uint *)(param_1 + 0x15c);
  if ((uVar1 & 0x100000) != 0) {
    FUN_10019420(param_1 + 0x160,0);
    bVar2 = FUN_10061cb0((int *)param_1);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xffefffff;
      ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x188))();
      return ppuVar4;
    }
    FUN_10062000(param_1,3);
    ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x188))();
    return ppuVar4;
  }
  if ((uVar1 & 0x10000) != 0) {
    ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(3);
    return ppuVar4;
  }
  if (((uVar1 & 0x100) != 0) && (((byte)param_1[0x2a0] & 0x40) == 0)) {
    ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x11);
    return ppuVar4;
  }
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 0x20) == 0) {
      ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(10);
      return ppuVar4;
    }
    ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0xc);
    return ppuVar4;
  }
  if ((uVar1 & 0x400) != 0) {
    ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x18);
    return ppuVar4;
  }
  if ((uVar1 & 0x1000) != 0) {
    ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x19);
    return ppuVar4;
  }
  if ((uVar1 & 0x800) != 0) {
    ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x16);
    return ppuVar4;
  }
  if ((uVar1 & 0x2000) != 0) {
    ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x17);
    return ppuVar4;
  }
  if ((uVar1 & 0xc00) != 0) {
    iVar3 = FUN_100617e0((int)param_1);
    if (iVar3 == 0) {
      ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(10);
      return ppuVar4;
    }
    (*DAT_10121efc)(2,s_No_suitable_combat_schedule__10101d40);
    return &PTR_DAT_10106dd8;
  }
  ppuVar4 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0xc);
  return ppuVar4;
}

