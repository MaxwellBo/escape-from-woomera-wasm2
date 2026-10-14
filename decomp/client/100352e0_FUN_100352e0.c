
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_100352e0(void *this,undefined4 param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  Font *this_00;
  undefined4 uVar7;
  int iVar8;
  void *this_01;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *this_07;
  void *this_08;
  void *this_09;
  void *this_10;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  char *pcVar15;
  byte *pbVar16;
  int *piVar17;
  void *pvVar18;
  undefined1 *puVar19;
  char cStack_6a2;
  char cStack_6a1;
  char cStack_6a0;
  char cStack_69f;
  char cStack_69e;
  char cStack_69d;
  int iStack_69c;
  int iStack_698;
  int iStack_690;
  byte abStack_68c [63];
  undefined1 uStack_64d;
  byte abStack_64c [63];
  undefined1 uStack_60d;
  byte abStack_60c [1024];
  undefined1 auStack_20c [512];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_10057bdc;
  pvStack_c = ExceptionList;
  pcVar13 = (char *)0x0;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_1006228c;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar4 = (*DAT_100a512c)(s_efw_textscheme_txt_10079e74,5,0);
  *(undefined4 *)((int)this + 0xc) = param_1;
  if ((DAT_100b30b8 & 1) == 0) {
    DAT_100b30b8 = DAT_100b30b8 | 1;
    FUN_1004b7bf(&DAT_100b30c0,0x7c,0x40,FUN_100352a0);
    FUN_10049c8a(FUN_10035b20);
  }
  iStack_69c = -1;
  puVar14 = &DAT_100b30c0;
  for (iVar8 = 0x7c0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  if (iVar4 == 0) {
    (*DAT_100a5094)(s_Unable_to_find___textscheme_txt_10079e50);
  }
  else {
    iStack_698 = (*DAT_100a5130)(iVar4,abStack_60c);
    iVar8 = -1;
    pbVar16 = abStack_60c;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar1 = *pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (bVar1 != 0);
    if (iVar8 != -2) {
      pcVar11 = (char *)0x100b3044;
      while ((int)pcVar11 < 0x100b4fc0) {
        _strncpy((char *)abStack_68c,(char *)abStack_60c,0x40);
        uStack_64d = 0;
        uVar7 = (*DAT_100a5130)(iStack_698,abStack_60c);
        uVar9 = FUN_10056910(this_01,abStack_60c,&DAT_10079e4c);
        if (uVar9 != 0) {
          if (iStack_69c < 0) {
            (*DAT_100a5090)(s_error_parsing_font_scheme_text_f_10079d60,abStack_60c);
          }
          else {
            (*DAT_100a5090)(s_error_parsing_font_scheme_text_f_10079d10,
                            &DAT_100b30c0 + iStack_69c * 0x1f,abStack_60c);
          }
          break;
        }
        uVar7 = (*DAT_100a5130)(uVar7,abStack_60c);
        _strncpy((char *)abStack_64c,(char *)abStack_60c,0x40);
        uStack_60d = 0;
        uVar9 = FUN_10056910(abStack_68c,abStack_68c,(byte *)s_SchemeName_10079e40);
        pvVar18 = extraout_ECX;
        pcVar12 = pcVar11;
        if (uVar9 == 0) {
          if (pcVar13 != (char *)0x0) {
            if (cStack_69e == '\0') {
              pcVar13[99] = -1;
              pcVar13[0x62] = -1;
              pcVar13[0x61] = -1;
              pcVar13[0x60] = -1;
            }
            if (cStack_6a0 == '\0') {
              *(undefined4 *)(pcVar13 + 0x68) = *(undefined4 *)(pcVar13 + 0x60);
            }
            if (cStack_69d == '\0') {
              *(undefined4 *)(pcVar13 + 0x70) = *(undefined4 *)(pcVar13 + 0x68);
            }
            if (cStack_6a1 == '\0') {
              pcVar13[0x67] = '\0';
              pcVar13[0x66] = '\0';
              pcVar13[0x65] = '\0';
              pcVar13[100] = '\0';
            }
            if (cStack_69f == '\0') {
              *(undefined4 *)(pcVar13 + 0x6c) = *(undefined4 *)(pcVar13 + 100);
            }
            if (cStack_6a2 == '\0') {
              *(undefined4 *)(pcVar13 + 0x74) = *(undefined4 *)(pcVar13 + 0x6c);
            }
            if (*(int *)(pcVar13 + 0x50) == 0) {
              pcVar13[0x50] = '\x11';
              pcVar13[0x51] = '\0';
              pcVar13[0x52] = '\0';
              pcVar13[0x53] = '\0';
            }
            if (pcVar13[0x20] == '\0') {
              uVar9 = 0xffffffff;
              pcVar12 = s_Arial_10079e38;
              do {
                pcVar15 = pcVar12;
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                pcVar15 = pcVar12 + 1;
                cVar2 = *pcVar12;
                pcVar12 = pcVar15;
              } while (cVar2 != '\0');
              uVar9 = ~uVar9;
              pcVar12 = pcVar15 + -uVar9;
              pcVar13 = pcVar13 + 0x20;
              for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
                pcVar12 = pcVar12 + 4;
                pcVar13 = pcVar13 + 4;
              }
              for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pcVar13 = *pcVar12;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
              }
            }
          }
          pcVar12 = pcVar11 + 0x7c;
          iStack_69c = iStack_69c + 1;
          cStack_6a2 = '\0';
          cStack_69d = '\0';
          cStack_69f = '\0';
          cStack_6a0 = '\0';
          cStack_6a1 = '\0';
          cStack_69e = '\0';
          _strncpy(pcVar12,(char *)abStack_64c,0x20);
          pcVar11[0x9b] = '\0';
          pvVar18 = extraout_ECX_00;
          pcVar13 = pcVar12;
        }
        if (pcVar13 == (char *)0x0) {
          (*DAT_100a5090)(s_font_scheme_text_file_MUST_start_10079cd8);
          break;
        }
        uVar9 = FUN_10056910(pvVar18,abStack_68c,(byte *)s_FontName_10079e2c);
        if (uVar9 == 0) {
          _strncpy(pcVar13 + 0x20,(char *)abStack_64c,0x30);
          pcVar13[0x4f] = '\0';
        }
        else {
          uVar9 = FUN_10056910(this_02,abStack_68c,(byte *)s_FontSize_10079e20);
          if (uVar9 == 0) {
            uVar5 = FUN_100499e5(this_03,abStack_64c);
            *(undefined4 *)(pcVar13 + 0x50) = uVar5;
          }
          else {
            uVar9 = FUN_10056910(abStack_68c,abStack_68c,(byte *)s_FontWeight_10079e14);
            if (uVar9 == 0) {
              uVar5 = FUN_100499e5(this_04,abStack_64c);
              *(undefined4 *)(pcVar13 + 0x54) = uVar5;
            }
            else {
              uVar9 = FUN_10056910(this_04,abStack_68c,(byte *)s_FgColor_10079e0c);
              if (uVar9 == 0) {
                FUN_10035ad0(pcVar13 + 0x60,(char *)abStack_64c);
                cStack_69e = '\x01';
              }
              else {
                uVar9 = FUN_10056910(this_05,abStack_68c,(byte *)s_BgColor_10079e04);
                if (uVar9 == 0) {
                  FUN_10035ad0(pcVar13 + 100,(char *)abStack_64c);
                  cStack_6a1 = '\x01';
                }
                else {
                  uVar9 = FUN_10056910(this_06,abStack_68c,(byte *)s_FgColorArmed_10079df4);
                  if (uVar9 == 0) {
                    FUN_10035ad0(pcVar13 + 0x68,(char *)abStack_64c);
                    cStack_6a0 = '\x01';
                  }
                  else {
                    uVar9 = FUN_10056910(this_07,abStack_68c,(byte *)s_BgColorArmed_10079de4);
                    if (uVar9 == 0) {
                      FUN_10035ad0(pcVar13 + 0x6c,(char *)abStack_64c);
                      cStack_69f = '\x01';
                    }
                    else {
                      uVar9 = FUN_10056910(this_08,abStack_68c,(byte *)s_FgColorMousedown_10079dd0);
                      if (uVar9 == 0) {
                        FUN_10035ad0(pcVar13 + 0x70,(char *)abStack_64c);
                        cStack_69d = '\x01';
                      }
                      else {
                        uVar9 = FUN_10056910(this_09,abStack_68c,(byte *)s_BgColorMousedown_10079dbc
                                            );
                        if (uVar9 == 0) {
                          pcVar11 = pcVar13 + 0x74;
                        }
                        else {
                          uVar9 = FUN_10056910(this_10,abStack_68c,(byte *)s_BorderColor_10079db0);
                          if (uVar9 != 0) goto LAB_1003571d;
                          pcVar11 = pcVar13 + 0x78;
                        }
                        FUN_10035ad0(pcVar11,(char *)abStack_64c);
                        cStack_6a2 = '\x01';
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_1003571d:
        iStack_698 = (*DAT_100a5130)(uVar7,abStack_60c);
        iVar8 = -1;
        pbVar16 = abStack_60c;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar1 != 0);
        pcVar11 = pcVar12;
        if (iVar8 == -2) break;
      }
    }
    (*DAT_100a5134)(iVar4);
    if (-1 < iStack_69c) goto LAB_1003586d;
  }
  uVar9 = 0xffffffff;
  iStack_69c = 0;
  pcVar13 = s_Default_Scheme_10079cc8;
  do {
    pcVar11 = pcVar13;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar11 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar11;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  pcVar13 = pcVar11 + -uVar9;
  pcVar11 = (char *)&DAT_100b30c0;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar11 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar13 = s_Arial_10079e38;
  do {
    pcVar11 = pcVar13;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar11 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar11;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  pcVar13 = pcVar11 + -uVar9;
  pcVar11 = (char *)&DAT_100b30e0;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar11 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar11 = pcVar11 + 1;
  }
  DAT_100b3110 = 0;
  DAT_100b3123 = 0xff;
  DAT_100b3122 = 0xff;
  DAT_100b3121 = 0xff;
  DAT_100b3120 = 0xff;
  DAT_100b312b = 0xff;
  DAT_100b312a = 0xff;
  DAT_100b3129 = 0xff;
  DAT_100b3128 = 0xff;
  DAT_100b3133 = 0xff;
  DAT_100b3132 = 0xff;
  DAT_100b3131 = 0xff;
  DAT_100b3130 = 0xff;
LAB_1003586d:
  iStack_69c = iStack_69c + 1;
  *(int *)((int)this + 8) = iStack_69c;
  piVar6 = operator_new(iStack_69c * 0x7c + 4);
  uStack_4 = 0;
  if (piVar6 == (int *)0x0) {
    piVar17 = (int *)0x0;
  }
  else {
    piVar17 = piVar6 + 1;
    *piVar6 = iStack_69c;
    FUN_1004b7bf(piVar17,0x7c,iStack_69c,FUN_100352a0);
  }
  *(int **)((int)this + 4) = piVar17;
  uStack_4 = 0xffffffff;
  iStack_69c = 0;
  piVar6 = &DAT_100b30c0;
  for (uVar9 = *(int *)((int)this + 8) * 0x1f & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
    *piVar17 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar17 = piVar17 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(char *)piVar17 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    piVar17 = (int *)((int)piVar17 + 1);
  }
  if (0 < *(int *)((int)this + 8)) {
    iVar4 = 0;
    do {
      iVar8 = 0;
      *(undefined4 *)(iVar4 + 0x58 + *(int *)((int)this + 4)) = 0;
      iStack_698 = iStack_69c;
      if (0 < iVar4) {
        do {
          pvVar18 = (void *)(iVar8 + 0x20 + *(int *)((int)this + 4));
          uVar9 = FUN_10056910(pvVar18,(byte *)(iVar4 + 0x20 + *(int *)((int)this + 4)),pvVar18);
          if (((uVar9 == 0) &&
              (iVar3 = *(int *)((int)this + 4),
              *(int *)(iVar4 + 0x50 + iVar3) == *(int *)(iVar8 + 0x50 + iVar3))) &&
             (*(int *)(iVar4 + 0x54 + iVar3) == *(int *)(iVar8 + 0x54 + iVar3))) {
            *(undefined4 *)(iVar4 + 0x58 + iVar3) = *(undefined4 *)(iVar8 + 0x58 + iVar3);
            *(undefined4 *)(iVar4 + 0x5c + *(int *)((int)this + 4)) = 0;
          }
          iVar8 = iVar8 + 0x7c;
          iStack_698 = iStack_698 + -1;
        } while (iStack_698 != 0);
      }
      iVar8 = iVar4 + *(int *)((int)this + 4);
      if (*(int *)(iVar4 + 0x58 + *(int *)((int)this + 4)) == 0) {
        pvVar18 = (void *)0x0;
        iStack_690 = -1;
        if ((DAT_100b4fc0 != 0) && (*(float *)(DAT_100b4fc0 + 0xc) != _DAT_10059a18)) {
          uVar7 = *(undefined4 *)((int)this + 0xc);
          puVar19 = auStack_20c;
          pcVar13 = s_gfx_vgui_fonts__d__s_tga_10079cac;
          FUN_100499f0(puVar19,(byte *)s_gfx_vgui_fonts__d__s_tga_10079cac);
          pvVar18 = (void *)(*DAT_100a512c)(auStack_20c,5,&iStack_690,puVar19,pcVar13,uVar7,iVar8);
        }
        this_00 = operator_new(0x10);
        uStack_4 = 1;
        if (this_00 == (Font *)0x0) {
          uVar7 = 0;
        }
        else {
          iVar8 = *(int *)((int)this + 4) + iVar4;
          uVar7 = vgui::Font::Font(this_00,(char *)(iVar8 + 0x20),pvVar18,iStack_690,
                                   *(int *)(iVar8 + 0x50),0,0.0,*(int *)(iVar8 + 0x54),false,false,
                                   false,false);
        }
        uStack_4 = 0xffffffff;
        *(undefined4 *)(iVar4 + 0x58 + *(int *)((int)this + 4)) = uVar7;
        *(undefined4 *)(iVar4 + 0x5c + *(int *)((int)this + 4)) = 1;
      }
      *(char *)(iVar4 + 99 + *(int *)((int)this + 4)) =
           -1 - *(char *)(iVar4 + 99 + *(int *)((int)this + 4));
      *(char *)(iVar4 + 0x67 + *(int *)((int)this + 4)) =
           -1 - *(char *)(iVar4 + 0x67 + *(int *)((int)this + 4));
      *(char *)(iVar4 + 0x6b + *(int *)((int)this + 4)) =
           -1 - *(char *)(iVar4 + 0x6b + *(int *)((int)this + 4));
      *(char *)(iVar4 + 0x6f + *(int *)((int)this + 4)) =
           -1 - *(char *)(iVar4 + 0x6f + *(int *)((int)this + 4));
      *(char *)(iVar4 + 0x73 + *(int *)((int)this + 4)) =
           -1 - *(char *)(iVar4 + 0x73 + *(int *)((int)this + 4));
      pcVar13 = (char *)(iVar4 + 0x77 + *(int *)((int)this + 4));
      iVar4 = iVar4 + 0x7c;
      iStack_69c = iStack_69c + 1;
      *pcVar13 = -1 - *pcVar13;
    } while (iStack_69c < *(int *)((int)this + 8));
  }
  ExceptionList = pvStack_c;
  return this;
}

