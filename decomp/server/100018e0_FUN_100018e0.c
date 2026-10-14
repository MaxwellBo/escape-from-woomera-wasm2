
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100018e0(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  fVar2 = (*(float *)(iVar1 + 0x1f8) - *(float *)(iVar1 + 0x1bc)) * _DAT_100dd610;
  *(float *)(iVar1 + 0x1bc) =
       *(float *)(iVar1 + 0x1bc) * (float)_DAT_100dd600 +
       *(float *)(iVar1 + 0x1f8) * (float)_DAT_100dd608;
  if (fVar2 < _DAT_100dd5f8) {
    fVar2 = -fVar2;
  }
  if (fVar2 < (float)_DAT_100dd5f0) {
    fVar2 = _DAT_100dd5e8;
  }
  if ((float)_DAT_100dd5e0 < fVar2) {
    fVar2 = _DAT_100dd5dc;
  }
  *(float *)(*(int *)(param_1 + 4) + 0x138) = fVar2;
  *(float *)(*(int *)(param_1 + 4) + 0x5c) =
       -(fVar2 * _DAT_100dd5d8 + *(float *)(*(int *)(param_1 + 4) + 0x50));
  iVar1 = *(int *)(param_1 + 4);
  *(float *)(iVar1 + 100) = -(*(float *)(iVar1 + 0x60) + *(float *)(iVar1 + 0x58));
  FUN_10007fc0(param_1,0.1);
  return;
}

