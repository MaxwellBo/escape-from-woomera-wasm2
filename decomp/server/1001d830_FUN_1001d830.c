
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1001d830(int param_1)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + 4);
  pfVar3 = (float *)(iVar1 + 0x20);
  if ((float)_DAT_100e0d88 <
      SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
           *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) + *pfVar3 * *pfVar3)) {
    local_10 = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                    *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) + *pfVar3 * *pfVar3);
    if (local_10 == _DAT_100dd5f8) {
      local_14 = 0.0;
      local_10 = 1.0;
      fVar2 = _DAT_100dd5f8;
    }
    else {
      local_10 = _DAT_100dd618 / local_10;
      fVar2 = local_10 * *pfVar3;
      local_14 = local_10 * *(float *)(iVar1 + 0x24);
      local_10 = local_10 * *(float *)(iVar1 + 0x28);
    }
    local_14 = local_14 * _DAT_100e0d84;
    *pfVar3 = fVar2 * _DAT_100e0d84;
    local_10 = local_10 * _DAT_100e0d84;
    *(float *)(iVar1 + 0x24) = local_14;
    *(float *)(iVar1 + 0x28) = local_10;
  }
  return;
}

