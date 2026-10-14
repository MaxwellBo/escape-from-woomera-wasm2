
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_1001faf0(int param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  fVar2 = ((float10)_DAT_100e08f8 /
          ((float10)*(float *)(iVar1 + 0xfc) * (float10)*(float *)(iVar1 + 0xf8) *
          (float10)*(float *)(iVar1 + 0xf4))) * (float10)param_2 * (float10)_DAT_100e08f0;
  if ((float10)_DAT_100e08e8 < fVar2) {
    fVar2 = (float10)_DAT_100e08e0;
  }
  return fVar2;
}

