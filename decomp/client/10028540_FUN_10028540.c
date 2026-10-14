
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10028540(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44 [4];
  float fStack_34;
  
  iVar5 = DAT_100acc38;
  if (*(float *)(DAT_100acc38 + 0xcc) == _DAT_10059a18) {
    pfVar1 = (float *)(DAT_100acc38 + 0x5c);
    fVar3 = SQRT(*(float *)(DAT_100acc38 + 100) * *(float *)(DAT_100acc38 + 100) +
                 *(float *)(DAT_100acc38 + 0x60) * *(float *)(DAT_100acc38 + 0x60) +
                 *(float *)(DAT_100acc38 + 0x5c) * *(float *)(DAT_100acc38 + 0x5c));
    if (_DAT_10059e9c <= fVar3) {
      fVar4 = _DAT_10059a18;
      if (*(int *)(DAT_100acc38 + 0xe0) != -1) {
        local_5c = (*pfVar1 / fVar3) * _DAT_1005a184 + *(float *)(DAT_100acc38 + 0x38);
        local_58 = (*(float *)(DAT_100acc38 + 0x60) / fVar3) * _DAT_1005a184 +
                   *(float *)(DAT_100acc38 + 0x3c);
        local_54 = *(float *)(DAT_100acc38 + 0x4f4fc + *(int *)(DAT_100acc38 + 0xbc) * 0xc) +
                   *(float *)(DAT_100acc38 + 0x40);
        local_48 = local_54 - _DAT_10060228;
        local_50 = local_5c;
        local_4c = local_58;
        puVar6 = (undefined4 *)
                 (**(code **)(DAT_100acc38 + 0x4f580))(local_44,&local_5c,&local_50,0,0xffffffff);
        puVar8 = local_44;
        for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        iVar7 = *(int *)(DAT_100acc38 + 0x4f4f0);
        if (fStack_34 == (float)_DAT_10059a10) {
          fVar4 = *(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x1c);
        }
        else {
          fVar4 = *(float *)(iVar7 + 0x1c);
        }
        fVar2 = fVar3;
        if (fVar3 < *(float *)(iVar7 + 4)) {
          fVar2 = *(float *)(iVar7 + 4);
        }
        fVar4 = fVar2 * *(float *)(DAT_100acc38 + 0x10) * fVar4 * *(float *)(DAT_100acc38 + 0xc4);
      }
      fVar2 = fVar3 - fVar4;
      if (fVar3 - fVar4 < _DAT_10059a18) {
        fVar2 = _DAT_10059a18;
      }
      fVar2 = fVar2 / fVar3;
      fVar3 = *(float *)(iVar5 + 0x60);
      fVar4 = *(float *)(iVar5 + 100);
      *(float *)(DAT_100acc38 + 0x5c) = fVar2 * *pfVar1;
      *(float *)(DAT_100acc38 + 0x60) = fVar2 * fVar3;
      *(float *)(DAT_100acc38 + 100) = fVar2 * fVar4;
    }
  }
  return;
}

