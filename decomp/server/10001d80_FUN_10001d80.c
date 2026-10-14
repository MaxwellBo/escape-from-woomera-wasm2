
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10001d80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_14;
  float local_10;
  
  for (iVar1 = *(int *)(param_1 + 0x308); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x30c)) {
    if (iVar1 != param_1) {
      iVar2 = *(int *)(param_1 + 4);
      iVar3 = *(int *)(iVar1 + 4);
      fVar4 = *(float *)(iVar2 + 8) - *(float *)(iVar3 + 8);
      fVar6 = *(float *)(iVar2 + 0xc) - *(float *)(iVar3 + 0xc);
      fVar5 = *(float *)(iVar2 + 0x10) - *(float *)(iVar3 + 0x10);
      if (SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5) <= _DAT_100dd61c) {
        fVar4 = *(float *)(iVar2 + 8) - *(float *)(iVar3 + 8);
        local_14 = *(float *)(iVar2 + 0xc) - *(float *)(iVar3 + 0xc);
        local_10 = *(float *)(iVar2 + 0x10) - *(float *)(iVar3 + 0x10);
        fVar5 = SQRT(fVar4 * fVar4 + local_14 * local_14 + local_10 * local_10);
        if (fVar5 == _DAT_100dd5f8) {
          local_14 = 0.0;
          local_10 = 1.0;
          fVar4 = _DAT_100dd5f8;
        }
        else {
          fVar5 = _DAT_100dd618 / fVar5;
          fVar4 = fVar4 * fVar5;
          local_14 = local_14 * fVar5;
          local_10 = local_10 * fVar5;
        }
        *(float *)(iVar2 + 0x20) = fVar4 + *(float *)(iVar2 + 0x20);
        *(float *)(iVar2 + 0x24) = local_14 + *(float *)(iVar2 + 0x24);
        *(float *)(iVar2 + 0x28) = local_10 + *(float *)(iVar2 + 0x28);
      }
    }
  }
  return;
}

