
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1009c330(int *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float10 extraout_ST0;
  longlong lVar8;
  longlong lVar9;
  
  iVar6 = 0;
  FUN_100b2580(&DAT_10122758,(double)DAT_10122044[1]);
  if (DAT_10121dd0 != 0) {
    FUN_10064a10(param_1);
    return;
  }
  (*DAT_10121eec)();
  pfVar2 = DAT_10122044;
  lVar8 = __ftol();
  iVar3 = DAT_101312f0;
  fVar1 = DAT_10109644;
  if ((extraout_ST0 != (float10)_DAT_100dd5f8) && (extraout_ST0 <= (float10)*pfVar2)) {
    (**(code **)(*param_1 + 0xf4))();
    return;
  }
  if (DAT_10109644 != _DAT_100dd5f8) {
    iVar7 = 0;
    iVar6 = 9999;
    if (0 < DAT_101312f0) {
      piVar5 = &DAT_10131268;
      do {
        if (fVar1 <= (float)*piVar5) {
          (**(code **)(*param_1 + 0xf4))();
          return;
        }
        lVar9 = __ftol();
        if ((int)lVar9 < iVar6) {
          iVar6 = (int)lVar9;
        }
        iVar7 = iVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar7 < iVar3);
    }
  }
  if (iVar6 != DAT_101312ec) {
    puVar4 = FUN_100affd0(&DAT_10111ba0);
    (*DAT_1012202c)(&PTR_s_mp_fragsleft_101095f0,puVar4);
  }
  if ((float)_DAT_101312e8 != _DAT_10109614) {
    puVar4 = FUN_100affd0(&DAT_10111ba0);
    (*DAT_1012202c)(&PTR_s_mp_timeleft_10109608,puVar4);
  }
  DAT_101312ec = iVar6;
  _DAT_101312e8 = (int)lVar8;
  return;
}

