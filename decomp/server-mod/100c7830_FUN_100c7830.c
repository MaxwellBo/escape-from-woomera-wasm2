
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7830(void)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  byte *pbVar13;
  char *pcVar14;
  bool bVar15;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int *local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  float fStack_60;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  DAT_10134940 = 0;
  piVar7 = (int *)FUN_100c6980();
  iVar12 = piVar7[1];
  local_ec = *(undefined4 *)(iVar12 + 8);
  local_e8 = *(undefined4 *)(iVar12 + 0xc);
  local_e4 = *(undefined4 *)(iVar12 + 0x10);
  local_e0 = piVar7;
  piVar8 = (int *)FUN_100aeba0(0,&local_ec,0x42f60000);
  do {
    if ((piVar8 == (int *)0x0) || (2 < DAT_10134940)) {
      iVar12 = FUN_100c6980();
      (*DAT_10121ec0)(1,DAT_10124908,0,*(undefined4 *)(*(int *)(iVar12 + 4) + 0x208));
      (*DAT_10121ec8)(DAT_10134940 != 0);
      (*DAT_10121ec4)();
      return;
    }
    if (piVar8 != piVar7) {
      pbVar13 = (byte *)(*(int *)((int)DAT_10122044 + 0x98) + (int)*(void **)piVar8[1]);
      uVar9 = FUN_100d8b20(*(void **)piVar8[1],pbVar13,(byte *)s_monster_refugee_10114fb4);
      if ((uVar9 == 0) ||
         (uVar9 = FUN_100d8b20(this,pbVar13,(byte *)s_monster_barney_10115c10), uVar9 == 0)) {
        iVar12 = piVar7[1];
        iVar2 = piVar8[1];
        fVar3 = *(float *)(iVar12 + 8) - *(float *)(iVar2 + 8);
        fVar5 = *(float *)(iVar12 + 0xc) - *(float *)(iVar2 + 0xc);
        fVar4 = *(float *)(iVar12 + 0x10) - *(float *)(iVar2 + 0x10);
        if (SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4) < _DAT_100f95e0) {
          iVar12 = 0;
LAB_100c7b80:
          _strncpy(&DAT_101348b4 + DAT_10134940 * 0x30,
                   (char *)(*(int *)(piVar8[1] + 0x1cc) + *(int *)((int)DAT_10122044 + 0x98)),0x1d);
          iVar6 = DAT_10134940;
          iVar11 = DAT_10134940 * 0x30;
          (&DAT_101348d1)[iVar11] = 0;
          iVar2 = piVar8[1];
          (&DAT_101348d4)[iVar6 * 0xc] = *(float *)(iVar2 + 8);
          (&DAT_101348d8)[iVar6 * 0xc] = *(undefined4 *)(iVar2 + 0xc);
          (&DAT_101348dc)[iVar6 * 0xc] = *(undefined4 *)(iVar2 + 0x10);
          if (iVar12 == 0) {
            (&DAT_101348dc)[iVar6 * 0xc] = (float)(&DAT_101348dc)[iVar6 * 0xc] + _DAT_100ddb10;
          }
          else if (iVar12 == 1) {
            iVar2 = piVar8[1];
            fStack_90 = *(float *)(iVar2 + 0xd4) + *(float *)(iVar2 + 200);
            fStack_8c = *(float *)(iVar2 + 0xd8) + *(float *)(iVar2 + 0xcc);
            fStack_dc = (*(float *)(iVar2 + 0xc4) + *(float *)(iVar2 + 0xd0)) * _DAT_100dd614;
            fStack_d8 = fStack_90 * _DAT_100dd614;
            (&DAT_101348d4)[iVar6 * 0xc] = fStack_dc;
            fStack_d4 = fStack_8c * _DAT_100dd614;
            (&DAT_101348d8)[iVar6 * 0xc] = fStack_d8;
            (&DAT_101348dc)[iVar6 * 0xc] = fStack_d4;
          }
          *(int *)(&DAT_101348b0 + iVar11) = iVar12;
          DAT_10134940 = DAT_10134940 + 1;
          piVar7 = local_e0;
        }
      }
      else {
        uVar9 = FUN_100d8b20(this_00,pbVar13,(byte *)s_efw_Marker_1011c9ac);
        if (uVar9 == 0) {
          uVar9 = FUN_100d8b20(*(void **)((int)DAT_10122044 + 0x98),
                               (byte *)(*(int *)(piVar8[1] + 0x1cc) +
                                       (int)*(void **)((int)DAT_10122044 + 0x98)),
                               (byte *)s_efw_hiding_place_1011d458);
          if (uVar9 == 0) {
            (**(code **)(*piVar7 + 0x214))(&local_a0);
            uStack_d0 = local_a0;
            uStack_cc = uStack_9c;
            uStack_c8 = uStack_98;
            iVar12 = piVar8[1];
            fStack_b4 = *(float *)(iVar12 + 200) + *(float *)(iVar12 + 0xd4);
            fStack_b0 = *(float *)(iVar12 + 0xcc) + *(float *)(iVar12 + 0xd8);
            fStack_88 = (*(float *)(iVar12 + 0xc4) + *(float *)(iVar12 + 0xd0)) * _DAT_100dd614;
            fStack_84 = fStack_b4 * _DAT_100dd614;
            fStack_80 = fStack_b0 * _DAT_100dd614;
            FUN_100afc60(&uStack_d0,&fStack_88,0,*(undefined4 *)(piVar7[1] + 0x208),auStack_70);
            if (fStack_60 < _DAT_100f9158) goto LAB_100c7cd2;
          }
          pcVar14 = s_efw_PliersMarker_1011d444;
          pbVar13 = (byte *)(*(int *)(piVar8[1] + 0x1c8) + *(int *)((int)DAT_10122044 + 0x98));
          do {
            bVar1 = *pbVar13;
            bVar15 = bVar1 < (byte)*pcVar14;
            if (bVar1 != *pcVar14) {
LAB_100c7a2a:
              iVar12 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_100c7a2f;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar13[1];
            bVar15 = bVar1 < (byte)pcVar14[1];
            if (bVar1 != pcVar14[1]) goto LAB_100c7a2a;
            pbVar13 = pbVar13 + 2;
            pcVar14 = pcVar14 + 2;
          } while (bVar1 != 0);
          iVar12 = 0;
LAB_100c7a2f:
          if (iVar12 != 0) {
LAB_100c7a97:
            iVar12 = 1;
            goto LAB_100c7b80;
          }
          pcVar14 = s_weapon_efw_Pliers_101054a4;
          piVar10 = (int *)FUN_100c6980();
          uVar9 = FUN_100c2f70(piVar10,(byte *)pcVar14);
          if ((char)uVar9 == '\0') {
            iVar12 = 1;
            goto LAB_100c7b80;
          }
        }
        else {
          uVar9 = FUN_100d8b20(this_01,pbVar13,(byte *)s_func_door_rotating_101076a8);
          if (uVar9 == 0) {
            uVar9 = FUN_100d8b20(DAT_10122044,
                                 (byte *)(*(int *)(piVar8[1] + 0x1cc) +
                                         *(int *)((int)DAT_10122044 + 0x98)),
                                 (byte *)s_efw_cage_door_1011cc78);
            if (uVar9 == 0) goto LAB_100c7a97;
          }
          else {
            iVar12 = FUN_100d8bf0(pbVar13,s_weapon_efw_1011d438,&DAT_0000000a);
            if (iVar12 == 0) {
              uVar9 = FUN_100d8b20(this_02,pbVar13,(byte *)s_weapon_efw_Pliers_101054a4);
              if (uVar9 == 0) {
                (**(code **)(*piVar7 + 0x214))(&local_7c);
                uStack_ac = local_7c;
                uStack_a8 = uStack_78;
                uStack_a4 = uStack_74;
                iVar12 = piVar8[1];
                uStack_c4 = *(undefined4 *)(iVar12 + 8);
                uStack_c0 = *(undefined4 *)(iVar12 + 0xc);
                uStack_bc = *(undefined4 *)(iVar12 + 0x10);
                FUN_100afc60(&uStack_ac,&uStack_c4,0,*(undefined4 *)(piVar7[1] + 0x208),auStack_38);
                if (fStack_28 < _DAT_100f9158) goto LAB_100c7cd2;
              }
              if (piVar8[0x37] == 0) {
                iVar12 = FUN_100c43b0(pbVar13);
                iVar12 = iVar12 + 100;
                if (iVar12 != -1) goto LAB_100c7b80;
              }
            }
          }
        }
      }
    }
LAB_100c7cd2:
    piVar8 = (int *)FUN_100aeba0((int)piVar8,&local_ec,0x42f60000);
  } while( true );
}

