
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_100522f0(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = FUN_100ae770(*(float *)(*(int *)(param_1 + 4) + 0x58));
  fVar1 = (float)fVar3;
  iVar2 = *(int *)(param_1 + 4);
  if (fVar1 == *(float *)(iVar2 + 0xa4)) {
    return (float10)_DAT_100dd5f8;
  }
  fVar3 = (float10)*(float *)(iVar2 + 0xa4) - (float10)fVar1;
  if (*(float *)(iVar2 + 0xa4) <= fVar1) {
    if (fVar3 <= (float10)_DAT_100de530) {
      fVar3 = fVar3 + (float10)_DAT_100ddae8;
    }
  }
  else if ((float10)_DAT_100ddaec <= fVar3) {
    return fVar3 - (float10)_DAT_100ddae8;
  }
  return fVar3;
}

