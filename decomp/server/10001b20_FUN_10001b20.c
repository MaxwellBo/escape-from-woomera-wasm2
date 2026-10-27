
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10001b20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  for (iVar1 = *(int *)(param_1 + 0x308); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x30c)) {
    if (iVar1 != param_1) {
      iVar2 = *(int *)(param_1 + 4);
      iVar3 = *(int *)(iVar1 + 4);
      fVar6 = *(float *)(iVar2 + 8) - *(float *)(iVar3 + 8);
      fVar4 = *(float *)(iVar2 + 0xc) - *(float *)(iVar3 + 0xc);
      fVar5 = *(float *)(iVar2 + 0x10) - *(float *)(iVar3 + 0x10);
      if (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) <= _DAT_100dd61c) {
        fVar5 = *(float *)(iVar3 + 8) - *(float *)(iVar2 + 8);
        fVar6 = *(float *)(iVar3 + 0xc) - *(float *)(iVar2 + 0xc);
        fVar7 = *(float *)(iVar3 + 0x10) - *(float *)(iVar2 + 0x10);
        fVar4 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
        if (fVar4 == _DAT_100dd5f8) {
          fVar7 = 1.0;
          fVar6 = 0.0;
          fVar4 = 0.0;
        }
        else {
          fVar4 = _DAT_100dd618 / fVar4;
          fVar7 = fVar7 * fVar4;
          fVar6 = fVar6 * fVar4;
          fVar4 = fVar4 * fVar5;
        }
        FUN_10001d60(&local_24,fVar4,fVar6,fVar7);
        iVar2 = *(int *)(iVar1 + 4);
        fVar6 = SQRT(*(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28) +
                     *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                     *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20));
        fVar5 = SQRT(*(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28) +
                     *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                     *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20));
        if (fVar5 == _DAT_100dd5f8) {
          fVar4 = 1.0;
          fVar7 = 0.0;
          fVar5 = 0.0;
        }
        else {
          fVar5 = _DAT_100dd618 / fVar5;
          fVar4 = fVar5 * *(float *)(iVar2 + 0x28);
          fVar7 = fVar5 * *(float *)(iVar2 + 0x24);
          fVar5 = fVar5 * *(float *)(iVar2 + 0x20);
        }
        FUN_10001d60(&local_30,fVar5,fVar7,fVar4);
        iVar2 = *(int *)(iVar1 + 4);
        *(undefined4 *)(iVar2 + 0x20) = local_30;
        *(undefined4 *)(iVar2 + 0x24) = local_2c;
        *(undefined4 *)(iVar2 + 0x28) = local_28;
        iVar2 = *(int *)(iVar1 + 4);
        local_14 = local_20 + *(float *)(iVar2 + 0x24);
        local_10 = local_1c + *(float *)(iVar2 + 0x28);
        fVar5 = local_14 * _DAT_100dd614;
        *(float *)(iVar2 + 0x20) = (local_24 + *(float *)(iVar2 + 0x20)) * _DAT_100dd614;
        fVar4 = local_10 * _DAT_100dd614;
        *(float *)(iVar2 + 0x24) = fVar5;
        *(float *)(iVar2 + 0x28) = fVar4;
        iVar2 = *(int *)(iVar1 + 4);
        FUN_10001d60(&local_c,fVar6 * *(float *)(iVar2 + 0x20),fVar6 * *(float *)(iVar2 + 0x24),
                     fVar6 * *(float *)(iVar2 + 0x28));
        iVar2 = *(int *)(iVar1 + 4);
        *(undefined4 *)(iVar2 + 0x20) = local_c;
        *(undefined4 *)(iVar2 + 0x24) = local_8;
        *(undefined4 *)(iVar2 + 0x28) = local_4;
      }
    }
  }
  return;
}

