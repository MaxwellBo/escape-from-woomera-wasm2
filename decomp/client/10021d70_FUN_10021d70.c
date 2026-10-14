
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10021d70(float param_1,float param_2)

{
  uint uVar1;
  float10 fVar2;
  float10 extraout_ST0;
  longlong lVar3;
  
  fVar2 = (float10)param_1;
  if (fVar2 != (float10)param_2) {
    lVar3 = __ftol();
    uVar1 = (int)(uint)lVar3 >> 0x1f;
    fVar2 = extraout_ST0;
    if (_DAT_10060168 < (double)(int)(((uint)lVar3 ^ uVar1) - uVar1)) {
      if ((float10)param_2 <= extraout_ST0) {
        fVar2 = extraout_ST0 - (float10)_DAT_10060160;
      }
      else {
        fVar2 = extraout_ST0 + (float10)_DAT_10060160;
      }
    }
    if ((float10)param_2 <= fVar2) {
      if ((float10)param_2 + (float10)_DAT_10059a10 < fVar2) {
        fVar2 = fVar2 - (fVar2 - (float10)param_2) * (float10)_DAT_10059cf0;
        goto LAB_10021e1a;
      }
    }
    else if (fVar2 < (float10)param_2 - (float10)_DAT_10059a10) {
      fVar2 = fVar2 + ((float10)param_2 - fVar2) * (float10)_DAT_10059cf0;
      goto LAB_10021e1a;
    }
    fVar2 = (float10)param_2;
  }
LAB_10021e1a:
  if (fVar2 < (float10)_DAT_10059a18) {
    return fVar2 + (float10)_DAT_10060160;
  }
  if ((float10)_DAT_1006015c <= fVar2) {
    fVar2 = fVar2 - (float10)_DAT_1006015c;
  }
  return fVar2;
}

