
void __fastcall FUN_10036a70(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  char *pcVar15;
  char *pcVar16;
  longlong lVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  int *piVar20;
  byte *pbVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  int *piStack_190;
  undefined4 uStack_18c;
  int iStack_188;
  void *pvVar24;
  undefined4 uVar25;
  int *piVar26;
  int *piVar27;
  int *this;
  int iStack_134;
  undefined1 auStack_12c [4];
  int *local_128;
  undefined1 auStack_124 [4];
  undefined4 local_120;
  undefined1 auStack_11c [8];
  int *local_114;
  undefined4 local_110;
  undefined4 local_108;
  char acStack_dc [220];
  
  pvVar24 = (void *)(DAT_100a5178 + 0x22c);
  local_114 = param_1;
  iVar3 = FUN_10035bb0(pvVar24,(byte *)s_Scoreboard_Text_10079f80);
  iVar4 = FUN_10035bb0(pvVar24,(byte *)s_Scoreboard_Title_Text_10079f34);
  local_128 = (int *)FUN_10035bb0(pvVar24,(byte *)s_Scoreboard_Small_Text_10079f1c);
  local_108 = FUN_10035c30(pvVar24,iVar3);
  local_120 = FUN_10035c30(pvVar24,iVar4);
  local_110 = FUN_10035c30(pvVar24,(int)local_128);
  piVar5 = (int *)(**(code **)(*param_1 + 0x14c))();
  (**(code **)(*piVar5 + 0x34))();
  (**(code **)param_1[0x2f])();
  puVar6 = FUN_10012170();
  cVar2 = FUN_100133d0((int)puVar6);
  if (cVar2 == '\0') {
    param_1[0x26e] = -1;
  }
  piVar5 = param_1 + 0x9a16;
  piVar27 = param_1 + 0x13c3;
  this = param_1 + 0x349;
  iVar3 = 0;
  do {
    FUN_100340d0(this,0,'\0',0,0,0,0,0);
    if (iVar3 < param_1[0x9a15]) {
      iVar4 = 0;
      do {
        iVar12 = iVar3 + iVar4 * 0x4a;
        piVar14 = param_1 + iVar12 * 0x3a + 0x13c3;
        (**(code **)(param_1[iVar12 * 0x3a + 0x13c3] + 0x24))();
        (**(code **)(**(int **)(piVar14[0x34] + 0x28) + 0x70))(s_);
        (**(code **)(*piVar14 + 0x1fc))(0);
        piVar20 = local_128;
        (**(code **)(*piVar14 + 0x208))();
        piVar14[0x37] = 0;
        piVar14[0x38] = 0;
        if (DAT_100a4dd0 < 0x1e1) {
          iVar12 = 0xf;
        }
        else {
          lVar17 = __ftol();
          iVar12 = (int)lVar17;
        }
        iVar11 = *piVar14;
        uVar7 = (**(code **)(iVar11 + 0x18))();
        (**(code **)(iVar11 + 8))(uVar7);
        puVar13 = (undefined4 *)0x0;
        uVar25 = 0xff;
        pvVar24 = (void *)0x0;
        (**(code **)(*piVar14 + 300))(0,0,0,0xff);
        piVar26 = (int *)0x0;
        if (piVar5[0x4a] == 3) {
          (**(code **)(*piVar14 + 0x22c))(&DAT_10079a7c);
          goto LAB_1003725f;
        }
        if (piVar5[0x4a] == 1) {
          iVar12 = *piVar5;
          puVar13 = &DAT_100b4fc8 + iVar12 * 10;
          iVar11 = *(int *)(&DAT_100b4fec + iVar12 * 0x28) % DAT_1007a098;
          iStack_188 = (&DAT_1007a0a4)[iVar11 * 3];
          uStack_18c = (&DAT_1007a0a0)[iVar11 * 3];
          piStack_190 = (int *)(&DAT_1007a09c)[iVar11 * 3];
          (**(code **)(*piVar14 + 0x120))();
          uVar8 = 0x14;
          if (0x1df < DAT_100a4dd0) {
            lVar17 = __ftol();
            uVar8 = (undefined4)lVar17;
          }
          iVar11 = *piVar14;
          uVar8 = (**(code **)(iVar11 + 0x18))(uVar8);
          (**(code **)(iVar11 + 8))(uVar8);
          (**(code **)(*piVar14 + 0x208))(uVar25);
          iVar12 = *(int *)(&DAT_100b4fec + iVar12 * 0x28) % DAT_1007a098;
          uVar22 = (undefined2)(&DAT_1007a0a4)[iVar12 * 3];
          uVar19 = (undefined2)(&DAT_1007a0a0)[iVar12 * 3];
          uVar18 = (undefined2)(&DAT_1007a09c)[iVar12 * 3];
LAB_10036d4b:
          uVar23 = 0;
          lVar17 = __ftol();
          FUN_100340d0(pvVar24,0,'\x01',(int)lVar17,uVar18,uVar19,uVar22,uVar23);
        }
        else {
          if (piVar5[0x4a] == 2) {
            iStack_188 = 100;
            uStack_18c = 100;
            piStack_190 = (int *)0x64;
            (**(code **)(*piVar14 + 0x120))();
            uVar8 = 0x14;
            if (0x1df < DAT_100a4dd0) {
              lVar17 = __ftol();
              uVar8 = (undefined4)lVar17;
            }
            iVar12 = *piVar14;
            uVar8 = (**(code **)(iVar12 + 0x18))(uVar8);
            (**(code **)(iVar12 + 8))(uVar8);
            (**(code **)(*piVar14 + 0x208))(uVar25);
            uVar22 = 100;
            uVar19 = 100;
            uVar18 = 100;
            goto LAB_10036d4b;
          }
          iVar11 = (int)*(short *)((int)&DAT_100b600c + *piVar5 * 0x18 + 2) % DAT_1007a098;
          iStack_188 = (&DAT_1007a0a4)[iVar11 * 3];
          uStack_18c = (&DAT_1007a0a0)[iVar11 * 3];
          piStack_190 = (int *)(&DAT_1007a09c)[iVar11 * 3];
          (**(code **)(*piVar14 + 0x120))();
          if ((&DAT_100b59f6)[*piVar5 * 0x14] == '\0') {
            if (((*piVar5 == *(int *)(iVar12 + 0x26ae8)) && (*(int *)(iVar12 + 0x26aec) != 0)) &&
               (DAT_100a3a64 < (float)*(int *)(iVar12 + 0x26aec))) {
              iVar12 = *piVar14;
              lVar17 = __ftol();
              (**(code **)(iVar12 + 300))(0xff,0,0,(int)lVar17);
            }
          }
          else {
            (**(code **)(*piVar14 + 0x124))(2);
            iVar12 = (int)*(short *)((int)&DAT_100b600c + *piVar5 * 0x18 + 2) % DAT_1007a098;
            (**(code **)(*piVar14 + 300))
                      ((&DAT_1007a09c)[iVar12 * 3],(&DAT_1007a0a0)[iVar12 * 3],
                       (&DAT_1007a0a4)[iVar12 * 3],0xc4);
          }
        }
        if ((iStack_188 == 1) || (iStack_188 == 2)) {
          iVar12 = *piVar14;
          uVar25 = 3;
LAB_10036f10:
          (**(code **)(iVar12 + 0x21c))(uVar25);
          piVar5 = piVar26;
        }
        else {
          if (iStack_188 == 0) {
            iVar12 = *piVar14;
            uVar25 = 4;
            goto LAB_10036f10;
          }
          (**(code **)(*piVar14 + 0x21c))(5);
          piVar5 = piVar26;
        }
        uVar9 = 0xffffffff;
        pcVar15 = s_;
        do {
          pcVar16 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar16 = pcVar15 + 1;
          cVar2 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        pcVar15 = pcVar16 + -uVar9;
        pcVar16 = &stack0xfffffea4;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar16 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar16 = pcVar16 + 1;
        }
        iVar12 = piStack_190[0x4a];
        if (iVar12 != 0) {
          switch(uStack_18c) {
          case 1:
            if (iVar12 == 2) {
              pbVar21 = FUN_10030c20(s__Spectators_10079f74);
            }
            else {
              pbVar21 = (byte *)((puVar13[9] + 0x23) * 0x40 + DAT_100a5178);
            }
            FUN_100499f0(acStack_dc,pbVar21);
            uVar9 = 0xffffffff;
            pcVar15 = acStack_dc;
            do {
              pcVar16 = pcVar15;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar16 = pcVar15 + 1;
              cVar2 = *pcVar15;
              pcVar15 = pcVar16;
            } while (cVar2 != '\0');
            uVar9 = ~uVar9;
            pcVar15 = pcVar16 + -uVar9;
            pcVar16 = &stack0xfffffea4;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar16 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar16 = pcVar16 + 1;
            }
            if (piStack_190[0x4a] == 1) {
              if (*(short *)((int)puVar13 + 0x1a) == 1) {
                FUN_10030c20(s__Player_10079f6c);
              }
              else {
                FUN_10030c20(s__Player_plural_10079f54);
              }
              FUN_100499f0(acStack_dc,(byte *)s___d__s__10079f64);
              (**(code **)(**(int **)(piVar14[0x34] + 0x28) + 0x70))(acStack_dc);
              (**(code **)(**(int **)(piVar14[0x34] + 0x28) + 0x78))(uVar7);
            }
            break;
          case 3:
            if (iVar12 == 1) {
              pbVar21 = &DAT_100789f4;
              goto LAB_10037243;
            }
            break;
          case 4:
            if (iVar12 == 1) {
              pbVar21 = &DAT_100789f4;
              goto LAB_10037243;
            }
            break;
          case 5:
            if (iVar12 == 1) goto LAB_10037238;
          }
          goto switchD_10036f66_caseD_2;
        }
        bVar1 = false;
        switch(uStack_18c) {
        case 1:
          pbVar21 = &DAT_10079f4c;
          break;
        case 2:
          if ((DAT_100a5178 != 0) && (iVar12 = HUD_GetUserEntity(), iVar12 != 0)) {
            bVar1 = true;
          }
          if ((DAT_100b6730 == 0) || (!bVar1)) {
            uVar9 = 0xffffffff;
            pcVar15 = s_;
            do {
              pcVar16 = pcVar15;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar16 = pcVar15 + 1;
              cVar2 = *pcVar15;
              pcVar15 = pcVar16;
            } while (cVar2 != '\0');
            uVar9 = ~uVar9;
            pcVar15 = pcVar16 + -uVar9;
            pcVar16 = &stack0xfffffea4;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar16 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar16 = pcVar16 + 1;
            }
          }
          else {
            if ((*(short *)(&DAT_100b600c + *piStack_190 * 6) != 0) ||
               (*(int *)(DAT_100a5178 + 0x898 +
                        *(short *)((int)&DAT_100b600c + *piStack_190 * 0x18 + 2) * 4) == -1)) {
              FUN_10030c20((&PTR_s__Civilian_1007a104)[*(short *)(&DAT_100b600c + *piStack_190 * 6)]
                          );
              pbVar21 = &DAT_10078410;
              break;
            }
            FUN_100499f0(&stack0xfffffea4,(byte *)s_);
          }
          goto switchD_10036f66_caseD_2;
        case 3:
          pbVar21 = &DAT_100789f4;
          break;
        case 4:
          pbVar21 = &DAT_100789f4;
          break;
        case 5:
LAB_10037238:
          pbVar21 = &DAT_100789f4;
          break;
        case 6:
          if ((*(char *)((int)piVar20 + 6) == '\0') || (iVar12 = (*DAT_100a5150)(), iVar12 != 0)) {
            iVar12 = *piStack_190;
            piVar20 = piVar14;
            puVar6 = FUN_10012170();
            FUN_10013100(puVar6,piVar20,iVar12);
          }
        default:
          goto switchD_10036f66_caseD_2;
        }
LAB_10037243:
        FUN_100499f0(&stack0xfffffea4,pbVar21);
switchD_10036f66_caseD_2:
        (**(code **)(*piVar14 + 0x22c))(&stack0xfffffea4);
LAB_1003725f:
        iVar4 = iVar4 + 1;
        param_1 = local_128;
      } while (iVar4 < 8);
    }
    else {
      iVar4 = 8;
      piVar14 = piVar27;
      do {
        (**(code **)(*piVar14 + 0x24))();
        piVar14 = piVar14 + 0x10c4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar3 = iVar3 + 1;
    this = this + 0x39;
    piVar27 = piVar27 + 0x3a;
    piVar5 = piVar5 + 1;
    if (0x49 < iVar3) {
      piVar5 = param_1 + 0x349;
      iStack_134 = 0x4a;
      do {
        FUN_10033e50(piVar5);
        (**(code **)(*piVar5 + 0x14))(&stack0xfffffec4,auStack_11c,auStack_124);
        iVar3 = *piVar5;
        iVar4 = FUN_10033fe0((int)piVar5);
        (**(code **)(iVar3 + 8))(iStack_134,iVar4);
        FUN_10033f50(piVar5);
        piVar5 = piVar5 + 0x39;
        iStack_134 = iStack_134 + -1;
      } while (iStack_134 != 0);
      (**(code **)(param_1[0x26f] + 0xc))(auStack_12c);
      (**(code **)(param_1[0x26f] + 8))(0,this);
      return;
    }
  } while( true );
}

