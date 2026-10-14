
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void efw_ClientCommand(int param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 uVar8;
  char cVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined *puVar18;
  undefined4 *puVar19;
  undefined3 extraout_var;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  int unaff_ESI;
  char *pcVar20;
  byte *pbVar21;
  byte *unaff_EDI;
  int *piVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int *piVar27;
  undefined4 uVar28;
  float fVar29;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [40];
  char acStack_90 [8];
  int iStack_88;
  undefined1 uStack_11;
  
  puVar10 = (uint *)(*DAT_10121f54)(0);
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar13 = param_1 + 0x80;
    pcVar20 = s_VModEnable_10105688;
    puVar11 = puVar10;
    do {
      bVar1 = (byte)*puVar11;
      bVar23 = bVar1 < (byte)*pcVar20;
      if (bVar1 != *pcVar20) {
LAB_1001a97e:
        iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
        goto LAB_1001a983;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)puVar11 + 1);
      bVar23 = bVar1 < (byte)pcVar20[1];
      if (bVar1 != pcVar20[1]) goto LAB_1001a97e;
      puVar11 = (uint *)((int)puVar11 + 2);
      pcVar20 = pcVar20 + 2;
    } while (bVar1 != 0);
    iVar12 = 0;
LAB_1001a983:
    if (iVar12 != 0) {
      pcVar20 = s_hud_color_1010567c;
      puVar11 = puVar10;
      do {
        bVar1 = (byte)*puVar11;
        bVar23 = bVar1 < (byte)*pcVar20;
        if (bVar1 != *pcVar20) {
LAB_1001a9b8:
          iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
          goto LAB_1001a9bd;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)puVar11 + 1);
        bVar23 = bVar1 < (byte)pcVar20[1];
        if (bVar1 != pcVar20[1]) goto LAB_1001a9b8;
        puVar11 = (uint *)((int)puVar11 + 2);
        pcVar20 = pcVar20 + 2;
      } while (bVar1 != 0);
      iVar12 = 0;
LAB_1001a9bd:
      if (iVar12 == 0) {
        iVar13 = (*DAT_10121f58)();
        if (iVar13 == 4) {
          pbVar14 = (byte *)(*DAT_10121f54)(1);
          uVar15 = FUN_100c8388(this_00,pbVar14);
          pbVar14 = (byte *)(*DAT_10121f54)(2);
          uVar16 = FUN_100c8388(this_01,pbVar14);
          pbVar14 = (byte *)(*DAT_10121f54)(3);
          uVar17 = FUN_100c8388(this_02,pbVar14);
          (*DAT_10121ec0)(1,DAT_1012489c,0,*(undefined4 *)(param_1 + 0x288));
          (*DAT_10121ed4)((uVar15 & 0xff) * 0x10000 + (uVar16 & 0xff) * 0x100 + (uVar17 & 0xff));
          (*DAT_10121ec4)();
          return;
        }
        (*DAT_10121efc)(1,s_Syntax__hud_color_RRR_GGG_BBB_1010565c);
        return;
      }
      pbVar14 = &DAT_10105654;
      puVar11 = puVar10;
      do {
        bVar1 = (byte)*puVar11;
        bVar23 = bVar1 < *pbVar14;
        if (bVar1 != *pbVar14) {
LAB_1001aa91:
          iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
          goto LAB_1001aa96;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)puVar11 + 1);
        bVar23 = bVar1 < pbVar14[1];
        if (bVar1 != pbVar14[1]) goto LAB_1001aa91;
        puVar11 = (uint *)((int)puVar11 + 2);
        pbVar14 = pbVar14 + 2;
      } while (bVar1 != 0);
      iVar12 = 0;
LAB_1001aa96:
      if (iVar12 == 0) {
        if (_DAT_101323b4 == _DAT_100dd5f8) {
          return;
        }
        iVar12 = param_1;
        if ((param_1 == 0) && (iVar12 = (*DAT_10121f1c)(0), iVar12 == 0)) {
          piVar22 = (int *)0x0;
        }
        else {
          piVar22 = *(int **)(iVar12 + 0x7c);
        }
        iVar12 = (*DAT_10121f58)();
        if (1 < iVar12) {
          uVar28 = 0;
          iVar13 = 3;
          piVar27 = piVar22;
          puVar10 = (uint *)(*DAT_10121f54)(1);
          FUN_10098c10(puVar10,piVar22,piVar27,iVar13,uVar28);
          return;
        }
        FUN_100af200(param_1 + 0xf4);
        fStack_c4 = *(float *)(param_1 + 500) + *(float *)(param_1 + 0x88) +
                    *(float *)(DAT_10122044 + 0x28) * _DAT_100e08e0;
        fStack_c0 = *(float *)(param_1 + 0x1f8) + *(float *)(param_1 + 0x8c) +
                    *(float *)(DAT_10122044 + 0x2c) * _DAT_100e08e0;
        fStack_bc = *(float *)(param_1 + 0x1fc) + *(float *)(param_1 + 0x90) +
                    *(float *)(DAT_10122044 + 0x30) * _DAT_100e08e0;
        fStack_d0 = *(float *)(param_1 + 0x88) + *(float *)(param_1 + 500);
        fStack_cc = *(float *)(param_1 + 0x1f8) + *(float *)(param_1 + 0x8c);
        fStack_c8 = *(float *)(param_1 + 0x1fc) + *(float *)(param_1 + 0x90);
        FUN_100afc60(&fStack_d0,&fStack_c4,0,param_1,auStack_b8);
        if (iStack_88 == 0) {
          return;
        }
        if (*(int **)(iStack_88 + 0x7c) == (int *)0x0) {
          return;
        }
        (**(code **)(**(int **)(iStack_88 + 0x7c) + 0xe4))(piVar22,piVar22,3,0);
        iVar26 = 0;
        iVar25 = 0;
        iVar24 = 0;
        iVar12 = 0;
        puVar18 = FUN_100affd0((byte *)s_Fired__s___s__10105644);
      }
      else {
        pbVar14 = &DAT_10105450;
        puVar11 = puVar10;
        do {
          bVar1 = (byte)*puVar11;
          bVar23 = bVar1 < *pbVar14;
          if (bVar1 != *pbVar14) {
LAB_1001ac42:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001ac47;
          }
          if (bVar1 == 0) break;
          bVar1 = *(byte *)((int)puVar11 + 1);
          bVar23 = bVar1 < pbVar14[1];
          if (bVar1 != pbVar14[1]) goto LAB_1001ac42;
          puVar11 = (uint *)((int)puVar11 + 2);
          pbVar14 = pbVar14 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001ac47:
        if (iVar12 == 0) {
          FUN_1001a550(param_1,0);
          return;
        }
        pcVar20 = s_say_team_10105444;
        puVar11 = puVar10;
        do {
          bVar1 = (byte)*puVar11;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001ac8d:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001ac92;
          }
          if (bVar1 == 0) break;
          bVar1 = *(byte *)((int)puVar11 + 1);
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001ac8d;
          puVar11 = (uint *)((int)puVar11 + 2);
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001ac92:
        if (iVar12 == 0) {
          FUN_1001a550(param_1,1);
          return;
        }
        pbVar14 = &DAT_1010563c;
        puVar11 = puVar10;
        do {
          bVar1 = (byte)*puVar11;
          bVar23 = bVar1 < *pbVar14;
          if (bVar1 != *pbVar14) {
LAB_1001acd9:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001acde;
          }
          if (bVar1 == 0) break;
          bVar1 = *(byte *)((int)puVar11 + 1);
          bVar23 = bVar1 < pbVar14[1];
          if (bVar1 != pbVar14[1]) goto LAB_1001acd9;
          puVar11 = (uint *)((int)puVar11 + 2);
          pbVar14 = pbVar14 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001acde:
        if (iVar12 == 0) {
          if (_DAT_101323b4 == (float)_DAT_100de1e8) {
            return;
          }
          uVar28 = (*DAT_10121f54)(1);
          iVar12 = (*DAT_10121f14)(uVar28);
          if ((iVar13 == 0) && (iVar24 = (*DAT_10121e5c)(), iVar24 != 0)) {
            iVar13 = iVar24 + 0x80;
          }
          iVar24 = *(int *)(iVar13 + 0x208);
          if ((iVar24 == 0) ||
             (puVar19 = *(undefined4 **)(iVar24 + 0x7c), puVar19 == (undefined4 *)0x0)) {
            puVar19 = (undefined4 *)(*DAT_10121f04)(iVar24,0x69c);
            if (puVar19 == (undefined4 *)0x0) {
              puVar19 = (undefined4 *)0x0;
            }
            else {
              FUN_1001d7d0(puVar19);
              *puVar19 = &PTR_FUN_100e0904;
            }
            puVar19[1] = iVar13;
          }
          FUN_1007f800(puVar19,*(int *)(DAT_10122044 + 0x98) + iVar12);
          return;
        }
        pbVar14 = &DAT_10105634;
        puVar11 = puVar10;
        do {
          bVar1 = (byte)*puVar11;
          bVar23 = bVar1 < *pbVar14;
          if (bVar1 != *pbVar14) {
LAB_1001adb0:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001adb5;
          }
          if (bVar1 == 0) break;
          bVar1 = *(byte *)((int)puVar11 + 1);
          bVar23 = bVar1 < pbVar14[1];
          if (bVar1 != pbVar14[1]) goto LAB_1001adb0;
          puVar11 = (uint *)((int)puVar11 + 2);
          pbVar14 = pbVar14 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001adb5:
        if (iVar12 == 0) {
          if ((iVar13 == 0) && (iVar12 = (*DAT_10121e5c)(), iVar12 != 0)) {
            iVar13 = iVar12 + 0x80;
          }
          iVar12 = *(int *)(iVar13 + 0x208);
          if ((iVar12 == 0) ||
             (puVar19 = *(undefined4 **)(iVar12 + 0x7c), puVar19 == (undefined4 *)0x0)) {
            puVar19 = (undefined4 *)(*DAT_10121f04)(iVar12,0x69c);
            if (puVar19 == (undefined4 *)0x0) {
              puVar19 = (undefined4 *)0x0;
            }
            else {
              FUN_1001d7d0(puVar19);
              *puVar19 = &PTR_FUN_100e0904;
            }
            puVar19[1] = iVar13;
          }
          pbVar14 = (byte *)(*DAT_10121f54)(1);
          FUN_10081f40(puVar19,pbVar14);
          return;
        }
        pbVar14 = &DAT_10105630;
        puVar11 = puVar10;
        do {
          bVar1 = (byte)*puVar11;
          bVar23 = bVar1 < *pbVar14;
          if (bVar1 != *pbVar14) {
LAB_1001ae54:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001ae59;
          }
          if (bVar1 == 0) break;
          bVar1 = *(byte *)((int)puVar11 + 1);
          bVar23 = bVar1 < pbVar14[1];
          if (bVar1 != pbVar14[1]) goto LAB_1001ae54;
          puVar11 = (uint *)((int)puVar11 + 2);
          pbVar14 = pbVar14 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001ae59:
        if (iVar12 == 0) {
          if ((_DAT_101323b4 != _DAT_100dd5f8) && (iVar12 = (*DAT_10121f58)(), 1 < iVar12)) {
            if ((iVar13 == 0) && (iVar12 = (*DAT_10121e5c)(), iVar12 != 0)) {
              iVar13 = iVar12 + 0x80;
            }
            iVar12 = *(int *)(iVar13 + 0x208);
            if ((iVar12 == 0) ||
               (puVar19 = *(undefined4 **)(iVar12 + 0x7c), puVar19 == (undefined4 *)0x0)) {
              puVar19 = (undefined4 *)(*DAT_10121f04)(iVar12,0x69c);
              if (puVar19 == (undefined4 *)0x0) {
                puVar19 = (undefined4 *)0x0;
              }
              else {
                FUN_1001d7d0(puVar19);
                *puVar19 = &PTR_FUN_100e0904;
              }
              puVar19[1] = iVar13;
            }
            pbVar14 = (byte *)(*DAT_10121f54)(1);
            uVar28 = FUN_100c8388(this_03,pbVar14);
            puVar19[0x142] = uVar28;
            return;
          }
          if ((iVar13 == 0) && (iVar12 = (*DAT_10121e5c)(), iVar12 != 0)) {
            iVar13 = iVar12 + 0x80;
          }
          iVar12 = *(int *)(iVar13 + 0x208);
          if ((iVar12 == 0) ||
             (puVar19 = *(undefined4 **)(iVar12 + 0x7c), puVar19 == (undefined4 *)0x0)) {
            puVar19 = (undefined4 *)(*DAT_10121f04)(iVar12,0x69c);
            if (puVar19 == (undefined4 *)0x0) {
              puVar19 = (undefined4 *)0x0;
            }
            else {
              FUN_1001d7d0(puVar19);
              *puVar19 = &PTR_FUN_100e0904;
            }
            puVar19[1] = iVar13;
          }
          uVar28 = puVar19[0x142];
          pcVar20 = s__fov__is___d__10105620;
          puVar18 = FUN_100affd0((byte *)s__fov__is___d__10105620);
          (*DAT_10121f48)(param_1,0,puVar18,pcVar20,uVar28);
          return;
        }
        pbVar14 = &DAT_1010561c;
        puVar11 = puVar10;
        do {
          bVar1 = (byte)*puVar11;
          bVar23 = bVar1 < *pbVar14;
          if (bVar1 != *pbVar14) {
LAB_1001af99:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001af9e;
          }
          if (bVar1 == 0) break;
          bVar1 = *(byte *)((int)puVar11 + 1);
          bVar23 = bVar1 < pbVar14[1];
          if (bVar1 != pbVar14[1]) goto LAB_1001af99;
          puVar11 = (uint *)((int)puVar11 + 2);
          pbVar14 = pbVar14 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001af9e:
        if (iVar12 == 0) {
          if ((iVar13 == 0) && (iVar12 = (*DAT_10121e5c)(), iVar12 != 0)) {
            iVar13 = iVar12 + 0x80;
          }
          iVar12 = *(int *)(iVar13 + 0x208);
          if ((iVar12 == 0) || (*(int *)(iVar12 + 0x7c) == 0)) {
            puVar19 = (undefined4 *)(*DAT_10121f04)(iVar12,0x69c);
            if (puVar19 == (undefined4 *)0x0) {
              puVar19 = (undefined4 *)0x0;
            }
            else {
              FUN_1001d7d0(puVar19);
              *puVar19 = &PTR_FUN_100e0904;
            }
            puVar19[1] = iVar13;
          }
          (*DAT_10121f54)(1);
          FUN_1007f400();
          return;
        }
        puVar11 = FUN_100c88c0(puVar10,s_weapon__10105614);
        if ((puVar11 != (uint *)0x0) && (puVar11 == puVar10)) {
          if ((iVar13 == 0) && (iVar12 = (*DAT_10121e5c)(), iVar12 != 0)) {
            iVar13 = iVar12 + 0x80;
          }
          iVar12 = *(int *)(iVar13 + 0x208);
          if (((iVar12 == 0) || (iVar24 = iRam00000004, *(int *)(iVar12 + 0x7c) == 0)) &&
             (puVar19 = (undefined4 *)(*DAT_10121f04)(iVar12,0x69c), iVar24 = iVar13,
             puVar19 != (undefined4 *)0x0)) {
            FUN_1001d7d0(puVar19);
            *puVar19 = &PTR_FUN_100e0904;
            puVar19[1] = iVar13;
            FUN_1007f400();
            return;
          }
          iRam00000004 = iVar24;
          FUN_1007f400();
          return;
        }
        pcVar20 = s_lastinv_1010560c;
        puVar11 = puVar10;
        do {
          bVar1 = (byte)*puVar11;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001b0d6:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001b0db;
          }
          if (bVar1 == 0) break;
          bVar1 = *(byte *)((int)puVar11 + 1);
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001b0d6;
          puVar11 = (uint *)((int)puVar11 + 2);
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001b0db:
        if (iVar12 == 0) {
          if ((iVar13 == 0) && (iVar12 = (*DAT_10121e5c)(), iVar12 != 0)) {
            iVar13 = iVar12 + 0x80;
          }
          iVar12 = *(int *)(iVar13 + 0x208);
          if ((iVar12 == 0) || (iVar24 = *(int *)(iVar12 + 0x7c), iVar24 == 0)) {
            puVar19 = (undefined4 *)(*DAT_10121f04)(iVar12,0x69c);
            if (puVar19 != (undefined4 *)0x0) {
              FUN_1001d7d0(puVar19);
              *puVar19 = &PTR_FUN_100e0904;
              puVar19[1] = iVar13;
              FUN_1007f410((int)puVar19);
              return;
            }
            iVar24 = 0;
            iRam00000004 = iVar13;
          }
          FUN_1007f410(iVar24);
          return;
        }
        iVar12 = iVar13;
        if (iVar13 == 0) {
          iVar12 = (*DAT_10121e5c)();
          if (iVar12 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar12 + 0x80;
          }
        }
        iVar24 = *(int *)(iVar12 + 0x208);
        if ((iVar24 == 0) ||
           (puVar19 = *(undefined4 **)(iVar24 + 0x7c), puVar19 == (undefined4 *)0x0)) {
          puVar19 = (undefined4 *)(*DAT_10121f04)(iVar24,0x69c);
          if (puVar19 == (undefined4 *)0x0) {
            puVar19 = (undefined4 *)0x0;
          }
          else {
            FUN_1001d7d0(puVar19);
            *puVar19 = &PTR_FUN_100e0904;
          }
          puVar19[1] = iVar12;
        }
        iVar12 = (**(code **)(*DAT_10121db8 + 0x60))(puVar19,puVar10);
        if (iVar12 != 0) {
          return;
        }
        pcVar20 = s_efw_diary_10105600;
        do {
          bVar1 = (byte)*puVar10;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001b1e8:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001b1ed;
          }
          if (bVar1 == 0) break;
          bVar1 = *(byte *)((int)puVar10 + 1);
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001b1e8;
          puVar10 = (uint *)((int)puVar10 + 2);
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001b1ed:
        if (iVar12 == 0) {
          iVar13 = FUN_100c81b0(5);
          FUN_100c81a0(5,(uint)(iVar13 == 0));
          return;
        }
        pcVar20 = s_efw_diary_next_101055f0;
        pbVar14 = unaff_EDI;
        do {
          bVar1 = *pbVar14;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001b240:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001b245;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001b240;
          pbVar14 = pbVar14 + 2;
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001b245:
        if (iVar12 == 0) {
          FUN_100c81a0(5,1);
          iVar13 = FUN_100c6880();
          iVar12 = FUN_100c81b0(0);
          iVar12 = iVar12 + 1;
          if (iVar12 == iVar13) {
            iVar12 = 1;
          }
          FUN_100c81a0(0,iVar12);
          return;
        }
        pcVar20 = s_efw_diary_prev_101055e0;
        pbVar14 = unaff_EDI;
        do {
          bVar1 = *pbVar14;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001b2b0:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001b2b5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001b2b0;
          pbVar14 = pbVar14 + 2;
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001b2b5:
        if (iVar12 == 0) {
          FUN_100c81a0(5,1);
          iVar12 = FUN_100c6880();
          iVar13 = FUN_100c81b0(0);
          iVar13 = iVar13 + -1;
          if (iVar13 == 0) {
            iVar13 = iVar12 + -1;
          }
          FUN_100c81a0(0,iVar13);
          return;
        }
        pcVar20 = s_efw_changelevel_101055d0;
        pbVar14 = unaff_EDI;
        do {
          bVar1 = *pbVar14;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001b31c:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001b321;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001b31c;
          pbVar14 = pbVar14 + 2;
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001b321:
        if (iVar12 == 0) {
          uVar28 = (*DAT_10121f54)(1,0);
          (*DAT_10121e20)(uVar28);
          return;
        }
        pcVar20 = s_efw_pause_101055c4;
        pbVar14 = unaff_EDI;
        do {
          bVar1 = *pbVar14;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001b373:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001b378;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001b373;
          pbVar14 = pbVar14 + 2;
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001b378:
        if (iVar12 == 0) {
          iVar13 = (*DAT_10121f54)(1);
          if ((iVar13 != 0) && (pcVar20 = (char *)(*DAT_10121f54)(1), *pcVar20 == '1')) {
            FUN_100c7510(1);
            return;
          }
          FUN_100c7510(0);
          return;
        }
        pcVar20 = s_efw_set_state_101055b4;
        pbVar14 = unaff_EDI;
        do {
          bVar1 = *pbVar14;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001b3f9:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001b3fe;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001b3f9;
          pbVar14 = pbVar14 + 2;
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001b3fe:
        if (iVar12 == 0) {
          iVar13 = (*DAT_10121f54)(2);
          if ((iVar13 == 0) || (pcVar20 = (char *)(*DAT_10121f54)(2), *pcVar20 != '1')) {
            uVar8 = 0;
          }
          else {
            uVar8 = 1;
          }
          pcVar20 = (char *)(*DAT_10121f54)(1);
          FUN_100c3500(pcVar20,uVar8);
          return;
        }
        pcVar20 = s_efw_spider_101055a8;
        pbVar14 = unaff_EDI;
        do {
          bVar1 = *pbVar14;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001b479:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001b47e;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001b479;
          pbVar14 = pbVar14 + 2;
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001b47e:
        if (iVar12 == 0) {
          bVar23 = FUN_100c7820();
          if (!bVar23) {
            FUN_100c80d0();
            return;
          }
          FUN_100c7d30();
          iVar12 = 0x48;
          iVar13 = FUN_100c6980();
          FUN_100c81d0(iVar13,iVar12);
          return;
        }
        pcVar20 = s_efw_UseWithMarker_10105580;
        pbVar14 = unaff_EDI;
        do {
          bVar1 = *pbVar14;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001b4f0:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001b4f5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001b4f0;
          pbVar14 = pbVar14 + 2;
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001b4f5:
        if (iVar12 == 0) {
          pbVar14 = (byte *)(*DAT_10121f54)(1);
          iVar13 = FUN_100c8388(this_04,pbVar14);
          pbVar14 = (byte *)(*DAT_10121f54)(2);
          if ((unaff_ESI == 0) && (iVar12 = (*DAT_10121e5c)(), iVar12 != 0)) {
            unaff_ESI = iVar12 + 0x80;
          }
          iVar12 = *(int *)(unaff_ESI + 0x208);
          if ((iVar12 == 0) || (piVar22 = *(int **)(iVar12 + 0x7c), piVar22 == (int *)0x0)) {
            piVar22 = (int *)(*DAT_10121f04)(iVar12,0x69c);
            if (piVar22 == (int *)0x0) {
              piVar22 = (int *)0x0;
            }
            else {
              FUN_10002dc0(piVar22);
              FUN_10002ec0(piVar22 + 100,0xc,4,FUN_1001bbd0);
              FUN_10002ec0(piVar22 + 0x7b,0x10,8,FUN_10002f10);
              *piVar22 = (int)&PTR_FUN_100e0904;
            }
            piVar22[1] = unaff_ESI;
          }
          piVar22 = (int *)FUN_100c2ee0(piVar22,iVar13);
          if (piVar22 == (int *)0x0) {
            return;
          }
          iVar13 = FUN_100af030(0,pbVar14);
          if (iVar13 == 0) {
            return;
          }
          (**(code **)(*piVar22 + 0x1a8))(iVar13);
          return;
        }
        pcVar20 = s_efw_Pickup_10105574;
        pbVar14 = unaff_EDI;
        do {
          bVar1 = *pbVar14;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001b600:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001b605;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001b600;
          pbVar14 = pbVar14 + 2;
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001b605:
        if (iVar12 == 0) {
          uVar28 = (*DAT_10121f54)(1);
          piVar22 = (int *)FUN_100aec40(0,uVar28);
          if (piVar22 == (int *)0x0) {
            return;
          }
          if (*(int *)(piVar22[1] + 0x198) != 0) {
            return;
          }
          iVar13 = *piVar22;
          uVar28 = FUN_100c6980();
          (**(code **)(iVar13 + 0x114))(uVar28);
          return;
        }
        pbVar21 = &DAT_10105568;
        pbVar14 = unaff_EDI;
        do {
          bVar1 = *pbVar14;
          bVar23 = bVar1 < *pbVar21;
          if (bVar1 != *pbVar21) {
LAB_1001b67f:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001b684;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar23 = bVar1 < pbVar21[1];
          if (bVar1 != pbVar21[1]) goto LAB_1001b67f;
          pbVar14 = pbVar14 + 2;
          pbVar21 = pbVar21 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001b684:
        if (iVar12 == 0) {
          fVar29 = 1e+07;
          uVar15 = 0;
          iVar13 = FUN_100c6980();
          iVar13 = *(int *)(iVar13 + 4);
          fVar2 = *(float *)(iVar13 + 8);
          fVar3 = *(float *)(iVar13 + 0xc);
          fVar4 = *(float *)(iVar13 + 0x10);
          uVar28 = (*DAT_10121f54)(1);
          pcVar20 = s_>>>_efw_Talk__s_10105554;
          FUN_100c80d0();
          pbVar14 = (byte *)(*DAT_10121f54)(1,pcVar20,uVar28);
          uVar16 = FUN_100af030(0,pbVar14);
          if (uVar16 != 0) {
            do {
              iVar13 = *(int *)(uVar16 + 4);
              fVar5 = *(float *)(iVar13 + 8) - fVar2;
              fVar7 = *(float *)(iVar13 + 0xc) - fVar3;
              fVar6 = *(float *)(iVar13 + 0x10) - fVar4;
              fVar5 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
              if (fVar5 < fVar29) {
                uVar15 = uVar16;
                fVar29 = fVar5;
              }
              pbVar14 = (byte *)(*DAT_10121f54)(1);
              uVar16 = FUN_100af030(uVar16,pbVar14);
            } while (uVar16 != 0);
            if (uVar15 != 0) {
              FUN_100c80d0();
              FUN_100c6420(uVar15);
              return;
            }
          }
          FUN_100c80d0();
          return;
        }
        pbVar21 = &DAT_10105514;
        pbVar14 = unaff_EDI;
        do {
          bVar1 = *pbVar14;
          bVar23 = bVar1 < *pbVar21;
          if (bVar1 != *pbVar21) {
LAB_1001b7ad:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001b7b2;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar23 = bVar1 < pbVar21[1];
          if (bVar1 != pbVar21[1]) goto LAB_1001b7ad;
          pbVar14 = pbVar14 + 2;
          pbVar21 = pbVar21 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001b7b2:
        if (iVar12 == 0) {
          pbVar14 = (byte *)(*DAT_10121f54)(1);
          iVar13 = FUN_100c8388(this_05,pbVar14);
          pbVar14 = (byte *)(*DAT_10121f54)(2);
          if ((unaff_ESI == 0) && (iVar12 = (*DAT_10121e5c)(), iVar12 != 0)) {
            unaff_ESI = iVar12 + 0x80;
          }
          iVar12 = *(int *)(unaff_ESI + 0x208);
          if ((iVar12 == 0) || (piVar22 = *(int **)(iVar12 + 0x7c), piVar22 == (int *)0x0)) {
            piVar22 = (int *)(*DAT_10121f04)(iVar12,0x69c);
            if (piVar22 == (int *)0x0) {
              piVar22 = (int *)0x0;
            }
            else {
              FUN_10002dc0(piVar22);
              FUN_10002ec0(piVar22 + 0x7b,0x10,8,FUN_10002f10);
              *piVar22 = (int)&PTR_FUN_100e0904;
            }
            piVar22[1] = unaff_ESI;
          }
          piVar22 = (int *)FUN_100c2ee0(piVar22,iVar13);
          if (piVar22 == (int *)0x0) {
            return;
          }
          fVar29 = 1e+07;
          iVar12 = 0;
          iVar13 = FUN_100c6980();
          iVar13 = *(int *)(iVar13 + 4);
          fVar2 = *(float *)(iVar13 + 8);
          fVar3 = *(float *)(iVar13 + 0xc);
          fVar4 = *(float *)(iVar13 + 0x10);
          iVar13 = FUN_100af030(0,pbVar14);
          if (iVar13 == 0) {
            return;
          }
          do {
            iVar24 = *(int *)(iVar13 + 4);
            fVar5 = *(float *)(iVar24 + 8) - fVar2;
            fVar7 = *(float *)(iVar24 + 0xc) - fVar3;
            fVar6 = *(float *)(iVar24 + 0x10) - fVar4;
            fVar5 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
            if (fVar5 < fVar29) {
              iVar12 = iVar13;
              fVar29 = fVar5;
            }
            iVar13 = FUN_100af030(iVar13,pbVar14);
          } while (iVar13 != 0);
          if (iVar12 == 0) {
            return;
          }
          (**(code **)(*piVar22 + 0x1a4))(iVar12);
          return;
        }
        pcVar20 = s_efw_ShowMenu_10105504;
        pbVar14 = unaff_EDI;
        do {
          bVar1 = *pbVar14;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001b931:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001b936;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001b931;
          pbVar14 = pbVar14 + 2;
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001b936:
        if (iVar12 == 0) {
          pbVar14 = (byte *)(*DAT_10121f54)(1);
          iVar13 = FUN_100c8388(this_06,pbVar14);
          iVar12 = FUN_100c6980();
          FUN_100c81d0(iVar12,iVar13);
          return;
        }
        pcVar20 = s_efw_HideUnderBuilding_101054ec;
        pbVar14 = unaff_EDI;
        do {
          bVar1 = *pbVar14;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001b992:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001b997;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001b992;
          pbVar14 = pbVar14 + 2;
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001b997:
        if (iVar12 == 0) {
          uVar8 = FUN_100c5b80();
          if (CONCAT31(extraout_var,uVar8) == 0) {
            cVar9 = FUN_100c3430(s_PliersInBin_101054e0);
            if (cVar9 == '\0') {
              iVar12 = 0x40;
              iVar13 = FUN_100c6980();
              FUN_100c81d0(iVar13,iVar12);
              return;
            }
            cVar9 = FUN_100c3430(s_GholanAgreedToPloy_101054cc);
            if (cVar9 != '\0') {
              pcVar20 = s_weapon_efw_Lever_101054b8;
              piVar22 = (int *)FUN_100c6980();
              uVar15 = FUN_100c2f70(piVar22,(byte *)pcVar20);
              if ((char)uVar15 != '\0') {
                iVar12 = 0x3f;
                iVar13 = FUN_100c6980();
                FUN_100c81d0(iVar13,iVar12);
                return;
              }
              iVar12 = 0x42;
              iVar13 = FUN_100c6980();
              FUN_100c81d0(iVar13,iVar12);
              return;
            }
            iVar12 = 0x41;
            iVar13 = FUN_100c6980();
            FUN_100c81d0(iVar13,iVar12);
            return;
          }
          if (CONCAT31(extraout_var,uVar8) != 1) {
            return;
          }
          pcVar20 = s_weapon_efw_Pliers_101054a4;
          piVar22 = (int *)FUN_100c6980();
          uVar15 = FUN_100c2f70(piVar22,(byte *)pcVar20);
          if ((char)uVar15 == '\0') {
            iVar12 = 0x44;
            iVar13 = FUN_100c6980();
            FUN_100c81d0(iVar13,iVar12);
            return;
          }
          iVar12 = 0x43;
          iVar13 = FUN_100c6980();
          FUN_100c81d0(iVar13,iVar12);
          return;
        }
        pcVar20 = s_efw_HelpScreen_10105494;
        pbVar14 = unaff_EDI;
        do {
          bVar1 = *pbVar14;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001bad4:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001bad9;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001bad4;
          pbVar14 = pbVar14 + 2;
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001bad9:
        if (iVar12 == 0) {
          iVar12 = 0x52;
          iVar13 = FUN_100c6980();
          FUN_100c81d0(iVar13,iVar12);
          return;
        }
        pcVar20 = s_efw_PickupPliers_10105480;
        pbVar14 = unaff_EDI;
        do {
          bVar1 = *pbVar14;
          bVar23 = bVar1 < (byte)*pcVar20;
          if (bVar1 != *pcVar20) {
LAB_1001bb25:
            iVar12 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1001bb2a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar14[1];
          bVar23 = bVar1 < (byte)pcVar20[1];
          if (bVar1 != pcVar20[1]) goto LAB_1001bb25;
          pbVar14 = pbVar14 + 2;
          pcVar20 = pcVar20 + 2;
        } while (bVar1 != 0);
        iVar12 = 0;
LAB_1001bb2a:
        if (iVar12 == 0) {
          iVar13 = FUN_100c6980();
          uVar28 = FUN_100c59c0(iVar13);
          if ((char)uVar28 != '\0') {
            FUN_100ba040((byte *)s_efw_electrician_101031bc,s_Oi__Put_that_back__1010546c,10);
            return;
          }
          pcVar20 = s_weapon_efw_Pliers_101054a4;
          this = (void *)FUN_100c6980();
          FUN_1007f800(this,(int)pcVar20);
          return;
        }
        _strncpy(acStack_90,(char *)unaff_EDI,0x7f);
        uStack_11 = 0;
        iVar26 = 0;
        iVar25 = 0;
        iVar24 = 0;
        iVar12 = 0;
        puVar18 = FUN_100affd0((byte *)s_Unknown_command___s_10105454);
      }
      FUN_100af9c0(iVar13,2,puVar18,iVar12,iVar24,iVar25,iVar26);
    }
  }
  return;
}

