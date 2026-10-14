
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_1002dfe0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)_DAT_10059eb0;
  if (((*(int *)(param_1 + 0x18) != 0) &&
      (iVar1 = *(int *)(param_1 + 0x30),
      *(float *)(iVar1 + 0xb10) + (float)_DAT_1005ac78 <= *(float *)(iVar1 + 0x30c))) &&
     (fVar2 = ((float10)*(double *)(param_1 + 8) - (float10)*(float *)(iVar1 + 0x30c)) *
              (float10)_DAT_1005acb8, (float10)_DAT_10059ec0 < fVar2)) {
    fVar2 = (float10)_DAT_10059ea0;
  }
  return fVar2;
}

