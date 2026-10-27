
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10008ca0(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    return (float10)param_4;
  }
  iVar3 = *(int *)(param_1 + 0x98) + param_1;
  iVar2 = *(int *)(param_1 + 0x94);
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)(iVar3 + 0x14) == param_3) break;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar1 < iVar2);
  }
  if (iVar1 < iVar2) {
    if ((*(byte *)(iVar3 + 4) & 0x38) != 0) {
      if (*(float *)(iVar3 + 0xc) < *(float *)(iVar3 + 8)) {
        param_4 = -param_4;
      }
      if (*(float *)(iVar3 + 8) + (float)_DAT_100de228 < *(float *)(iVar3 + 0xc)) {
        if (param_4 <= _DAT_100ddae8) {
          if (param_4 < _DAT_100dd5f8) {
            __ftol();
          }
        }
        else {
          __ftol();
        }
      }
    }
    lVar4 = __ftol();
    iVar2 = (int)lVar4;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0xff < iVar2) {
      iVar2 = 0xff;
    }
    *(char *)(param_2 + 0x13c + param_3) = (char)iVar2;
    return ((float10)*(float *)(iVar3 + 0xc) - (float10)*(float *)(iVar3 + 8)) * (float10)iVar2 *
           (float10)_DAT_100de200 + (float10)*(float *)(iVar3 + 8);
  }
  return (float10)param_4;
}

