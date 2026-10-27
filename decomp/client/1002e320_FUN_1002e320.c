
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_1002e320(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 extraout_ST0;
  longlong lVar4;
  
  if ((*(int *)(param_1 + 0x18) == 0) ||
     (iVar1 = *(int *)(param_1 + 0x30), (float)*(double *)(param_1 + 8) < *(float *)(iVar1 + 0x30c))
     ) {
    fVar2 = (float10)_DAT_1005d2a8;
  }
  else {
    fVar2 = ((float10)*(double *)(param_1 + 8) - (float10)*(float *)(iVar1 + 0x30c)) *
            (float10)*(float *)(iVar1 + 0x310) * (float10)*(float *)(param_2 + 0x20);
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 < 2) {
    fVar3 = (float10)_DAT_1005d2a8;
  }
  else {
    fVar3 = (float10)(iVar1 + -1) * (float10)*(float *)(*(int *)(param_1 + 0x30) + 0x2e0) *
            (float10)_DAT_10060358;
  }
  fVar3 = fVar3 + fVar2;
  if ((*(byte *)(param_2 + 0x24) & 1) == 0) {
    if ((float10)((double)iVar1 - _DAT_10060350) <= fVar3) {
      fVar3 = (float10)((double)iVar1 - _DAT_10060350);
    }
    if (fVar3 < (float10)_DAT_1005d2a8) {
      fVar3 = (float10)_DAT_1005d2a8;
    }
  }
  else {
    if (1 < iVar1) {
      lVar4 = __ftol();
      fVar3 = extraout_ST0 - (float10)((int)lVar4 * (iVar1 + -1));
    }
    if (fVar3 < (float10)_DAT_1005d2a8) {
      return (float10)(iVar1 + -1) + fVar3;
    }
  }
  return fVar3;
}

