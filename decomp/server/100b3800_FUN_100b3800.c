
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100b3800(int *param_1)

{
  int *piVar1;
  uint uVar2;
  double dVar3;
  int iVar4;
  float10 fVar5;
  
  if ((param_1[0x46] != 0) &&
     (iVar4 = param_1[0x37], fVar5 = FUN_100ae400(), (float10)*(float *)(iVar4 + 700) <= fVar5)) {
    piVar1 = (int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
    iVar4 = *(int *)(&DAT_10131e34 + param_1[0x39] * 0x2c) - param_1[0x43];
    if (*piVar1 <= iVar4) {
      iVar4 = *piVar1;
    }
    param_1[0x43] = param_1[0x43] + iVar4;
    *piVar1 = *piVar1 - iVar4;
    FUN_1007c980((void *)param_1[0x37]);
    param_1[0x46] = 0;
  }
  if ((*(uint *)(*(int *)(param_1[0x37] + 4) + 0x180) & 0x800) == 0) {
LAB_100b3945:
    if ((*(byte *)(*(int *)(param_1[0x37] + 4) + 0x180) & 1) != 0) {
      iVar4 = (**(code **)(*param_1 + 0x19c))();
      iVar4 = FUN_100b37c0((float)param_1[0x3e],*DAT_10122044,iVar4);
      if (iVar4 != 0) {
        if (((param_1[0x43] == 0) && ((&DAT_10131e20)[param_1[0x39] * 0xb] != 0)) ||
           ((*(int *)(&DAT_10131e34 + param_1[0x39] * 0x2c) == -1 &&
            (iVar4 = (**(code **)(*param_1 + 0x150))(),
            *(int *)(param_1[0x37] + 0x534 + iVar4 * 4) == 0)))) {
          param_1[0x3b] = 1;
        }
        FUN_1007c980((void *)param_1[0x37]);
        (**(code **)(*param_1 + 0x184))();
        goto LAB_100b392a;
      }
    }
    uVar2 = *(uint *)(*(int *)(param_1[0x37] + 4) + 0x180);
    if ((((uVar2 & 0x2000) == 0) || (*(int *)(&DAT_10131e34 + param_1[0x39] * 0x2c) == -1)) ||
       (param_1[0x46] != 0)) {
      if ((uVar2 & 0x801) == 0) {
        param_1[0x3b] = 0;
        iVar4 = (**(code **)(*param_1 + 0x180))();
        if (iVar4 == 0) {
          iVar4 = (**(code **)(*param_1 + 0x19c))();
          dVar3 = _DAT_100de1e8;
          if (iVar4 == 0) {
            dVar3 = (double)*DAT_10122044;
          }
          if ((double)(float)param_1[0x3e] < dVar3) {
            if (((*(byte *)(&DAT_10131e3c + param_1[0x39] * 0xb) & 4) == 0) &&
               (iVar4 = (**(code **)(*DAT_10121db8 + 0x14))(param_1[0x37],param_1), iVar4 != 0)) {
              iVar4 = (**(code **)(*param_1 + 0x19c))();
              if (iVar4 != 0) {
                param_1[0x3e] = (int)(float)((float10)_DAT_100de1e8 + (float10)_DAT_100e0eb8);
                return;
              }
              param_1[0x3e] = (int)(*DAT_10122044 + (float)_DAT_100e0eb8);
              return;
            }
            goto LAB_100b3938;
          }
        }
        if ((param_1[0x43] == 0) && ((*(byte *)(&DAT_10131e3c + param_1[0x39] * 0xb) & 2) == 0)) {
          iVar4 = (**(code **)(*param_1 + 0x19c))();
          dVar3 = _DAT_100de1e8;
          if (iVar4 == 0) {
            dVar3 = (double)*DAT_10122044;
          }
          if ((double)(float)param_1[0x3e] < dVar3) {
            (**(code **)(*param_1 + 0x18c))();
            return;
          }
        }
        goto LAB_100b3938;
      }
    }
    else {
      (**(code **)(*param_1 + 0x18c))();
    }
  }
  else {
    iVar4 = (**(code **)(*param_1 + 0x19c))();
    iVar4 = FUN_100b37c0((float)param_1[0x3f],*DAT_10122044,iVar4);
    if (iVar4 == 0) goto LAB_100b3945;
    if (((&DAT_10131e28)[param_1[0x39] * 0xb] != 0) &&
       (iVar4 = (**(code **)(*param_1 + 0x154))(), *(int *)(param_1[0x37] + 0x534 + iVar4 * 4) == 0)
       ) {
      param_1[0x3b] = 1;
    }
    FUN_1007c980((void *)param_1[0x37]);
    (**(code **)(*param_1 + 0x188))();
    *(uint *)(*(int *)(param_1[0x37] + 4) + 0x180) =
         *(uint *)(*(int *)(param_1[0x37] + 4) + 0x180) & 0xfffff7ff;
  }
LAB_100b392a:
  iVar4 = (**(code **)(*param_1 + 0x198))();
  if (iVar4 == 0) {
    return;
  }
LAB_100b3938:
  (**(code **)(*param_1 + 400))();
  return;
}

