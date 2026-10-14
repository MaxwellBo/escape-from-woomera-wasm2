
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_10007fc0(int param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  float10 extraout_ST0;
  float10 extraout_ST1;
  longlong lVar3;
  
  fVar2 = (float10)param_2;
  if (fVar2 == (float10)_DAT_100de1e8) {
    fVar2 = (float10)*DAT_10122044 - (float10)*(float *)(*(int *)(param_1 + 4) + 0x134);
    if (fVar2 <= (float10)_DAT_100de1e0) {
      fVar2 = (float10)_DAT_100dd5f8;
      *(float *)(*(int *)(param_1 + 4) + 0x134) = *DAT_10122044;
      return fVar2;
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x134) == _DAT_100dd5f8) {
    fVar2 = (float10)_DAT_100dd5f8;
  }
  *(float *)(iVar1 + 0x130) =
       (float)((float10)*(float *)(iVar1 + 0x138) * (float10)*(float *)(param_1 + 200) * fVar2 +
              (float10)*(float *)(iVar1 + 0x130));
  *(float *)(*(int *)(param_1 + 4) + 0x134) = *DAT_10122044;
  iVar1 = *(int *)(param_1 + 4);
  if ((*(float *)(iVar1 + 0x130) < (float)_DAT_100de1e8) ||
     ((float)_DAT_100de1d8 <= *(float *)(iVar1 + 0x130))) {
    if (*(int *)(param_1 + 0xd8) != 0) {
      lVar3 = __ftol();
      *(float *)(iVar1 + 0x130) =
           (float)(extraout_ST0 - (float10)(int)lVar3 * (float10)_DAT_100de1d8);
      *(undefined4 *)(param_1 + 0xd4) = 1;
      return extraout_ST1;
    }
    param_2 = 0.0;
    if ((float)_DAT_100de1e8 <= *(float *)(iVar1 + 0x130)) {
      param_2 = 3.57331e-43;
    }
    *(float *)(iVar1 + 0x130) = (float)(int)param_2;
    *(undefined4 *)(param_1 + 0xd4) = 1;
  }
  return fVar2;
}

