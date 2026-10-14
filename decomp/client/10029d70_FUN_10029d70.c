
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10029d70(void)

{
  ushort uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  
  uVar1 = *(ushort *)(DAT_100acc38 + 0x45476);
  uVar2 = *(uint *)(DAT_100acc38 + 200);
  if ((uVar1 & 4) == 0) {
    uVar6 = uVar2 & 0xfffffffb;
  }
  else {
    uVar6 = uVar2 | 4;
  }
  *(uint *)(DAT_100acc38 + 200) = uVar6;
  if ((*(int *)(DAT_100acc38 + 0x204) == 0) && (*(int *)(DAT_100acc38 + 0xd0) == 0)) {
    if ((*(uint *)(DAT_100acc38 + 0xb8) & 0x4000) != 0) {
      *(float *)(DAT_100acc38 + 0x45468) = *(float *)(DAT_100acc38 + 0x45468) * (float)_DAT_10060258
      ;
      *(float *)(DAT_100acc38 + 0x4546c) = *(float *)(DAT_100acc38 + 0x4546c) * (float)_DAT_10060258
      ;
      *(float *)(DAT_100acc38 + 0x45470) = *(float *)(DAT_100acc38 + 0x45470) * (float)_DAT_10060258
      ;
    }
    uVar5 = *(ushort *)(DAT_100acc38 + 0x45476) & 4;
    if (((uVar5 != 0) || (*(int *)(DAT_100acc38 + 0x90) != 0)) ||
       ((*(uint *)(DAT_100acc38 + 0xb8) & 0x4000) != 0)) {
      if (uVar5 == 0) goto LAB_10029f9f;
      if ((((uVar2 ^ uVar1) & (uint)uVar1 & 4) != 0) &&
         ((*(uint *)(DAT_100acc38 + 0xb8) & 0x4000) == 0)) {
        *(undefined4 *)(DAT_100acc38 + 0x8c) = 0x447a0000;
        *(undefined4 *)(DAT_100acc38 + 0x90) = 1;
      }
      fVar3 = *(float *)(DAT_100acc38 + 0x8c) * (float)_DAT_1005d2c0;
      fVar4 = (float)_DAT_10059a10 - fVar3;
      if (fVar4 < (float)_DAT_1005d2a8) {
        fVar4 = (float)_DAT_1005d2a8;
      }
      if (*(int *)(DAT_100acc38 + 0x90) != 0) {
        if ((_DAT_1005d2d0 < (double)fVar3) && (*(int *)(DAT_100acc38 + 0xe0) != -1)) {
          fVar9 = FUN_10029b50(fVar4,2.5);
          *(float *)(DAT_100acc38 + 0x88) =
               (float)(fVar9 * (float10)_DAT_10060250 +
                      ((float10)_DAT_10059eb0 - fVar9) * (float10)_DAT_1005c368);
          return;
        }
        *(undefined4 *)(DAT_100acc38 + 0xbc) = 1;
        *(undefined4 *)(DAT_100acc38 + 0x88) = 0x41400000;
        *(uint *)(DAT_100acc38 + 0xb8) = *(uint *)(DAT_100acc38 + 0xb8) | 0x4000;
        *(undefined4 *)(DAT_100acc38 + 0x90) = 0;
        if (*(int *)(DAT_100acc38 + 0xe0) != -1) {
          iVar7 = 0x38;
          do {
            iVar8 = iVar7 + 4;
            *(float *)(iVar7 + DAT_100acc38) =
                 *(float *)(iVar7 + DAT_100acc38) -
                 (*(float *)(iVar7 + 0x4f4c8 + DAT_100acc38) -
                 *(float *)(iVar7 + 0x4f4bc + DAT_100acc38));
            iVar7 = iVar8;
          } while (iVar8 < 0x44);
          FUN_10029b70(1);
          FUN_10028df0();
          return;
        }
      }
    }
  }
  else if ((*(uint *)(DAT_100acc38 + 0xb8) & 0x4000) != 0) {
LAB_10029f9f:
    FUN_10029c10();
    return;
  }
  return;
}

