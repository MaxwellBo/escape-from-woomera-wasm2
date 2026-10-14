
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl
FUN_10094fd0(int param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,float param_8)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  byte *pbVar13;
  bool bVar14;
  float10 fVar15;
  float fVar16;
  float *pfVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char *apcStack_50 [4];
  byte abStack_40 [12];
  undefined1 uStack_34;
  
  local_6c = 0x3f4ccccd;
  iVar3 = (**(code **)(*DAT_10121db8 + 0xe0))();
  if (iVar3 == 0) {
    return (float10)_DAT_100dd5f8;
  }
  iVar3 = *(int *)(param_1 + 0x30);
  if ((iVar3 == 0) && (iVar3 = (*DAT_10121f1c)(0), iVar3 == 0)) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *(int **)(iVar3 + 0x7c);
  }
  cVar2 = '\0';
  if (((piVar9 == (int *)0x0) || (iVar3 = (**(code **)(*piVar9 + 0x4c))(), iVar3 == 0)) ||
     (iVar3 = (**(code **)(*piVar9 + 0x4c))(), iVar3 == 1)) {
    fStack_5c = param_2;
    uStack_58 = param_3;
    uStack_54 = param_4;
    uStack_68 = param_5;
    uStack_64 = param_6;
    uStack_60 = param_7;
    if (piVar9 == (int *)0x0) {
      puVar11 = &uStack_68;
      pfVar17 = &fStack_5c;
      uVar6 = (*DAT_10121f1c)(0,pfVar17,puVar11);
    }
    else {
      puVar11 = &uStack_68;
      uVar6 = *(undefined4 *)(piVar9[1] + 0x208);
      pfVar17 = &fStack_5c;
    }
    pcVar10 = (char *)(*DAT_10121e98)(uVar6,pfVar17,puVar11);
    if (pcVar10 != (char *)0x0) {
      if ((*pcVar10 == '-') || (*pcVar10 == '+')) {
        pcVar10 = pcVar10 + 2;
      }
      cVar2 = *pcVar10;
      if (((cVar2 == '{') || (cVar2 == '!')) || ((cVar2 == '~' || (cVar2 == ' ')))) {
        pcVar10 = pcVar10 + 1;
      }
      uVar7 = 0xffffffff;
      do {
        pcVar12 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar12 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pbVar4 = (byte *)(pcVar12 + -uVar7);
      pbVar13 = abStack_40;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar4;
        pbVar4 = pbVar4 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar13 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        pbVar13 = pbVar13 + 1;
      }
      uStack_34 = 0;
      cVar2 = FUN_10094f80(abStack_40);
    }
  }
  else {
    cVar2 = 'F';
  }
  switch(cVar2) {
  case 'D':
    param_8 = 0.9;
    param_2 = 0.1;
    apcStack_50[0] = s_player_pl_dirt1_wav_10105d24;
    apcStack_50[1] = s_player_pl_dirt2_wav_10105d10;
    apcStack_50[2] = s_player_pl_dirt3_wav_10105cfc;
    iVar3 = 3;
    break;
  default:
    param_8 = 0.9;
    param_2 = 0.6;
    apcStack_50[0] = s_player_pl_step1_wav_10105e34;
    apcStack_50[1] = s_player_pl_step2_wav_10105e20;
    goto LAB_10095352;
  case 'F':
    if (param_8 == 7.00649e-45) {
      return (float10)_DAT_100dd5f8;
    }
    param_8 = 1.0;
    param_2 = 0.2;
    apcStack_50[0] = s_weapons_bullet_hit1_wav_101170a0;
    apcStack_50[1] = s_weapons_bullet_hit2_wav_10117088;
    local_6c = 0x3f800000;
    goto LAB_10095352;
  case 'G':
    param_8 = 0.9;
    param_2 = 0.5;
    apcStack_50[0] = s_player_pl_grate1_wav_10105b40;
    apcStack_50[1] = s_player_pl_grate4_wav_10105af8;
    goto LAB_10095352;
  case 'M':
    param_8 = 0.9;
    param_2 = 0.3;
    apcStack_50[0] = s_player_pl_metal1_wav_10105d80;
    apcStack_50[1] = s_player_pl_metal2_wav_10105d68;
    goto LAB_10095352;
  case 'P':
  case 'Y':
    param_8 = 0.8;
    param_2 = 0.2;
    apcStack_50[0] = s_debris_glass1_wav_10105940;
    apcStack_50[1] = s_debris_glass2_wav_1010592c;
    apcStack_50[2] = s_debris_glass3_wav_10105918;
    iVar3 = 3;
    break;
  case 'S':
    param_8 = 0.9;
    param_2 = 0.0;
    apcStack_50[0] = s_player_pl_slosh1_wav_10105ae0;
    apcStack_50[1] = s_player_pl_slosh3_wav_10105ab0;
    apcStack_50[2] = s_player_pl_slosh2_wav_10105ac8;
    apcStack_50[3] = s_player_pl_slosh4_wav_10105a98;
    iVar3 = 4;
    break;
  case 'T':
    param_8 = 0.8;
    param_2 = 0.2;
    apcStack_50[0] = s_player_pl_tile1_wav_10105a84;
    apcStack_50[1] = s_player_pl_tile3_wav_10105a5c;
    apcStack_50[2] = s_player_pl_tile2_wav_10105a70;
    apcStack_50[3] = s_player_pl_tile4_wav_10105a48;
    iVar3 = 4;
    break;
  case 'V':
    param_8 = 0.5;
    param_2 = 0.3;
    apcStack_50[0] = s_player_pl_duct1_wav_10105b94;
    apcStack_50[1] = s_player_pl_duct1_wav_10105b94;
LAB_10095352:
    iVar3 = 2;
    break;
  case 'W':
    param_8 = 0.9;
    param_2 = 0.2;
    apcStack_50[0] = s_debris_wood1_wav_10105994;
    apcStack_50[1] = s_debris_wood2_wav_10105980;
    apcStack_50[2] = s_debris_wood3_wav_1010596c;
    iVar3 = 3;
  }
  if (piVar9 != (int *)0x0) {
    pcVar10 = s_func_breakable_1010f468;
    pbVar4 = (byte *)(*(int *)piVar9[1] + *(int *)(DAT_10122044 + 0x98));
    do {
      bVar1 = *pbVar4;
      bVar14 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_10095397:
        iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_1009539c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar14 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10095397;
      pbVar4 = pbVar4 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_1009539c:
    if (iVar5 == 0) {
      param_8 = param_8 * (float)_DAT_100f1a08;
      param_2 = param_2 * (float)_DAT_100dd648;
      goto LAB_1009547a;
    }
  }
  if (((cVar2 == 'P') && (*(float *)(param_1 + 0x10) != (float)_DAT_100dd628)) &&
     (iVar5 = (*DAT_10121f70)(0,1), iVar5 != 0)) {
    puVar11 = (undefined4 *)(param_1 + 0x14);
    FUN_100b06a0(puVar11);
    fVar15 = (float10)(*DAT_10121f74)(0x3f333333,0x3f800000);
    fVar16 = (float)fVar15;
    iVar5 = (*DAT_10121f70)(0,1);
    if (iVar5 == 0) {
      pcVar10 = s_buttons_spark5_wav_10104a74;
    }
    else {
      if (iVar5 != 1) goto LAB_1009547a;
      pcVar10 = s_buttons_spark6_wav_10104a60;
    }
    uVar20 = 100;
    uVar18 = 0;
    uVar19 = 0x3f4ccccd;
    uVar6 = (*DAT_10121f1c)(0);
    FUN_100af2c0(uVar6,puVar11,pcVar10,fVar16,uVar19,uVar18,uVar20);
  }
LAB_1009547a:
  uVar6 = (*DAT_10121f1c)(0);
  iVar5 = (*DAT_10121f70)(0,0xf);
  iVar5 = iVar5 + 0x60;
  uVar19 = 0;
  iVar3 = (*DAT_10121f70)(0,iVar3 + -1);
  FUN_100af2c0(uVar6,(undefined4 *)(param_1 + 0x14),apcStack_50[iVar3],param_8,local_6c,uVar19,iVar5
              );
  return (float10)param_2;
}

