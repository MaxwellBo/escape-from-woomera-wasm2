
uint __fastcall FUN_10020870(int param_1)

{
  float *pfVar1;
  char cVar2;
  byte bVar3;
  void *this;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void *this_00;
  void *this_01;
  undefined1 *extraout_ECX;
  void *this_02;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  void *this_03;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  void *this_07;
  void *extraout_ECX_06;
  char *pcVar9;
  byte *pbVar10;
  float *pfVar11;
  byte *pbVar12;
  float10 fVar13;
  longlong lVar14;
  undefined1 *puVar15;
  char *pcVar16;
  byte abStack_600 [1024];
  undefined1 auStack_200 [251];
  undefined1 auStack_105 [5];
  char acStack_100 [256];
  
  pfVar1 = (float *)(param_1 + 0x20);
  pfVar11 = pfVar1;
  for (iVar6 = 0x4b; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar11 = 0.0;
    pfVar11 = pfVar11 + 1;
  }
  *(undefined4 *)(param_1 + 0x144) = 0xb4;
  *(undefined4 *)(param_1 + 0x13c) = 4;
  *(undefined4 *)(param_1 + 0x140) = 4;
  *(undefined4 *)(param_1 + 0x148) = 0xf0;
  *pfVar1 = 0.0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar6 = (*DAT_100a5118)();
  uVar7 = 0xffffffff;
  pcVar9 = (char *)(iVar6 + 5);
  do {
    pcVar16 = pcVar9;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar16 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar16;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar16 + -uVar7;
  pcVar16 = acStack_100;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar16 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar16 = pcVar16 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar9 = acStack_100;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  auStack_105[~uVar7] = 0;
  pcVar9 = acStack_100;
  puVar15 = auStack_200;
  pcVar16 = s_overviews__s_txt_10078d90;
  FUN_100499f0(puVar15,(byte *)s_overviews__s_txt_10078d90);
  iVar6 = (*DAT_100a512c)(auStack_200,5,0,puVar15,pcVar16,pcVar9);
  if (iVar6 == 0) {
    uVar7 = (*DAT_100a5090)(s_Couldn_t_open_file__s__Using_def_10078d50,auStack_200);
    return uVar7 & 0xffffff00;
  }
  do {
    do {
      while( true ) {
        iVar6 = (*DAT_100a5130)(iVar6,abStack_600);
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0x954) = *(undefined4 *)(param_1 + 0x2c);
          *(float *)(param_1 + 0x958) = *pfVar1;
          *(undefined4 *)(param_1 + 0x95c) = *(undefined4 *)(param_1 + 0x24);
          *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_1 + 0x28);
          return CONCAT31((int3)((uint)*pfVar1 >> 8),1);
        }
        uVar7 = FUN_10056910(this_00,abStack_600,(byte *)s_global_10078d48);
        if (uVar7 == 0) break;
        uVar7 = FUN_10056910(abStack_600,abStack_600,(byte *)s_layer_10078d30);
        if (uVar7 == 0) {
          if (*(int *)(param_1 + 0x30) == 1) {
            uVar7 = (*DAT_100a5090)(s_Error_parsing_overview_file__s____10078cb8,auStack_200);
            return uVar7 & 0xffffff00;
          }
          uVar4 = (*DAT_100a5130)(iVar6,abStack_600);
          uVar7 = FUN_10056910(this_05,abStack_600,&DAT_10078a34);
          if (uVar7 != 0) {
            uVar7 = (*DAT_100a5090)(s_Error_parsing_overview_file__s____10078cf0,auStack_200);
            return uVar7 & 0xffffff00;
          }
          iVar6 = (*DAT_100a5130)(uVar4,abStack_600);
          uVar7 = FUN_10056910(this_06,abStack_600,&DAT_10078a30);
          this = extraout_ECX_04;
          while (uVar7 != 0) {
            uVar7 = FUN_10056910(this,abStack_600,(byte *)s_image_10078d28);
            if (uVar7 == 0) {
              uVar4 = (*DAT_100a5130)(iVar6,abStack_600);
              uVar7 = 0xffffffff;
              pbVar10 = abStack_600;
              do {
                pbVar12 = pbVar10;
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                pbVar12 = pbVar10 + 1;
                bVar3 = *pbVar10;
                pbVar10 = pbVar12;
              } while (bVar3 != 0);
              uVar7 = ~uVar7;
              pbVar10 = pbVar12 + -uVar7;
              pbVar12 = (byte *)(*(int *)(param_1 + 0x30) * 0xff + 0x38 + param_1);
              for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pbVar12 = *(undefined4 *)pbVar10;
                pbVar10 = pbVar10 + 4;
                pbVar12 = pbVar12 + 4;
              }
              for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pbVar12 = *pbVar10;
                pbVar10 = pbVar10 + 1;
                pbVar12 = pbVar12 + 1;
              }
            }
            else {
              uVar7 = FUN_10056910(abStack_600,abStack_600,(byte *)s_height_10078d20);
              if (uVar7 != 0) goto LAB_10020d68;
              uVar4 = (*DAT_100a5130)(iVar6,abStack_600);
              fVar13 = FUN_1004a640(extraout_ECX_05,abStack_600);
              *(float *)(param_1 + 0x34 + *(int *)(param_1 + 0x30) * 4) = (float)fVar13;
            }
            iVar6 = (*DAT_100a5130)(uVar4,abStack_600);
            uVar7 = FUN_10056910(this_07,abStack_600,&DAT_10078a30);
            this = extraout_ECX_06;
          }
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        }
      }
      uVar4 = (*DAT_100a5130)(iVar6,abStack_600);
      uVar7 = FUN_10056910(abStack_600,abStack_600,&DAT_10078a34);
      if (uVar7 != 0) {
        uVar7 = (*DAT_100a5090)(s_Error_parsing_overview_file__s____10078cf0,auStack_200);
        return uVar7 & 0xffffff00;
      }
      iVar6 = (*DAT_100a5130)(uVar4,abStack_600);
      uVar7 = FUN_10056910(this_01,abStack_600,&DAT_10078a30);
    } while (uVar7 == 0);
    do {
      uVar7 = FUN_10056910(abStack_600,abStack_600,&DAT_10077e2c);
      if (uVar7 == 0) {
        uVar4 = (*DAT_100a5130)(iVar6,abStack_600);
        fVar13 = FUN_1004a640(extraout_ECX,abStack_600);
        *(float *)(param_1 + 0x2c) = (float)fVar13;
      }
      else {
        uVar7 = FUN_10056910(abStack_600,abStack_600,(byte *)s_origin_10078b0c);
        if (uVar7 == 0) {
          uVar4 = (*DAT_100a5130)(iVar6,abStack_600);
          fVar13 = FUN_1004a640(extraout_ECX_00,abStack_600);
          *pfVar1 = (float)fVar13;
          uVar4 = (*DAT_100a5130)(uVar4,abStack_600);
          fVar13 = FUN_1004a640(extraout_ECX_01,abStack_600);
          *(float *)(param_1 + 0x24) = (float)fVar13;
          uVar4 = (*DAT_100a5130)(uVar4,abStack_600);
          fVar13 = FUN_1004a640(abStack_600,abStack_600);
          *(float *)(param_1 + 0x28) = (float)fVar13;
        }
        else {
          uVar7 = FUN_10056910(this_02,abStack_600,(byte *)s_rotated_10078d40);
          if (uVar7 == 0) {
            uVar4 = (*DAT_100a5130)(iVar6,abStack_600);
            uVar5 = FUN_100499e5(abStack_600,abStack_600);
            *(undefined4 *)(param_1 + 0x138) = uVar5;
          }
          else {
            uVar7 = FUN_10056910(this_03,abStack_600,(byte *)s_inset_10078d38);
            if (uVar7 != 0) {
LAB_10020d68:
              uVar7 = (*DAT_100a5090)(s_Error_parsing_overview_file__s____10078c88,auStack_200,
                                      abStack_600);
              return uVar7 & 0xffffff00;
            }
            uVar4 = (*DAT_100a5130)(iVar6,abStack_600);
            FUN_1004a640(abStack_600,abStack_600);
            lVar14 = __ftol();
            *(int *)(param_1 + 0x13c) = (int)lVar14;
            uVar4 = (*DAT_100a5130)(uVar4,abStack_600);
            FUN_1004a640(extraout_ECX_02,abStack_600);
            lVar14 = __ftol();
            *(int *)(param_1 + 0x140) = (int)lVar14;
            uVar4 = (*DAT_100a5130)(uVar4,abStack_600);
            FUN_1004a640(extraout_ECX_03,abStack_600);
            lVar14 = __ftol();
            *(int *)(param_1 + 0x148) = (int)lVar14;
            uVar4 = (*DAT_100a5130)(uVar4,abStack_600);
            FUN_1004a640(abStack_600,abStack_600);
            lVar14 = __ftol();
            *(int *)(param_1 + 0x144) = (int)lVar14;
          }
        }
      }
      iVar6 = (*DAT_100a5130)(uVar4,abStack_600);
      uVar7 = FUN_10056910(this_04,abStack_600,&DAT_10078a30);
    } while (uVar7 != 0);
  } while( true );
}

