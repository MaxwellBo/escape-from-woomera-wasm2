
void __fastcall FUN_1006fa50(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  int local_4;
  
  if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
    FUN_100c8cf1(*(undefined **)(param_1 + 0x24));
  }
  piVar8 = FUN_100c8dda(0x10,*(int *)(param_1 + 0x18));
  *(int **)(param_1 + 0x24) = piVar8;
  if (piVar8 != (int *)0x0) {
    puVar9 = (undefined4 *)(param_1 + 0x1870);
    iVar11 = 3;
    do {
      puVar9[-3] = 0x4e6e6b28;
      *puVar9 = 0xce6e6b28;
      puVar9 = puVar9 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    iVar11 = *(int *)(param_1 + 0x18);
    if (0 < iVar11) {
      pfVar12 = *(float **)(param_1 + 0xc);
      iVar15 = iVar11;
      do {
        if (*pfVar12 < *(float *)(param_1 + 0x1864)) {
          *(float *)(param_1 + 0x1864) = *pfVar12;
        }
        if (pfVar12[1] < *(float *)(param_1 + 0x1868)) {
          *(float *)(param_1 + 0x1868) = pfVar12[1];
        }
        if (pfVar12[2] < *(float *)(param_1 + 0x186c)) {
          *(float *)(param_1 + 0x186c) = pfVar12[2];
        }
        if (*(float *)(param_1 + 0x1870) < *pfVar12) {
          *(float *)(param_1 + 0x1870) = *pfVar12;
        }
        if (*(float *)(param_1 + 0x1874) < pfVar12[1]) {
          *(float *)(param_1 + 0x1874) = pfVar12[1];
        }
        if (*(float *)(param_1 + 0x1878) < pfVar12[2]) {
          *(float *)(param_1 + 0x1878) = pfVar12[2];
        }
        pfVar12 = pfVar12 + 0x16;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    local_1c = 0;
    if (0 < iVar11) {
      iVar11 = 0;
      do {
        lVar16 = __ftol();
        iVar15 = *(int *)(param_1 + 0xc);
        lVar17 = __ftol();
        lVar18 = __ftol();
        *(char *)(iVar15 + iVar11 + 0x18) =
             (char)((((int)lVar17 - (int)lVar16) * 0x100) / (((int)lVar18 - (int)lVar16) + 1));
        lVar16 = __ftol();
        iVar15 = *(int *)(param_1 + 0xc);
        lVar17 = __ftol();
        lVar18 = __ftol();
        *(char *)(iVar15 + iVar11 + 0x19) =
             (char)((((int)lVar17 - (int)lVar16) * 0x100) / (((int)lVar18 - (int)lVar16) + 1));
        lVar16 = __ftol();
        iVar15 = *(int *)(param_1 + 0xc) + iVar11;
        lVar17 = __ftol();
        lVar18 = __ftol();
        iVar11 = iVar11 + 0x58;
        *(char *)(iVar15 + 0x1a) =
             (char)((((int)lVar17 - (int)lVar16) * 0x100) / (((int)lVar18 - (int)lVar16) + 1));
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(param_1 + 0x18));
    }
    local_1c = 0;
    do {
      iVar11 = 0x100;
      puVar9 = (undefined4 *)(local_1c * 0x400 + 0xc28 + param_1);
      do {
        puVar9[-0x300] = 0xff;
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      iVar11 = 0;
      if (0 < *(int *)(param_1 + 0x18)) {
        iVar15 = local_1c * 4;
        do {
          *(int *)(iVar15 + *(int *)(param_1 + 0x24)) = iVar11;
          iVar11 = iVar11 + 1;
          iVar15 = iVar15 + 0x10;
        } while (iVar11 < *(int *)(param_1 + 0x18));
      }
      if (0 < *(int *)(param_1 + 0x18) + -1) {
        iVar11 = local_1c * 4;
        local_4 = 1;
        do {
          iVar15 = *(int *)(*(int *)(param_1 + 0x24) + iVar11);
          uVar14 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 0x1a + iVar15 * 0x58);
          iVar15 = *(int *)(param_1 + 0xc) + iVar15 * 0x58;
          uVar10 = (uint)*(byte *)(iVar15 + 0x18);
          uVar13 = (uint)*(byte *)(iVar15 + 0x19);
          if (local_1c == 0) {
            local_10 = (uVar10 * 0x100 + uVar13) * 0x100 + uVar14;
          }
          else if (local_1c == 1) {
            local_10 = (uVar13 * 0x100 + uVar14) * 0x100 + uVar10;
          }
          else if (local_1c == 2) {
            local_10 = (uVar14 * 0x100 + uVar10) * 0x100 + uVar13;
          }
          local_8 = local_4;
          local_18 = iVar11;
          if (local_4 < *(int *)(param_1 + 0x18)) {
            do {
              local_18 = local_18 + 0x10;
              iVar4 = *(int *)(param_1 + 0x24);
              iVar5 = *(int *)(iVar4 + local_18);
              bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 0x18 + iVar5 * 0x58);
              iVar15 = *(int *)(param_1 + 0xc) + iVar5 * 0x58;
              bVar2 = *(byte *)(iVar15 + 0x19);
              bVar3 = *(byte *)(iVar15 + 0x1a);
              if (local_1c == 0) {
                local_14 = (uint)CONCAT11(bVar1,bVar2) * 0x100 + (uint)bVar3;
              }
              else if (local_1c == 1) {
                local_14 = (uint)CONCAT11(bVar2,bVar3) * 0x100 + (uint)bVar1;
              }
              else if (local_1c == 2) {
                local_14 = (uint)CONCAT11(bVar3,bVar1) * 0x100 + (uint)bVar2;
              }
              if (local_14 < local_10) {
                uVar6 = *(undefined4 *)(iVar4 + iVar11);
                *(int *)(iVar4 + iVar11) = iVar5;
                *(undefined4 *)(local_18 + *(int *)(param_1 + 0x24)) = uVar6;
              }
              local_8 = local_8 + 1;
            } while (local_8 < *(int *)(param_1 + 0x18));
          }
          iVar11 = iVar11 + 0x10;
          bVar7 = local_4 < *(int *)(param_1 + 0x18) + -1;
          local_4 = local_4 + 1;
        } while (bVar7);
      }
      local_1c = local_1c + 1;
    } while (local_1c < 3);
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      local_4 = 0;
      do {
        iVar15 = *(int *)(param_1 + 0xc);
        piVar8 = (int *)(local_4 + *(int *)(param_1 + 0x24));
        uVar10 = (uint)*(byte *)(iVar15 + 0x18 + *piVar8 * 0x58);
        uVar13 = (uint)*(byte *)(iVar15 + 0x19 + piVar8[1] * 0x58);
        uVar14 = (uint)*(byte *)(iVar15 + 0x1a + piVar8[2] * 0x58);
        if (iVar11 < *(int *)(param_1 + 0x28 + uVar10 * 4)) {
          *(int *)(param_1 + 0x28 + uVar10 * 4) = iVar11;
        }
        if (iVar11 < *(int *)(param_1 + 0x428 + uVar13 * 4)) {
          *(int *)(param_1 + 0x428 + uVar13 * 4) = iVar11;
        }
        if (iVar11 < *(int *)(param_1 + 0x828 + uVar14 * 4)) {
          *(int *)(param_1 + 0x828 + uVar14 * 4) = iVar11;
        }
        if (*(int *)(param_1 + 0xc28 + uVar10 * 4) < iVar11) {
          *(int *)(param_1 + 0xc28 + uVar10 * 4) = iVar11;
        }
        if (*(int *)(param_1 + 0x1028 + uVar13 * 4) < iVar11) {
          *(int *)(param_1 + 0x1028 + uVar13 * 4) = iVar11;
        }
        if (*(int *)(param_1 + 0x1428 + uVar14 * 4) < iVar11) {
          *(int *)(param_1 + 0x1428 + uVar14 * 4) = iVar11;
        }
        iVar11 = iVar11 + 1;
        local_4 = local_4 + 0x10;
      } while (iVar11 < *(int *)(param_1 + 0x18));
    }
    puVar9 = (undefined4 *)(param_1 + 0x187c);
    for (iVar11 = 0x200; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    return;
  }
  (*DAT_10121efc)(2,s_Couldn_t_allocated_node_ordering_101132e0);
  return;
}

