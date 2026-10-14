
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10064a10(int *param_1)

{
  float fVar1;
  float *pfVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 extraout_ST0;
  longlong lVar7;
  longlong lVar8;
  
  FUN_100b2580(&DAT_10122758,(double)DAT_10122044[1]);
  pfVar2 = DAT_10122044;
  fVar1 = DAT_10109644;
  iVar5 = 0;
  if (DAT_10121dd0 == 0) {
    lVar7 = __ftol();
    if ((extraout_ST0 != (float10)_DAT_100dd5f8) && (extraout_ST0 <= (float10)*pfVar2)) {
LAB_10064b30:
      (**(code **)(*param_1 + 0xf4))();
      return;
    }
    if (fVar1 != _DAT_100dd5f8) {
      iVar6 = 1;
      iVar5 = 9999;
      if (0 < (int)pfVar2[0x24]) {
        do {
          iVar4 = FUN_100af1c0(iVar6);
          if (iVar4 != 0) {
            if (fVar1 <= *(float *)(*(int *)(iVar4 + 4) + 0x164)) goto LAB_10064b30;
            lVar8 = __ftol();
            if ((int)lVar8 < iVar5) {
              iVar5 = (int)lVar8;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 <= (int)DAT_10122044[0x24]);
      }
    }
    if (iVar5 != DAT_10122754) {
      puVar3 = FUN_100affd0(&DAT_10111ba0);
      (*DAT_1012202c)(&PTR_s_mp_fragsleft_101095f0,puVar3);
    }
    iVar6 = (int)lVar7;
    if ((float)_DAT_10122074 != _DAT_10109614) {
      puVar3 = FUN_100affd0(&DAT_10111ba0);
      (*DAT_1012202c)(&PTR_s_mp_timeleft_10109608,puVar3);
    }
  }
  else {
    (*DAT_10121eec)();
    lVar7 = __ftol();
    if ((int)lVar7 < 10) {
      (*DAT_10121ef8)(s_mp_chattime_1010c3a0,&DAT_1010c39c);
    }
    else if (0x78 < (int)lVar7) {
      puVar3 = FUN_100afb00();
      (*DAT_10121ef8)(s_mp_chattime_1010c3a0,puVar3);
    }
    fVar1 = _DAT_101097ac + _DAT_10122778;
    param_1[1] = (int)fVar1;
    iVar6 = _DAT_10122074;
    iVar5 = DAT_10122754;
    if ((fVar1 < *DAT_10122044) &&
       ((param_1[2] != 0 || (_DAT_10122778 + _DAT_100e4124 < *DAT_10122044)))) {
      (**(code **)(*param_1 + 0xf0))();
      return;
    }
  }
  DAT_10122754 = iVar5;
  _DAT_10122074 = iVar6;
  return;
}

