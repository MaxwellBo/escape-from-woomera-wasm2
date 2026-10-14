
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl
FUN_10002ae0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  float fStack_9c;
  undefined4 uStack_98;
  char *apcStack_94 [4];
  undefined4 local_84;
  char acStack_80 [2];
  char acStack_7e [62];
  byte abStack_40 [12];
  undefined1 uStack_34;
  
  local_84 = 0x3f4ccccd;
  iVar4 = (**(code **)(DAT_100a5140 + 0x20))(param_2);
  uVar3 = 0;
  if ((iVar4 < 1) || (iVar5 = (*DAT_100a5080)(), iVar5 < iVar4)) {
    if ((iVar4 == 0) &&
       (pcVar6 = (char *)(**(code **)(DAT_100a5140 + 0x4c))
                                   (*(undefined4 *)(param_2 + 0x30),param_3,param_4),
       pcVar6 != (char *)0x0)) {
      uVar7 = 0xffffffff;
      do {
        pcVar10 = pcVar6;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar10;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pcVar6 = pcVar10 + -uVar7;
      pcVar10 = acStack_80;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar10 = pcVar10 + 1;
      }
      pcVar6 = acStack_80;
      if ((acStack_80[0] == '-') || (acStack_80[0] == '+')) {
        pcVar6 = acStack_80 + 2;
      }
      cVar2 = *pcVar6;
      if ((((cVar2 == '{') || (cVar2 == '!')) || (cVar2 == '~')) || (cVar2 == ' ')) {
        pcVar6 = pcVar6 + 1;
      }
      uVar7 = 0xffffffff;
      do {
        pcVar10 = pcVar6;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar10;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pbVar9 = (byte *)(pcVar10 + -uVar7);
      pbVar11 = abStack_40;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar11 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar11 = pbVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar11 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar11 = pbVar11 + 1;
      }
      uStack_34 = 0;
      uVar3 = FUN_10026910(abStack_40);
    }
  }
  else {
    uVar3 = 0x46;
  }
  switch(uVar3) {
  case 0x44:
    uStack_98 = 0x3f666666;
    fStack_9c = 0.1;
    apcStack_94[0] = s_player_pl_dirt1_wav_10076668;
    apcStack_94[1] = s_player_pl_dirt2_wav_10076654;
    apcStack_94[2] = s_player_pl_dirt3_wav_10076640;
    iVar4 = 3;
    goto LAB_10002dc5;
  default:
    uStack_98 = 0x3f666666;
    fStack_9c = 0.6;
    apcStack_94[0] = s_player_pl_step1_wav_10076490;
    apcStack_94[1] = s_player_pl_step2_wav_1007647c;
    break;
  case 0x46:
    if (param_5 == 5) {
      return (float10)_DAT_10059a18;
    }
    uStack_98 = 0x3f800000;
    fStack_9c = 0.2;
    apcStack_94[0] = s_weapons_bullet_hit1_wav_100764bc;
    apcStack_94[1] = s_weapons_bullet_hit2_wav_100764a4;
    local_84 = 0x3f800000;
    break;
  case 0x47:
    uStack_98 = 0x3f666666;
    fStack_9c = 0.5;
    apcStack_94[0] = s_player_pl_grate1_wav_10076614;
    apcStack_94[1] = s_player_pl_grate4_wav_100765fc;
    break;
  case 0x4d:
    uStack_98 = 0x3f666666;
    fStack_9c = 0.3;
    apcStack_94[0] = s_player_pl_metal1_wav_10076694;
    apcStack_94[1] = s_player_pl_metal2_wav_1007667c;
    break;
  case 0x50:
  case 0x59:
    uStack_98 = 0x3f4ccccd;
    fStack_9c = 0.2;
    apcStack_94[0] = s_debris_glass1_wav_100764fc;
    apcStack_94[1] = s_debris_glass2_wav_100764e8;
    apcStack_94[2] = s_debris_glass3_wav_100764d4;
    iVar4 = 3;
    goto LAB_10002dc5;
  case 0x53:
    uStack_98 = 0x3f666666;
    fStack_9c = 0.0;
    apcStack_94[0] = s_player_pl_slosh1_wav_10076594;
    apcStack_94[1] = s_player_pl_slosh3_wav_1007657c;
    apcStack_94[2] = s_player_pl_slosh2_wav_10076564;
    apcStack_94[3] = s_player_pl_slosh4_wav_1007654c;
    iVar4 = 4;
    goto LAB_10002dc5;
  case 0x54:
    uStack_98 = 0x3f4ccccd;
    fStack_9c = 0.2;
    apcStack_94[0] = s_player_pl_tile1_wav_100765e8;
    apcStack_94[1] = s_player_pl_tile3_wav_100765d4;
    apcStack_94[2] = s_player_pl_tile2_wav_100765c0;
    apcStack_94[3] = s_player_pl_tile4_wav_100765ac;
    iVar4 = 4;
    goto LAB_10002dc5;
  case 0x56:
    uStack_98 = 0x3f000000;
    fStack_9c = 0.3;
    apcStack_94[0] = s_player_pl_duct1_wav_1007662c;
    apcStack_94[1] = s_player_pl_duct1_wav_1007662c;
    break;
  case 0x57:
    uStack_98 = 0x3f666666;
    fStack_9c = 0.2;
    apcStack_94[0] = s_debris_wood1_wav_10076538;
    apcStack_94[1] = s_debris_wood2_wav_10076524;
    apcStack_94[2] = s_debris_wood3_wav_10076510;
    iVar4 = 3;
    goto LAB_10002dc5;
  }
  iVar4 = 2;
LAB_10002dc5:
  puVar1 = (undefined4 *)(DAT_100a5140 + 4);
  iVar5 = (*DAT_100a5100)(0,0xf);
  iVar4 = (*DAT_100a5100)(0,iVar4 + -1,uStack_98,local_84,0,iVar5 + 0x60);
  (*(code *)*puVar1)(0,param_2 + 0x14,6,apcStack_94[iVar4]);
  return (float10)fStack_9c;
}

