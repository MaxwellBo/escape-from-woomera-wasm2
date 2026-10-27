
void __fastcall FUN_1006fee0(void *param_1)

{
  bool bVar1;
  undefined *puVar2;
  int *piVar3;
  ushort *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ushort *puVar15;
  int iVar16;
  int *piVar17;
  char *pcVar18;
  char *pcVar19;
  bool bVar20;
  int local_40;
  int local_3c;
  int local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_8;
  
  puVar2 = operator_new(*(int *)((int)param_1 + 0x18) * *(int *)((int)param_1 + 0x18) * 2);
  piVar3 = operator_new(*(int *)((int)param_1 + 0x18) << 2);
  puVar4 = operator_new(*(int *)((int)param_1 + 0x18) << 1);
  piVar5 = operator_new(*(int *)((int)param_1 + 0x18) << 1);
  if (puVar2 != (undefined *)0x0) {
    if (((piVar3 != (int *)0x0) && (puVar4 != (ushort *)0x0)) && (piVar5 != (int *)0x0)) {
      local_28 = 0;
      local_18 = 0;
      local_14 = 10;
      do {
        local_24 = 0;
        do {
          if (local_24 == 0) {
            local_8 = 0;
          }
          else if (local_24 == 1) {
            local_8 = 0x340;
          }
          iVar6 = *(int *)((int)param_1 + 0x18);
          iVar13 = 0;
          if (0 < iVar6) {
            do {
              iVar10 = 0;
              if (0 < iVar6) {
                do {
                  iVar6 = iVar6 * iVar13 + iVar10;
                  iVar10 = iVar10 + 1;
                  *(undefined2 *)(puVar2 + iVar6 * 2) = 0xffff;
                  iVar6 = *(int *)((int)param_1 + 0x18);
                } while (iVar10 < iVar6);
              }
              iVar6 = *(int *)((int)param_1 + 0x18);
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar6);
          }
          iVar6 = *(int *)((int)param_1 + 0x18);
          local_40 = 0;
          if (0 < iVar6) {
            do {
              while (iVar6 = iVar6 + -1, -1 < iVar6) {
                if (*(short *)(puVar2 + (local_40 * *(int *)((int)param_1 + 0x18) + iVar6) * 2) ==
                    -1) {
                  iVar13 = FUN_1006bcd0(param_1,piVar3,local_40,iVar6,local_18,local_8);
                  if (iVar13 < 2) {
                    *(short *)(puVar2 + (local_40 * *(int *)((int)param_1 + 0x18) + iVar6) * 2) =
                         (short)local_40;
                    *(short *)(puVar2 + (iVar6 * *(int *)((int)param_1 + 0x18) + local_40) * 2) =
                         (short)iVar6;
                  }
                  else if (0 < iVar13 + -1) {
                    local_20 = 1;
                    piVar17 = piVar3;
                    do {
                      piVar9 = piVar17 + 1;
                      iVar10 = *piVar17;
                      iVar16 = *piVar9;
                      if (local_20 < iVar13) {
                        iVar14 = iVar13 - local_20;
                        piVar17 = piVar9;
                        do {
                          iVar14 = iVar14 + -1;
                          *(short *)(puVar2 + (iVar10 * *(int *)((int)param_1 + 0x18) + *piVar17) *
                                              2) = (short)iVar16;
                          piVar17 = piVar17 + 1;
                        } while (iVar14 != 0);
                      }
                      bVar20 = local_20 < iVar13 + -1;
                      local_20 = local_20 + 1;
                      piVar17 = piVar9;
                    } while (bVar20);
                  }
                }
              }
              iVar6 = *(int *)((int)param_1 + 0x18);
              local_40 = local_40 + 1;
            } while (local_40 < iVar6);
          }
          iVar6 = *(int *)((int)param_1 + 0x18);
          local_40 = 0;
          if (0 < iVar6) {
            local_2c = (local_24 + local_14) * 4;
            do {
              iVar13 = 0;
              puVar15 = puVar4;
              if (0 < iVar6) {
                do {
                  iVar6 = iVar6 * local_40 + iVar13;
                  iVar13 = iVar13 + 1;
                  *puVar15 = *(ushort *)(puVar2 + iVar6 * 2);
                  iVar6 = *(int *)((int)param_1 + 0x18);
                  puVar15 = puVar15 + 1;
                } while (iVar13 < iVar6);
              }
              iVar6 = 0;
              iVar13 = 0;
              uVar7 = 9999999;
              local_3c = 0;
              local_38 = 0;
              local_1c = 0;
              puVar15 = puVar4;
              piVar17 = piVar5;
              piVar9 = piVar5;
              if (0 < *(int *)((int)param_1 + 0x18)) {
                do {
                  if ((*puVar15 != uVar7) || (bVar20 = true, 0x7e < iVar13)) {
                    bVar20 = false;
                  }
                  if ((*puVar15 == local_1c) && (iVar6 < 0x80)) {
                    bVar1 = true;
                  }
                  else {
                    bVar1 = false;
                  }
                  if (iVar13 == 0) {
                    if (iVar6 == 0) {
                      if (bVar1) {
                        iVar6 = 1;
                        local_3c = 1;
                      }
                      else {
LAB_1007023c:
                        iVar13 = 1;
                      }
                    }
                    else if (bVar1) {
                      iVar6 = iVar6 + 1;
                      local_3c = iVar6;
                    }
                    else {
                      if ((iVar6 != 1) || (!bVar20)) {
                        local_38 = local_38 + 1;
                        *(char *)piVar9 = -(char)iVar6;
                        piVar9 = (int *)((int)piVar9 + 1);
                        iVar6 = 0;
                        local_3c = 0;
                        goto LAB_1007023c;
                      }
                      iVar6 = 0;
                      iVar13 = 2;
                      local_3c = 0;
                    }
                  }
                  else if (bVar20) {
                    iVar13 = iVar13 + 1;
                  }
                  else {
                    local_38 = local_38 + 2;
                    *(char *)piVar9 = (char)iVar13 + -1;
                    iVar13 = uVar7 - local_40;
                    piVar17 = (int *)((int)piVar9 + 1);
                    iVar6 = (*(int *)((int)param_1 + 0x18) - local_40) + uVar7;
                    iVar10 = (uVar7 - *(int *)((int)param_1 + 0x18)) - local_40;
                    if ((iVar13 < -0x80) || (0x7f < iVar13)) {
                      if ((iVar6 < -0x80) || (0x7f < iVar6)) {
                        if ((iVar10 < -0x80) || (0x7f < iVar10)) {
                          (*DAT_10121efc)(2,s_Nodes_need_sorting___d__d___10113324,uVar7,local_40);
                        }
                        else {
                          *(char *)piVar17 = (char)iVar10;
                          piVar17 = (int *)((int)piVar9 + 2);
                        }
                      }
                      else {
                        *(char *)piVar17 = (char)iVar6;
                        piVar17 = (int *)((int)piVar9 + 2);
                      }
                    }
                    else {
                      *(char *)piVar17 = (char)iVar13;
                      piVar17 = (int *)((int)piVar9 + 2);
                    }
                    iVar13 = 0;
                    piVar9 = piVar17;
                    if (bVar1) {
                      iVar6 = local_3c + 1;
                      local_3c = local_3c + 1;
                    }
                    else {
                      iVar13 = 1;
                      iVar6 = local_3c;
                    }
                  }
                  local_1c = local_1c + 1;
                  uVar7 = (uint)*puVar15;
                  puVar15 = puVar15 + 1;
                } while ((int)local_1c < *(int *)((int)param_1 + 0x18));
                piVar17 = piVar9;
                if (iVar13 != 0) {
                  local_38 = local_38 + 2;
                  *(char *)piVar9 = (char)iVar13 + -1;
                  iVar10 = uVar7 - local_40;
                  piVar17 = (int *)((int)piVar9 + 1);
                  iVar13 = (*(int *)((int)param_1 + 0x18) - local_40) + uVar7;
                  iVar16 = (uVar7 - *(int *)((int)param_1 + 0x18)) - local_40;
                  iVar6 = local_3c;
                  if ((iVar10 < -0x80) || (0x7f < iVar10)) {
                    if ((iVar13 < -0x80) || (0x7f < iVar13)) {
                      if ((iVar16 < -0x80) || (0x7f < iVar16)) {
                        (*DAT_10121efc)(2,s_Nodes_need_sorting___d__d___10113324,uVar7,local_40);
                      }
                      else {
                        *(char *)piVar17 = (char)iVar16;
                        piVar17 = (int *)((int)piVar9 + 2);
                      }
                    }
                    else {
                      *(char *)piVar17 = (char)iVar13;
                      piVar17 = (int *)((int)piVar9 + 2);
                    }
                  }
                  else {
                    *(char *)piVar17 = (char)iVar10;
                    piVar17 = (int *)((int)piVar9 + 2);
                  }
                }
                if (iVar6 != 0) {
                  local_38 = local_38 + 1;
                  *(char *)piVar17 = -(char)iVar6;
                  piVar17 = (int *)((int)piVar17 + 1);
                }
              }
              uVar7 = (int)piVar17 - (int)piVar5;
              pcVar19 = *(char **)((int)param_1 + 0x14);
              if (pcVar19 == (char *)0x0) {
                *(uint *)((int)param_1 + 0x20) = uVar7;
                piVar9 = FUN_100c8dda(1,uVar7);
                *(int **)((int)param_1 + 0x14) = piVar9;
                piVar17 = piVar5;
                for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *piVar9 = *piVar17;
                  piVar17 = piVar17 + 1;
                  piVar9 = piVar9 + 1;
                }
                for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(char *)piVar9 = (char)*piVar17;
                  piVar17 = (int *)((int)piVar17 + 1);
                  piVar9 = (int *)((int)piVar9 + 1);
                }
                *(undefined4 *)(*(int *)((int)param_1 + 0xc) + local_2c) = 0;
                local_28 = local_28 + local_38;
              }
              else {
                iVar6 = *(int *)((int)param_1 + 0x20) - uVar7;
                local_1c = 0;
                if (0 < iVar6) {
                  do {
                    bVar20 = true;
                    uVar11 = uVar7;
                    pcVar18 = pcVar19;
                    piVar17 = piVar5;
                    do {
                      if (uVar11 == 0) break;
                      uVar11 = uVar11 - 1;
                      bVar20 = *pcVar18 == (char)*piVar17;
                      pcVar18 = pcVar18 + 1;
                      piVar17 = (int *)((int)piVar17 + 1);
                    } while (bVar20);
                    if (bVar20) break;
                    local_1c = local_1c + 1;
                    pcVar19 = pcVar19 + 1;
                  } while ((int)local_1c < iVar6);
                }
                if ((int)local_1c < iVar6) {
                  *(uint *)(*(int *)((int)param_1 + 0xc) + local_2c) = local_1c;
                }
                else {
                  piVar8 = FUN_100c8dda(1,*(int *)((int)param_1 + 0x20) + uVar7);
                  uVar11 = *(uint *)((int)param_1 + 0x20);
                  piVar17 = *(int **)((int)param_1 + 0x14);
                  piVar9 = piVar8;
                  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                    *piVar9 = *piVar17;
                    piVar17 = piVar17 + 1;
                    piVar9 = piVar9 + 1;
                  }
                  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                    *(char *)piVar9 = (char)*piVar17;
                    piVar17 = (int *)((int)piVar17 + 1);
                    piVar9 = (int *)((int)piVar9 + 1);
                  }
                  FUN_100c8cf1(*(undefined **)((int)param_1 + 0x14));
                  *(int **)((int)param_1 + 0x14) = piVar8;
                  piVar17 = piVar5;
                  piVar9 = (int *)(*(int *)((int)param_1 + 0x20) + (int)piVar8);
                  for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                    *piVar9 = *piVar17;
                    piVar17 = piVar17 + 1;
                    piVar9 = piVar9 + 1;
                  }
                  for (uVar11 = uVar7 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                    *(char *)piVar9 = (char)*piVar17;
                    piVar17 = (int *)((int)piVar17 + 1);
                    piVar9 = (int *)((int)piVar9 + 1);
                  }
                  *(undefined4 *)(*(int *)((int)param_1 + 0xc) + local_2c) =
                       *(undefined4 *)((int)param_1 + 0x20);
                  local_28 = local_28 + local_38;
                  *(uint *)((int)param_1 + 0x20) = *(int *)((int)param_1 + 0x20) + uVar7;
                }
              }
              iVar6 = *(int *)((int)param_1 + 0x18);
              local_40 = local_40 + 1;
              local_2c = local_2c + 0x58;
            } while (local_40 < iVar6);
          }
          local_24 = local_24 + 1;
        } while (local_24 < 2);
        local_14 = local_14 + 2;
        local_18 = local_18 + 1;
      } while (local_14 < 0x12);
      (*DAT_10121efc)(2,s_Size_of_Routes____d_1011330c,local_28);
    }
    FUN_100c8ce6(puVar2);
  }
  if (puVar4 != (ushort *)0x0) {
    FUN_100c8ce6((undefined *)puVar4);
  }
  if (piVar5 != (int *)0x0) {
    FUN_100c8ce6((undefined *)piVar5);
  }
  if (piVar3 != (int *)0x0) {
    FUN_100c8ce6((undefined *)piVar3);
  }
  *(undefined4 *)((int)param_1 + 8) = 1;
  return;
}

