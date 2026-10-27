
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10015570(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  undefined3 extraout_var_00;
  char *pcVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_1001a170(param_1,param_4);
  if ((iVar2 == 0) || (bVar1 = FUN_100b0030(param_1[0x31],0), CONCAT31(extraout_var,bVar1) == 0)) {
    if ((*(byte *)(param_1[1] + 0x1a0) & 2) != 0) {
      (*DAT_10121efc)(1,s_DEBUG__env_state___s__10104734);
      bVar1 = FUN_100b0030(param_1[0x31],0);
      if (CONCAT31(extraout_var_00,bVar1) == 0) {
        pcVar4 = FUN_100b10d0(param_4);
        (*DAT_10121efc)(1,s_ignored_trigger__s__locked_by_ma_10104708,pcVar4);
        return;
      }
      if (param_4 == 1) {
        (*DAT_10121efc)(1,s_ignored_trigger_USE_ON__already_o_101046e4);
        return;
      }
      if (param_4 == 0) {
        (*DAT_10121efc)(1,s_ignored_trigger_USE_OFF__already_101046bc);
        return;
      }
      pcVar4 = FUN_100b10d0(param_4);
      (*DAT_10121efc)(1,s_ignored_trigger__s__101046a4,pcVar4);
    }
switchD_100155af_default:
    return;
  }
  uVar3 = (**(code **)(*param_1 + 0x58))();
  switch(uVar3) {
  case 0:
  case 3:
    break;
  case 1:
  case 2:
    if ((float)param_1[0x30] != _DAT_100dd5f8) {
      param_1[0x2e] = 3;
      if ((*(byte *)(param_1[1] + 0x1a0) & 2) != 0) {
        (*DAT_10121efc)(1,s_DEBUG__env_state___s__triggered__10104804,
                        *(int *)(param_1[1] + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                        (double)(float)param_1[0x30]);
      }
      (**(code **)(*param_1 + 8))();
      return;
    }
    param_1[0x2e] = 0;
    if ((*(byte *)(param_1[1] + 0x1a0) & 2) == 0) goto LAB_100156e7;
    (*DAT_10121efc)(1,s_DEBUG__env_state___s__triggered__101047d8);
    if (*(int *)(param_1[1] + 0x1c8) == 0) {
      iVar2 = *(int *)(param_1[1] + 0x1f0);
      if (iVar2 != 0) {
        uVar5 = CONCAT44(*(int *)(DAT_10122044 + 0x98) + iVar2,s___firing___s__101047c8);
        goto LAB_100156cc;
      }
    }
    else {
      (*DAT_10121efc)(1,s___firing___s__101047c8);
      if (*(int *)(param_1[1] + 0x1f0) != 0) {
        uVar5 = CONCAT44(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1f0),
                         s_and___s__101047bc);
LAB_100156cc:
        (*DAT_10121efc)(1,uVar5);
      }
    }
    (*DAT_10121efc)(1);
LAB_100156e7:
    FUN_10098c10((uint *)(*(int *)(param_1[1] + 0x1c8) + *(int *)(DAT_10122044 + 0x98)),param_2,
                 param_1,0,0);
    FUN_10098c10((uint *)(*(int *)(param_1[1] + 0x1f0) + *(int *)(DAT_10122044 + 0x98)),param_2,
                 param_1,3,0);
    FUN_10019680((int)param_1);
    return;
  default:
    goto switchD_100155af_default;
  }
  if ((float)param_1[0x2f] != _DAT_100dd5f8) {
    param_1[0x2e] = 1;
    if ((*(byte *)(param_1[1] + 0x1a0) & 2) != 0) {
      (*DAT_10121efc)(1,s_DEBUG__env_state___s__triggered__10104778,
                      *(int *)(param_1[1] + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                      (double)(float)param_1[0x2f]);
    }
    (**(code **)(*param_1 + 8))();
    return;
  }
  param_1[0x2e] = 2;
  if ((*(byte *)(param_1[1] + 0x1a0) & 2) == 0) goto LAB_10015871;
  (*DAT_10121efc)(1,s_DEBUG__env_state___s__triggered__1010474c);
  if (*(int *)(param_1[1] + 0x1c8) == 0) {
    iVar2 = *(int *)(param_1[1] + 0x1ec);
    if (iVar2 != 0) {
      uVar5 = CONCAT44(*(int *)(DAT_10122044 + 0x98) + iVar2,s___firing___s__101047c8);
      goto LAB_10015856;
    }
  }
  else {
    (*DAT_10121efc)(1,s___firing___s__101047c8);
    if (*(int *)(param_1[1] + 0x1ec) != 0) {
      uVar5 = CONCAT44(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1ec),
                       s_and___s__101047bc);
LAB_10015856:
      (*DAT_10121efc)(1,uVar5);
    }
  }
  (*DAT_10121efc)(1);
LAB_10015871:
  FUN_10098c10((uint *)(*(int *)(param_1[1] + 0x1c8) + *(int *)(DAT_10122044 + 0x98)),param_2,
               param_1,1,0);
  FUN_10098c10((uint *)(*(int *)(param_1[1] + 0x1ec) + *(int *)(DAT_10122044 + 0x98)),param_2,
               param_1,3,0);
  FUN_10019680((int)param_1);
  return;
}

