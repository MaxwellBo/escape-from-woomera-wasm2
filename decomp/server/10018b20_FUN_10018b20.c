
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10018b20(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  
  if ((param_1 != 0) && (piVar2 = *(int **)(param_1 + 0x7c), piVar2 != (int *)0x0)) {
    iVar3 = piVar2[1];
    fVar4 = *(float *)(iVar3 + 0xc) - _DAT_100dd618;
    fVar5 = *(float *)(iVar3 + 0x10) - _DAT_100dd618;
    *(float *)(iVar3 + 0xc4) = *(float *)(iVar3 + 8) - _DAT_100dd618;
    *(float *)(iVar3 + 200) = fVar4;
    *(float *)(iVar3 + 0xcc) = fVar5;
    iVar3 = piVar2[1];
    fVar4 = *(float *)(iVar3 + 0xc) + _DAT_100dd618;
    fVar5 = *(float *)(iVar3 + 0x10) + _DAT_100dd618;
    *(float *)(iVar3 + 0xd0) = *(float *)(iVar3 + 8) + _DAT_100dd618;
    *(float *)(iVar3 + 0xd4) = fVar4;
    *(float *)(iVar3 + 0xd8) = fVar5;
    (**(code **)(*piVar2 + 0x28))();
    iVar3 = *(int *)(param_1 + 0x7c);
    if (iVar3 != 0) {
      if (DAT_10121db8 != (int *)0x0) {
        iVar6 = (**(code **)(*DAT_10121db8 + 8))(iVar3);
        if (iVar6 == 0) {
          return 0xffffffff;
        }
      }
      if ((*(uint *)(*(int *)(iVar3 + 4) + 0x1a4) & 0x40000000) != 0) {
        return 0xffffffff;
      }
      if (DAT_10121df0 == 1) {
        if ((*(byte *)(iVar3 + 0x5c) & 1) != 0) {
          return 0xffffffff;
        }
      }
      else if (DAT_10121df0 == 2) {
        if ((*(byte *)(iVar3 + 0x5c) & 2) != 0) {
          return 0xffffffff;
        }
      }
      else if ((DAT_10121df0 == 3) && ((*(byte *)(iVar3 + 0x5c) & 4) != 0)) {
        return 0xffffffff;
      }
      iVar6 = *(int *)(*(int *)(iVar3 + 4) + 4);
      if (iVar6 != 0) {
        iVar6 = FUN_100b5a40(&DAT_101323a8,iVar6);
        if (iVar6 == 0) {
          FUN_100b5980(&DAT_101323a8,*(int *)(*(int *)(iVar3 + 4) + 4),*(int *)(DAT_10122044 + 0xc),
                       1);
        }
        else {
          if (*(int *)(iVar6 + 0x60) == 2) {
            return 0xffffffff;
          }
          pbVar8 = (byte *)(iVar6 + 0x40);
          pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(DAT_10122044 + 0xc));
          do {
            bVar1 = *pbVar7;
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_10018cb5:
              iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_10018cba;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_10018cb5;
            pbVar7 = pbVar7 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_10018cba:
          if (iVar6 != 0) {
            FUN_10019fe0(iVar3);
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

