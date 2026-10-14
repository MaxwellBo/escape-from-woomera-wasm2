
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CFuncTrackTrain::NearestPath(void) */

void __thiscall CFuncTrackTrain::NearestPath(CFuncTrackTrain *this)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  char *pcVar13;
  bool bVar14;
  int local_14;
  float local_10;
  
                    /* 0x78800  156  ?NearestPath@CFuncTrackTrain@@QAEXXZ */
  local_14 = 0;
  local_10 = 1024.0;
  iVar10 = FUN_100aeba0(0,*(int *)(this + 4) + 8,0x44800000);
  if (iVar10 != 0) {
    do {
      piVar2 = *(int **)(iVar10 + 4);
      if ((*(byte *)(piVar2 + 0x69) & 0x28) == 0) {
        pcVar13 = s_path_track_101137c0;
        pbVar11 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *piVar2);
        do {
          bVar1 = *pbVar11;
          bVar14 = bVar1 < (byte)*pcVar13;
          if (bVar1 != *pcVar13) {
LAB_10078882:
            iVar12 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_10078887;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar14 = bVar1 < (byte)pcVar13[1];
          if (bVar1 != pcVar13[1]) goto LAB_10078882;
          pbVar11 = pbVar11 + 2;
          pcVar13 = pcVar13 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_10078887:
        if (iVar12 == 0) {
          iVar12 = *(int *)(this + 4);
          fVar4 = *(float *)(iVar12 + 8) - (float)piVar2[2];
          fVar6 = *(float *)(iVar12 + 0xc) - (float)piVar2[3];
          fVar5 = *(float *)(iVar12 + 0x10) - (float)piVar2[4];
          fVar4 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5);
          if (fVar4 < local_10) {
            local_14 = iVar10;
            local_10 = fVar4;
          }
        }
      }
      iVar10 = FUN_100aeba0(iVar10,*(int *)(this + 4) + 8,0x44800000);
    } while (iVar10 != 0);
    if (local_14 != 0) {
      (*DAT_10121efc)(2,s_TRAIN___s__Nearest_track_is__s_10114200,
                      *(int *)(*(int *)(this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                      *(int *)(*(int *)(local_14 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
      iVar10 = FUN_10073950(local_14);
      if (iVar10 != 0) {
        iVar12 = *(int *)(iVar10 + 4);
        iVar3 = *(int *)(this + 4);
        fVar4 = *(float *)(iVar3 + 8) - *(float *)(iVar12 + 8);
        fVar6 = *(float *)(iVar3 + 0xc) - *(float *)(iVar12 + 0xc);
        fVar5 = *(float *)(iVar3 + 0x10) - *(float *)(iVar12 + 0x10);
        iVar12 = *(int *)(local_14 + 4);
        fVar7 = *(float *)(iVar3 + 8) - *(float *)(iVar12 + 8);
        fVar8 = *(float *)(iVar3 + 0xc) - *(float *)(iVar12 + 0xc);
        fVar9 = *(float *)(iVar3 + 0x10) - *(float *)(iVar12 + 0x10);
        if (SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5) <
            SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9)) {
          local_14 = iVar10;
        }
      }
      *(int *)(this + 0xbc) = local_14;
      if (*(float *)(*(int *)(this + 4) + 0x1f8) != _DAT_100dd5f8) {
        FUN_10077160(this,0x3dcccccd,0);
        *(code **)(this + 0x74) = PostponeNext;
      }
      return;
    }
  }
  (*DAT_10121efc)(1,s_Can_t_find_a_nearby_track_____10114220);
  *(undefined4 *)(this + 0x74) = 0;
  return;
}

