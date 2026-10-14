
void FUN_10094750(void)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  void *extraout_ECX;
  uint uVar8;
  void *extraout_ECX_00;
  void *pvVar9;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int *piVar14;
  bool bVar15;
  char *pcVar16;
  int *piStack_254;
  int local_24c [2];
  byte *pbStack_244;
  byte local_240 [63];
  char cStack_201;
  undefined4 local_200;
  
  if (DAT_10131048 == 0) {
    DAT_1013104c = 0;
    puVar4 = &DAT_10129448;
    for (iVar7 = 0x1800; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar4 = &DAT_10126ba8;
    for (iVar7 = 0xa28; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar4 = &local_200;
    for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    pbVar6 = local_240;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
      pbVar6 = pbVar6 + 4;
    }
    local_24c[1] = 0;
    iVar7 = (*DAT_10121f84)(s_sound_sentences_txt_10117044,local_24c);
    if (iVar7 != 0) {
      puVar4 = FUN_10094d00(iVar7,local_24c[0],local_24c + 1,&local_200,0x1ff);
      if (puVar4 != (undefined4 *)0x0) {
        piStack_254 = (int *)&DAT_10126b84;
        pvVar9 = extraout_ECX;
LAB_100947f3:
        iVar10 = 0;
        cVar2 = (char)local_200;
        while ((cVar2 != '\0' && (cVar2 == ' '))) {
          iVar11 = iVar10 + 1;
          iVar10 = iVar10 + 1;
          cVar2 = *(char *)((int)&local_200 + iVar11);
        }
        cVar2 = *(char *)((int)&local_200 + iVar10);
        pbVar6 = (byte *)((int)&local_200 + iVar10);
        pbStack_244 = pbVar6;
        if (((cVar2 != '\0') && (cVar2 != '/')) &&
           (uVar5 = FUN_100c8558(pvVar9,(int)cVar2), uVar5 != 0)) {
          bVar3 = *pbVar6;
          iVar11 = iVar10;
          while ((bVar3 != 0 && (bVar3 != 0x20))) {
            iVar12 = iVar11 + 1;
            iVar11 = iVar11 + 1;
            bVar3 = *(byte *)((int)&local_200 + iVar12);
          }
          if (*(char *)((int)&local_200 + iVar11) == '\0') goto LAB_100949c3;
          if (DAT_1013104c < 0x601) {
            uVar5 = 0xffffffff;
            *(undefined1 *)((int)&local_200 + iVar11) = 0;
            pbVar13 = pbVar6;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              bVar3 = *pbVar13;
              pbVar13 = pbVar13 + 1;
            } while (bVar3 != 0);
            if (0xf < ~uVar5 - 1) {
              (*DAT_10121efc)(3,s_Sentence__s_longer_than__d_lette_10117020,pbVar6,0xf);
            }
            iVar12 = DAT_1013104c * 4;
            DAT_1013104c = DAT_1013104c + 1;
            uVar5 = 0xffffffff;
            do {
              pbVar13 = pbVar6;
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              pbVar13 = pbVar6 + 1;
              bVar3 = *pbVar6;
              pbVar6 = pbVar13;
            } while (bVar3 != 0);
            uVar5 = ~uVar5;
            pbVar6 = pbVar13 + -uVar5;
            pbVar13 = (byte *)(&DAT_10129448 + iVar12);
            for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pbVar13 = *(undefined4 *)pbVar6;
              pbVar6 = pbVar6 + 4;
              pbVar13 = pbVar13 + 4;
            }
            iVar12 = iVar11 + -1;
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *pbVar13 = *pbVar6;
              pbVar6 = pbVar6 + 1;
              pbVar13 = pbVar13 + 1;
            }
            if ((iVar10 < iVar12) &&
               (uVar5 = FUN_100c85d6((void *)(int)(&cStack_201)[iVar11],(int)(&cStack_201)[iVar11]),
               pvVar9 = extraout_ECX_00, uVar5 != 0)) {
              do {
                uVar5 = FUN_100c85d6(pvVar9,(int)*(char *)((int)&local_200 + iVar12));
                if (uVar5 == 0) {
                  if (iVar10 < iVar12) {
                    *(undefined1 *)((int)&local_200 + iVar12 + 1) = 0;
                    pbVar6 = local_240;
                    pbVar13 = pbStack_244;
                    goto LAB_10094921;
                  }
                  break;
                }
                iVar12 = iVar12 + -1;
                pvVar9 = extraout_ECX_01;
              } while (iVar10 < iVar12);
            }
            goto LAB_100949c3;
          }
          pcVar16 = s_Too_many_sentences_in_sentences__10116ff8;
          goto LAB_100949fa;
        }
        goto LAB_100949c3;
      }
LAB_10094a05:
      (*DAT_10121f88)(iVar7);
      DAT_10131048 = 1;
      if (DAT_10126bb8 != 0) {
        piVar14 = &DAT_10126bb8;
        do {
          if (0x10129457 < (int)piVar14) {
            return;
          }
          FUN_10094250((int)(piVar14 + 1),*piVar14);
          piVar1 = piVar14 + 0xd;
          piVar14 = piVar14 + 0xd;
        } while (*piVar1 != 0);
      }
    }
  }
  return;
  while( true ) {
    bVar3 = pbVar6[1];
    bVar15 = bVar3 < pbVar13[1];
    if (bVar3 != pbVar13[1]) goto LAB_10094949;
    pbVar6 = pbVar6 + 2;
    pbVar13 = pbVar13 + 2;
    if (bVar3 == 0) break;
LAB_10094921:
    bVar3 = *pbVar6;
    bVar15 = bVar3 < *pbVar13;
    if (bVar3 != *pbVar13) {
LAB_10094949:
      iVar10 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_1009494e;
    }
    if (bVar3 == 0) break;
  }
  iVar10 = 0;
LAB_1009494e:
  if (iVar10 == 0) {
    if (0x10126bb7 < (int)piStack_254) {
      *piStack_254 = *piStack_254 + 1;
    }
  }
  else {
    piVar14 = piStack_254 + 0xd;
    if (0x10129457 < (int)piVar14) {
      pcVar16 = s_Too_many_sentence_groups_in_sent_10116fcc;
LAB_100949fa:
      (*DAT_10121efc)(4,pcVar16);
      goto LAB_10094a05;
    }
    uVar5 = 0xffffffff;
    pbVar6 = pbStack_244;
    do {
      pbVar13 = pbVar6;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar13 = pbVar6 + 1;
      bVar3 = *pbVar6;
      pbVar6 = pbVar13;
    } while (bVar3 != 0);
    uVar5 = ~uVar5;
    pbVar6 = pbVar13 + -uVar5;
    pbVar13 = (byte *)(piStack_254 + 9);
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(int *)pbVar13 = *(int *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar13 = pbVar13 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar13 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      pbVar13 = pbVar13 + 1;
    }
    uVar5 = 0xffffffff;
    pbVar6 = pbStack_244;
    do {
      pbVar13 = pbVar6;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar13 = pbVar6 + 1;
      bVar3 = *pbVar6;
      pbVar6 = pbVar13;
    } while (bVar3 != 0);
    uVar5 = ~uVar5;
    *piVar14 = 1;
    pbVar6 = pbVar13 + -uVar5;
    pbVar13 = local_240;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar13 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar13 = pbVar13 + 4;
    }
    for (uVar5 = uVar5 & 3; piStack_254 = piVar14, uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar13 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      pbVar13 = pbVar13 + 1;
    }
  }
LAB_100949c3:
  puVar4 = FUN_10094d00(iVar7,local_24c[0],local_24c + 1,&local_200,0x1ff);
  pvVar9 = extraout_ECX_02;
  if (puVar4 == (undefined4 *)0x0) goto LAB_10094a05;
  goto LAB_100947f3;
}

