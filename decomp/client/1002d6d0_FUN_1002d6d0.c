
void FUN_1002d6d0(int param_1,float param_2,ushort *param_3,int param_4,int param_5,float *param_6)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  byte *pbVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float afStack_38 [10];
  float afStack_10 [4];
  
  pfVar7 = (float *)((int)param_3 + 0x4c);
  iVar9 = 0;
  param_3 = (ushort *)(param_4 + 6);
  do {
    if (*param_3 == 0) {
      fVar2 = *pfVar7;
      *(float *)((int)afStack_38 + iVar9 + 0xc) = fVar2;
    }
    else {
      pbVar5 = (byte *)((uint)*param_3 + param_4);
      bVar3 = *pbVar5;
      iVar8 = param_1;
      if (pbVar5[1] < bVar3) {
        iVar8 = 0;
      }
      uVar6 = (uint)pbVar5[1];
      if ((int)uVar6 <= iVar8) {
        do {
          iVar8 = iVar8 - uVar6;
          pbVar1 = pbVar5 + (uint)bVar3 * 2 + 3;
          pbVar5 = pbVar5 + (uint)bVar3 * 2 + 2;
          bVar3 = *pbVar5;
          if (*pbVar1 < bVar3) {
            iVar8 = 0;
          }
          uVar6 = (uint)*pbVar1;
        } while ((int)uVar6 <= iVar8);
      }
      if (iVar8 < (int)(uint)*pbVar5) {
        fVar2 = (float)(int)*(short *)(pbVar5 + iVar8 * 2 + 2);
        *(float *)((int)afStack_38 + iVar9 + 0xc) = fVar2;
        if (iVar8 + 1 < (int)(uint)*pbVar5) {
          fVar2 = (float)(int)*(short *)(pbVar5 + iVar8 * 2 + 4);
        }
        else if ((int)(uint)pbVar5[1] <= iVar8 + 1) {
          fVar2 = (float)(int)*(short *)(pbVar5 + (uint)*pbVar5 * 2 + 4);
        }
      }
      else {
        fVar2 = (float)(int)*(short *)(pbVar5 + (uint)*pbVar5 * 2);
        *(float *)((int)afStack_38 + iVar9 + 0xc) = fVar2;
        if ((int)(uint)pbVar5[1] <= iVar8 + 1) {
          fVar2 = (float)(int)*(short *)(pbVar5 + (uint)*pbVar5 * 2 + 4);
        }
      }
      *(float *)((int)afStack_38 + iVar9) = fVar2;
      *(float *)((int)afStack_38 + iVar9 + 0xc) =
           pfVar7[6] * *(float *)((int)afStack_38 + iVar9 + 0xc) + *pfVar7;
      fVar2 = pfVar7[6] * *(float *)((int)afStack_38 + iVar9) + *pfVar7;
    }
    fVar4 = pfVar7[-6];
    *(float *)((int)afStack_38 + iVar9) = fVar2;
    if (fVar4 != -NAN) {
      *(float *)((int)afStack_38 + iVar9 + 0xc) =
           *(float *)((int)afStack_38 + iVar9 + 0xc) + *(float *)(param_5 + (int)fVar4 * 4);
      *(float *)((int)afStack_38 + iVar9) =
           *(float *)(param_5 + (int)fVar4 * 4) + *(float *)((int)afStack_38 + iVar9);
    }
    iVar9 = iVar9 + 4;
    param_3 = param_3 + 1;
    pfVar7 = pfVar7 + 1;
  } while (iVar9 < 0xc);
  iVar9 = FUN_1002ce90((int)(afStack_38 + 3),afStack_38);
  if (iVar9 == 0) {
    FUN_1002d060(afStack_38 + 3,afStack_10);
    FUN_1002d060(afStack_38,afStack_38 + 6);
    FUN_1002d100(afStack_10,afStack_38 + 6,param_2,param_6);
    return;
  }
  FUN_1002d060(afStack_38 + 3,param_6);
  return;
}

