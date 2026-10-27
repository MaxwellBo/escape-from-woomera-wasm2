
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1003fb80(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  longlong lVar4;
  
  if ((*(int *)(param_1 + 0x4c) != 0) || (DAT_100b6fec != 0)) {
    return (float10)_DAT_10059a18;
  }
  if ((*(int *)(param_1 + 0x50) != -1) && (*(float *)(param_1 + 0x40) != _DAT_100b6744)) {
    _DAT_100b6744 = *(float *)(param_1 + 0x40);
    iVar2 = FUN_10047670(6);
    iVar1 = DAT_100b6fc4;
    if (iVar2 == 0) {
      _DAT_100b6fd0 = (double)(*(float *)(param_1 + 0x3c) + (float)_DAT_100b6fd0);
    }
    lVar4 = __ftol();
    fVar3 = ((float10)_DAT_100b6fd0 - (float10)(int)lVar4 * (float10)*(float *)(iVar1 + 0xc)) /
            (float10)*(float *)(iVar1 + 0xc);
    if ((float10)*(float *)(DAT_100b781c + 0xc) <= fVar3) {
      fVar3 = ((fVar3 - (float10)*(float *)(DAT_100b781c + 0xc)) * (float10)_DAT_10064d00) /
              ((float10)_DAT_10059a10 - (float10)*(float *)(DAT_100b781c + 0xc)) +
              (float10)_DAT_10064d00;
    }
    else {
      fVar3 = (fVar3 * (float10)_DAT_10064d00) / (float10)*(float *)(DAT_100b781c + 0xc);
    }
    fVar3 = (float10)fsin(fVar3);
    fVar3 = (fVar3 * (float10)_DAT_1005d770 + (float10)_DAT_1005ac70) *
            SQRT((float10)*(float *)(param_1 + 0x58) * (float10)*(float *)(param_1 + 0x58) +
                 (float10)*(float *)(param_1 + 0x5c) * (float10)*(float *)(param_1 + 0x5c)) *
            (float10)*(float *)(DAT_100b780c + 0xc);
    _DAT_100b6748 = (float)fVar3;
    if ((float10)_DAT_1005acc8 <= fVar3) {
      _DAT_100b6748 = 4.0;
      return (float10)4.0;
    }
    if (_DAT_100b6748 <= _DAT_10064cfc) {
      _DAT_100b6748 = -7.0;
    }
  }
  return (float10)_DAT_100b6748;
}

