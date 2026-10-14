
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002d8a0(int param_1,float param_2,int param_3,ushort *param_4,int param_5,float *param_6)

{
  int iVar1;
  byte *pbVar2;
  float fVar3;
  byte bVar4;
  short sVar5;
  byte *pbVar6;
  uint uVar7;
  ushort *puVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  
  pfVar11 = param_6;
  pfVar9 = (float *)(param_3 + 0x58);
  param_6 = (float *)0x3;
  puVar8 = param_4;
  do {
    fVar3 = pfVar9[-6];
    *pfVar11 = fVar3;
    if (*puVar8 != 0) {
      pbVar6 = (byte *)((uint)*puVar8 + (int)param_4);
      bVar4 = *pbVar6;
      iVar10 = param_1;
      if (pbVar6[1] < bVar4) {
        iVar10 = 0;
      }
      uVar7 = (uint)pbVar6[1];
      if ((int)uVar7 <= iVar10) {
        do {
          iVar10 = iVar10 - uVar7;
          pbVar2 = pbVar6 + (uint)bVar4 * 2 + 3;
          pbVar6 = pbVar6 + (uint)bVar4 * 2 + 2;
          bVar4 = *pbVar6;
          if (*pbVar2 < bVar4) {
            iVar10 = 0;
          }
          uVar7 = (uint)*pbVar2;
        } while ((int)uVar7 <= iVar10);
      }
      uVar7 = (uint)*pbVar6;
      if (iVar10 < (int)uVar7) {
        iVar1 = iVar10 + 1;
        if (iVar1 < (int)uVar7) {
          *pfVar11 = fVar3 + ((float)(int)*(short *)(pbVar6 + iVar10 * 2 + 4) * param_2 +
                             ((float)_DAT_10059a10 - param_2) *
                             (float)(int)*(short *)(pbVar6 + iVar1 * 2)) * *pfVar9;
        }
        else {
          sVar5 = *(short *)(pbVar6 + iVar1 * 2);
LAB_1002d9b1:
          *pfVar11 = (float)(int)sVar5 * *pfVar9 + fVar3;
        }
      }
      else {
        if (iVar10 + 1 < (int)(uint)pbVar6[1]) {
          sVar5 = *(short *)(pbVar6 + uVar7 * 2);
          goto LAB_1002d9b1;
        }
        *pfVar11 = fVar3 + ((float)(int)*(short *)(pbVar6 + uVar7 * 2 + 4) * param_2 +
                           ((float)_DAT_10059a10 - param_2) *
                           (float)(int)*(short *)(pbVar6 + uVar7 * 2)) * *pfVar9;
      }
    }
    if ((pfVar9[-0xc] != -NAN) && (param_5 != 0)) {
      *pfVar11 = *(float *)(param_5 + (int)pfVar9[-0xc] * 4) + *pfVar11;
    }
    puVar8 = puVar8 + 1;
    pfVar9 = pfVar9 + 1;
    pfVar11 = pfVar11 + 1;
    param_6 = (float *)((int)param_6 + -1);
    if (param_6 == (float *)0x0) {
      return;
    }
  } while( true );
}

