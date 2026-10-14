
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1001d690(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  longlong lVar6;
  
  for (piVar1 = (int *)*param_1; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((*(byte *)((int *)*piVar1 + 4) & 1) != 0) {
      (**(code **)(*(int *)*piVar1 + 0x10))();
    }
  }
  FUN_1001c420();
  lVar6 = __ftol();
  iVar2 = (int)lVar6;
  iVar3 = iVar2;
  if (iVar2 == 0) {
    lVar6 = __ftol();
    iVar3 = (int)lVar6;
  }
  param_1[0x16] = iVar3;
  pfVar4 = (float *)(param_1[0x1f] + 0xc);
  if ((float)(int)param_1[0x16] == *pfVar4) {
    param_1[6] = 0;
  }
  else {
    pfVar4 = (float *)(param_1[0x1f] + 0xc);
    fVar5 = (float10)(*DAT_1007efb4)(s_zoom_sensitivity_ratio_10078614);
    param_1[6] = (float)(((float10)iVar2 / (float10)*pfVar4) * fVar5 *
                        (float10)*(float *)(DAT_100a9ac4 + 0xc));
  }
  if (param_1[0x16] == 0) {
    if (_DAT_1005afb0 < *pfVar4) {
      lVar6 = __ftol();
      param_1[0x16] = (int)lVar6;
      return;
    }
    lVar6 = __ftol();
    param_1[0x16] = (int)lVar6;
  }
  return;
}

