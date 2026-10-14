
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002dbe0(int param_1,int *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  fVar1 = (float)(int)lVar2;
  *param_2 = (int)lVar2;
  if (fVar1 < *(float *)(param_1 + 0x88)) {
    *param_3 = *param_3 - *(float *)(param_1 + 0x88) * (float)_DAT_10060338;
    *param_2 = 0;
    return;
  }
  if (*(float *)(param_1 + 0x90) < fVar1) {
    *param_3 = *param_3 - *(float *)(param_1 + 0x90) * (float)_DAT_10060338;
    *param_2 = 0xff;
    return;
  }
  if (*(float *)(param_1 + 0x90) - *(float *)(param_1 + 0x88) < (float)_DAT_10059ea8) {
    *param_2 = 0x7f;
    *param_3 = 0.0;
    return;
  }
  lVar2 = __ftol();
  *param_2 = (int)lVar2;
  *param_3 = 0.0;
  return;
}

