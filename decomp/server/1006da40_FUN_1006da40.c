
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1006da40(int *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  FILE *pFVar6;
  float *pfVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  char *pcVar16;
  int iVar17;
  int *piVar18;
  char *pcVar19;
  char *pcVar20;
  undefined4 *puVar21;
  int *piVar22;
  bool bVar23;
  float10 fVar24;
  undefined4 *puVar25;
  int iStack_24c;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  float fStack_238;
  uint uStack_234;
  int iStack_230;
  int iStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  int iStack_21c;
  uint uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 auStack_180 [4];
  int iStack_17c;
  float fStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  float fStack_164;
  undefined1 auStack_148 [16];
  float fStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  float fStack_12c;
  int iStack_118;
  char acStack_110 [268];
  
  param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
  (**(code **)(*param_1 + 8))(0);
  piVar5 = FUN_100c8dda(0x18,DAT_10122798 << 7);
  if (piVar5 == (int *)0x0) {
    (*DAT_10121efc)(2,s___Could_not_malloc_TempPool__101130b4);
    return;
  }
  (*DAT_10121f94)();
  uVar10 = 0xffffffff;
  pcVar16 = &DAT_101130ac;
  do {
    pcVar20 = pcVar16;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar20 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar20;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  iVar11 = -1;
  pcVar16 = acStack_110;
  do {
    pcVar19 = pcVar16;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar19 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar19;
  } while (cVar1 != '\0');
  pcVar16 = pcVar20 + -uVar10;
  pcVar20 = pcVar19 + -1;
  for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar20 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar20 = pcVar20 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar20 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar20 = pcVar20 + 1;
  }
  CreateDirectoryA(acStack_110,(LPSECURITY_ATTRIBUTES)0x0);
  uVar10 = 0xffffffff;
  pcVar16 = s__graphs_101130a4;
  do {
    pcVar20 = pcVar16;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar20 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar20;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  iVar11 = -1;
  pcVar16 = acStack_110;
  do {
    pcVar19 = pcVar16;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar19 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar19;
  } while (cVar1 != '\0');
  pcVar16 = pcVar20 + -uVar10;
  pcVar20 = pcVar19 + -1;
  for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar20 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar20 = pcVar20 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar20 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar20 = pcVar20 + 1;
  }
  CreateDirectoryA(acStack_110,(LPSECURITY_ATTRIBUTES)0x0);
  uVar10 = 0xffffffff;
  pcVar16 = &DAT_101130a0;
  do {
    pcVar20 = pcVar16;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar20 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar20;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  iVar11 = -1;
  pcVar16 = acStack_110;
  do {
    pcVar19 = pcVar16;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar19 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar19;
  } while (cVar1 != '\0');
  pcVar16 = pcVar20 + -uVar10;
  pcVar20 = pcVar19 + -1;
  for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar20 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar20 = pcVar20 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar20 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar20 = pcVar20 + 1;
  }
  uVar10 = 0xffffffff;
  pcVar16 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(DAT_10122044 + 0xc));
  do {
    pcVar20 = pcVar16;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar20 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar20;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  iVar11 = -1;
  pcVar16 = acStack_110;
  do {
    pcVar19 = pcVar16;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar19 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar19;
  } while (cVar1 != '\0');
  pcVar16 = pcVar20 + -uVar10;
  pcVar20 = pcVar19 + -1;
  for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar20 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar20 = pcVar20 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar20 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar20 = pcVar20 + 1;
  }
  uVar10 = 0xffffffff;
  pcVar16 = &DAT_10113094;
  do {
    pcVar20 = pcVar16;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar20 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar20;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  iVar11 = -1;
  pcVar16 = acStack_110;
  do {
    pcVar19 = pcVar16;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar19 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar19;
  } while (cVar1 != '\0');
  pcVar16 = pcVar20 + -uVar10;
  pcVar20 = pcVar19 + -1;
  for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar20 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar20 = pcVar20 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar20 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar20 = pcVar20 + 1;
  }
  pFVar6 = (FILE *)FUN_100c9001(acStack_110,&DAT_1011309c);
  if (pFVar6 == (FILE *)0x0) {
    (*DAT_10121efc)(2,s_Couldn_t_create__s__1011307c,acStack_110);
    FUN_100c8cf1((undefined *)piVar5);
    return;
  }
  FUN_100c8f17((int *)pFVar6,(byte *)s_Node_Graph_Report_for_map___s_bs_10113058);
  FUN_100c8f17((int *)pFVar6,(byte *)s__d_Total_Nodes_10113044);
  iVar11 = 0;
  if (0 < DAT_10122798) {
    iVar17 = 0;
    do {
      *(undefined4 *)(iVar17 + 0x20 + DAT_1012278c) = 0;
      *(undefined4 *)(iVar17 + 0x24 + DAT_1012278c) = 0;
      puVar21 = (undefined4 *)(iVar17 + 0x28 + DAT_1012278c);
      for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar21 = 0;
        puVar21 = puVar21 + 1;
      }
      FUN_100c8f17((int *)pFVar6,(byte *)s_Node___4d_10113030);
      __ftol();
      __ftol();
      __ftol();
      FUN_100c8f17((int *)pFVar6,(byte *)s_Location__4d__4d__4d_10113014);
      FUN_100c8f17((int *)pFVar6,(byte *)s_HintType___4d_10113000);
      FUN_100c8f17((int *)pFVar6,(byte *)s_HintActivity___4d_10112fec);
      FUN_100c8f17((int *)pFVar6,(byte *)s_HintYaw___4f_10112fd8);
      FUN_100c8f17((int *)pFVar6,(byte *)s__________________________________10112f84);
      iVar11 = iVar11 + 1;
      iVar17 = iVar17 + 0x58;
    } while (iVar11 < DAT_10122798);
  }
  FUN_100c8f17((int *)pFVar6,&DAT_10112f80);
  iVar11 = 0;
  if (0 < DAT_10122798) {
    iVar17 = 0;
    do {
      if ((*(byte *)(iVar17 + 0x1c + DAT_1012278c) & 2) == 0) {
        iVar13 = FUN_100b01e0(iVar17 + DAT_1012278c);
        uVar10 = *(uint *)(iVar17 + 0x1c + DAT_1012278c);
        if (iVar13 == -3) {
          *(uint *)(iVar17 + 0x1c + DAT_1012278c) = uVar10 | 4;
        }
        else {
          *(uint *)(iVar17 + 0x1c + DAT_1012278c) = uVar10 | 1;
          pfVar7 = (float *)(DAT_1012278c + iVar17);
          fStack_220 = pfVar7[2] - _DAT_100ed5ec;
          fStack_224 = pfVar7[1];
          fStack_228 = *pfVar7;
          FUN_100afc60(pfVar7,&fStack_228,1,DAT_101323a0,auStack_180);
          fStack_20c = *(float *)(iVar17 + 8 + DAT_1012278c) - _DAT_100ed5ec;
          uStack_210 = *(undefined4 *)(iVar17 + 4 + DAT_1012278c);
          uStack_214 = *(undefined4 *)(iVar17 + DAT_1012278c);
          FUN_100afc60((undefined4 *)(iVar17 + DAT_1012278c),&uStack_214,0,DAT_101323a0,auStack_148)
          ;
          if (((fStack_138 < fStack_170) && (iStack_118 != 0)) &&
             ((*(uint *)(iStack_118 + 0x224) & 0x2000000) != 0)) {
            uStack_16c = uStack_134;
            uStack_168 = uStack_130;
            fStack_164 = fStack_12c;
          }
          *(float *)(iVar17 + 8 + DAT_1012278c) = fStack_164 + _DAT_100de45c;
          *(undefined4 *)(iVar17 + 0x14 + DAT_1012278c) = *(undefined4 *)(iVar17 + 8 + DAT_1012278c)
          ;
        }
      }
      iVar11 = iVar11 + 1;
      iVar17 = iVar17 + 0x58;
    } while (iVar11 < DAT_10122798);
  }
  iStack_23c = FUN_1006cb80(&DAT_10122780,(int)piVar5,(int *)pFVar6,&iStack_200);
  if (iStack_23c == 0) {
    (*DAT_10121efc)(2,s___ConnectVisibleNodes_FAILED__10112f60);
    *(code **)(iStack_24c + 0x74) = CTestHull::ShowBadNode;
    iVar11 = *(int *)(iStack_24c + 4);
    puVar21 = (undefined4 *)(DAT_1012278c + iStack_200 * 0x58);
    *(undefined4 *)(iVar11 + 8) = *puVar21;
    *(undefined4 *)(iVar11 + 0xc) = puVar21[1];
    *(undefined4 *)(iVar11 + 0x10) = puVar21[2];
    FUN_100c8cf1((undefined *)piVar5);
    FUN_100c8f53(pFVar6);
    return;
  }
  FUN_100c8f17((int *)pFVar6,(byte *)s__________________________________10112b78);
  FUN_100c8f17((int *)pFVar6,(byte *)s_Walk_Rejection__10112f4c);
  iStack_240 = 0;
  if (0 < DAT_10122798) {
    iStack_22c = 0;
    do {
      puVar21 = (undefined4 *)(iStack_22c + DAT_1012278c);
      FUN_100c8f17((int *)pFVar6,(byte *)s__________________________________10112f84);
      FUN_100c8f17((int *)pFVar6,(byte *)s_Node__4d__10112f40);
      iVar11 = 0;
      if (0 < (int)puVar21[8]) {
        do {
          iStack_230 = 0;
          iStack_21c = 0;
          piVar5[(iVar11 + puVar21[9]) * 6 + 4] = 0xf;
          do {
            iVar17 = iStack_21c;
            if ((iStack_230 == 0) || ((iStack_21c != 1 && (iStack_21c != 2)))) {
              switch(iStack_21c) {
              case 0:
                puVar25 = &uStack_214;
                uStack_214 = 0x41400000;
                uStack_210 = 0x41400000;
                fStack_20c = 24.0;
                uStack_1a4 = 0xc1400000;
                uStack_1a0 = 0xc1400000;
                uStack_19c = 0;
                puVar14 = &uStack_1a4;
                break;
              case 1:
                puVar25 = &uStack_1f8;
                uStack_1f8 = 0x41800000;
                uStack_1f4 = 0x41800000;
                uStack_1f0 = 0x42900000;
                uStack_1d4 = 0xc1800000;
                uStack_1d0 = 0xc1800000;
                uStack_1cc = 0;
                puVar14 = &uStack_1d4;
                break;
              case 2:
                puVar25 = &uStack_198;
                uStack_198 = 0x42000000;
                uStack_194 = 0x42000000;
                uStack_190 = 0x42800000;
                uStack_1bc = 0xc2000000;
                uStack_1b8 = 0xc2000000;
                uStack_1b4 = 0;
                puVar14 = &uStack_1bc;
                break;
              case 3:
                puVar25 = &uStack_18c;
                uStack_18c = 0x42000000;
                uStack_188 = 0x42000000;
                uStack_184 = 0x42800000;
                uStack_1ec = 0xc2000000;
                uStack_1e8 = 0xc2000000;
                uStack_1e4 = 0;
                puVar14 = &uStack_1ec;
                break;
              default:
                goto switchD_1006dfc1_default;
              }
              FUN_100afdc0(*(int *)(iStack_24c + 4),puVar14,puVar25);
switchD_1006dfc1_default:
              FUN_100afe10(iStack_24c,puVar21);
              if ((*(uint *)(*(int *)(iStack_24c + 4) + 0x1a4) & 0x200) == 0) {
                (*DAT_10121efc)(2);
              }
              if (iVar11 < 0) {
                (*DAT_10121efc)(2,s______j____d______10112e2c,iVar11);
                FUN_100c8cf1((undefined *)piVar5);
                FUN_100c8f53(pFVar6);
                return;
              }
              pfVar7 = (float *)(DAT_1012278c + piVar5[(iVar11 + puVar21[9]) * 6 + 1] * 0x58);
              fStack_228 = *pfVar7;
              fStack_224 = pfVar7[1];
              fStack_220 = pfVar7[2];
              iVar13 = *(int *)(iStack_24c + 4);
              if (iVar17 < 3) {
                uStack_234 = *(uint *)(iVar13 + 0x1a4);
                bVar23 = (*(byte *)(puVar21 + 7) & 4) != 0;
                if (bVar23) {
                  *(uint *)(iVar13 + 0x1a4) = uStack_234 | 2;
                }
                uStack_218 = (uint)!bVar23;
                iVar17 = *(int *)(iStack_24c + 4);
                fStack_1d8 = pfVar7[2] - *(float *)(iVar17 + 0x10);
                fStack_1dc = pfVar7[1] - *(float *)(iVar17 + 0xc);
                fStack_1e0 = *pfVar7 - *(float *)(iVar17 + 8);
                fVar24 = (float10)FUN_100afde0(&fStack_1e0);
                fStack_204 = (float)fVar24;
                fVar2 = fStack_228 - *(float *)(*(int *)(iStack_24c + 4) + 8);
                fVar3 = fStack_224 - *(float *)(*(int *)(iStack_24c + 4) + 0xc);
                iVar17 = 0;
                fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
                if (_DAT_100dd5f8 < fVar2) {
                  fStack_208 = fVar2 - _DAT_100dd618;
                  fVar3 = _DAT_100dd5f8;
                  do {
                    fStack_238 = 16.0;
                    if (fStack_208 <= fVar3 + _DAT_100dd634) {
                      fStack_238 = (fVar2 - fVar3) - _DAT_100dd618;
                    }
                    iVar13 = (*DAT_10121e74)(*(undefined4 *)(*(int *)(iStack_24c + 4) + 0x208),
                                             fStack_204,fStack_238);
                    if (iVar13 == 0) goto LAB_1006e2e7;
                    iVar17 = iVar17 + 0x10;
                    fVar3 = (float)iVar17;
                    iStack_1fc = iVar17;
                  } while (fVar3 < fVar2);
                }
                iVar17 = *(int *)(iStack_24c + 4);
                fVar2 = *(float *)(iVar17 + 8) - fStack_228;
                fVar4 = *(float *)(iVar17 + 0xc) - fStack_224;
                fVar3 = *(float *)(iVar17 + 0x10) - fStack_220;
                if (_DAT_100ddb10 < SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3)) {
LAB_1006e2e7:
                  if (iStack_21c == 0) {
                    FUN_100c8f17((int *)pFVar6,(byte *)s_NODE_SMALL_HULL_step__f_10112ee0);
                    puVar8 = (uint *)(piVar5 + (iVar11 + puVar21[9]) * 6 + 4);
                    uVar10 = *puVar8 & 0xfffffff8;
                  }
                  else {
                    if (iStack_21c != 1) {
                      if (iStack_21c == 2) {
                        FUN_100c8f17((int *)pFVar6,(byte *)s_NODE_LARGE_HULL_step__f_10112f18);
                        piVar5[(iVar11 + puVar21[9]) * 6 + 4] =
                             piVar5[(iVar11 + puVar21[9]) * 6 + 4] & 0xfffffffb;
                      }
                      goto LAB_1006e384;
                    }
                    FUN_100c8f17((int *)pFVar6,(byte *)s_NODE_HUMAN_HULL_step__f_10112efc);
                    puVar8 = (uint *)(piVar5 + (iVar11 + puVar21[9]) * 6 + 4);
                    uVar10 = *puVar8 & 0xfffffff9;
                  }
                  *puVar8 = uVar10;
                  iStack_230 = 1;
                }
LAB_1006e384:
                *(uint *)(*(int *)(iStack_24c + 4) + 0x1a4) = uStack_234;
                iVar17 = iStack_21c;
              }
              else {
                fStack_1c8 = pfVar7[3];
                fStack_1c4 = pfVar7[4];
                fStack_1c0 = pfVar7[5] + _DAT_100ddac8;
                uStack_1b0 = *puVar21;
                uStack_1ac = puVar21[1];
                fStack_1a8 = (float)puVar21[2] + _DAT_100ddac8;
                FUN_100afc90(&uStack_1b0,&fStack_1c8,1,2,*(undefined4 *)(iVar13 + 0x208),auStack_180
                            );
                if ((iStack_17c != 0) || (fStack_170 < (float)_DAT_100dd628)) {
                  piVar5[(iVar11 + puVar21[9]) * 6 + 4] =
                       piVar5[(iVar11 + puVar21[9]) * 6 + 4] & 0xfffffff7;
                }
              }
            }
            iStack_21c = iVar17 + 1;
          } while (iStack_21c < 4);
          if (piVar5[(iVar11 + puVar21[9]) * 6 + 4] == 0) {
            FUN_100c8f17((int *)pFVar6,(byte *)s_Rejected_Node__3d___Unreachable_b_10112ebc);
            piVar15 = piVar5 + (puVar21[9] + puVar21[8]) * 6 + -6;
            piVar18 = piVar5 + (puVar21[9] + iVar11) * 6;
            for (iVar17 = 6; iVar17 != 0; iVar17 = iVar17 + -1) {
              *piVar18 = *piVar15;
              piVar15 = piVar15 + 1;
              piVar18 = piVar18 + 1;
            }
            FUN_100c8f17((int *)pFVar6,(byte *)s_Any_Hull_10112eb0);
            iStack_23c = iStack_23c + -1;
            puVar21[8] = puVar21[8] + -1;
            iVar11 = iVar11 + -1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)puVar21[8]);
      }
      iStack_240 = iStack_240 + 1;
      iStack_22c = iStack_22c + 0x58;
    } while (iStack_240 < DAT_10122798);
  }
  FUN_100c8f17((int *)pFVar6,(byte *)s__________________________________10112e5c);
  iVar11 = FUN_1006cfd0(&DAT_10122780,(int)piVar5,(int *)pFVar6);
  iStack_23c = iStack_23c - iVar11;
  DAT_10122790 = FUN_100c8dda(0x18,iStack_23c);
  if (DAT_10122790 == (int *)0x0) {
    (*DAT_10121efc)(2,s_Couldn_t_malloc_LinkPool__10112e40);
    FUN_100c8cf1((undefined *)piVar5);
    FUN_100c8f53(pFVar6);
    return;
  }
  iStack_244 = 0;
  iStack_240 = 0;
  DAT_1012279c = iStack_23c;
  if (0 < DAT_10122798) {
    iStack_24c = 0;
    iVar11 = 0;
    do {
      iVar17 = *(int *)(iStack_24c + 0x24 + DAT_1012278c);
      *(int *)(iStack_24c + 0x24 + DAT_1012278c) = iVar11;
      iVar13 = 0;
      if (0 < *(int *)(iStack_24c + 0x20 + DAT_1012278c)) {
        iVar9 = iVar11 * 0x18;
        piVar15 = piVar5 + iVar17 * 6;
        do {
          piVar18 = piVar15;
          piVar22 = (int *)(iVar9 + (int)DAT_10122790);
          for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
            *piVar22 = *piVar18;
            piVar18 = piVar18 + 1;
            piVar22 = piVar22 + 1;
          }
          iVar11 = iStack_244 + 1;
          iVar9 = iVar9 + 0x18;
          iVar13 = iVar13 + 1;
          piVar15 = piVar15 + 6;
          iStack_244 = iVar11;
        } while (iVar13 < *(int *)(iStack_24c + 0x20 + DAT_1012278c));
      }
      iStack_240 = iStack_240 + 1;
      iStack_24c = iStack_24c + 0x58;
    } while (iStack_240 < DAT_10122798);
  }
  FUN_1006f7a0(0x10122780);
  FUN_1006f9b0(&DAT_10122780);
  bVar23 = true;
  FUN_100c8f17((int *)pFVar6,(byte *)s__________________________________10112dd8);
  FUN_100c8f17((int *)pFVar6,(byte *)s_Link_Pairings__10112dc8);
  iVar11 = 0;
  if (0 < DAT_10122798) {
    iVar13 = 0;
    iVar17 = DAT_1012278c;
    do {
      iVar9 = 0;
      if (0 < *(int *)(iVar13 + 0x20 + iVar17)) {
        do {
          FUN_1006f5a0(&DAT_10122780,
                       DAT_10122790[(*(int *)(iVar13 + 0x24 + iVar17) + iVar9) * 6 + 1],iVar11,
                       (int *)&uStack_234);
          if ((int)uStack_234 < 0) {
            bVar23 = false;
            FUN_100c8f17((int *)pFVar6,(byte *)s_WARNING__Node__3d_does_not_conne_10112d90);
          }
          iVar9 = iVar9 + 1;
          iVar17 = DAT_1012278c;
        } while (iVar9 < *(int *)(iVar13 + 0x20 + DAT_1012278c));
      }
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 + 0x58;
    } while (iVar11 < DAT_10122798);
    if (!bVar23) goto LAB_1006e725;
  }
  FUN_100c8f17((int *)pFVar6,(byte *)s_All_Connections_are_Paired__10112d70);
LAB_1006e725:
  FUN_100c8f17((int *)pFVar6,(byte *)s__________________________________10112f84);
  FUN_100c8f17((int *)pFVar6,(byte *)s__________________________________10112dd8);
  FUN_100c8f17((int *)pFVar6,(byte *)s_Total_Number_of_Connections_in_P_10112d44);
  FUN_100c8f17((int *)pFVar6,(byte *)s__________________________________10112f84);
  FUN_100c8f17((int *)pFVar6,(byte *)s_Connection_Pool___d_bytes_10112d28);
  FUN_100c8f17((int *)pFVar6,(byte *)s__________________________________10112f84);
  (*DAT_10121efc)(2,s__d_Nodes___d_Connections_10112d0c,DAT_10122798,iStack_23c);
  FUN_1006fa50(0x10122780);
  iVar11 = 0;
  if (0 < DAT_10122798) {
    iVar13 = 0;
    iVar17 = DAT_1012278c;
    do {
      if ((*(byte *)(iVar13 + 0x1c + iVar17) & 1) != 0) {
        *(float *)(iVar13 + 8 + iVar17) = *(float *)(iVar13 + 8 + iVar17) - _DAT_100de45c;
        iVar17 = DAT_1012278c;
      }
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 + 0x58;
    } while (iVar11 < DAT_10122798);
  }
  FUN_100c8cf1((undefined *)piVar5);
  FUN_100c8f53(pFVar6);
  DAT_10122780 = 1;
  DAT_10122784 = 1;
  _DAT_10122788 = 0;
  FUN_1006fee0(&DAT_10122780);
  FUN_1006f070(&DAT_10122780,(char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(DAT_10122044 + 0xc)))
  ;
  (*DAT_10121efc)(1,s_Done__10112d04);
  return;
}

