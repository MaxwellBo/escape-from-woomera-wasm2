
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_100193c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  char *pcVar15;
  bool bVar16;
  longlong lVar17;
  size_t _Count;
  byte local_20 [32];
  
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  FUN_10026030(param_3,param_2);
  uVar3 = FUN_10026090();
  uVar4 = FUN_10026090();
  uVar10 = 0xffffffff;
  pcVar5 = &DAT_10078504;
  do {
    pcVar15 = pcVar5;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar15 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar15;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  _Count = 0x20;
  pbVar9 = (byte *)(pcVar15 + -uVar10);
  pbVar13 = local_20;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pbVar13 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    pbVar13 = pbVar13 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pbVar13 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar13 = pbVar13 + 1;
  }
  pcVar5 = FUN_10026180();
  _strncat((char *)local_20,pcVar5,_Count);
  if (DAT_100a5178 != (void *)0x0) {
    FUN_1003e7c0(DAT_100a5178,uVar3,uVar4);
  }
  FUN_10021c20(&DAT_100a4118);
  iVar12 = 0;
  piVar6 = &DAT_100a5210;
  do {
    if (*piVar6 == 0) break;
    piVar6 = piVar6 + 0x27;
    iVar12 = iVar12 + 1;
  } while ((int)piVar6 < 0x100a5480);
  if (iVar12 == 4) {
    FUN_1004a710(&DAT_100a5190,(undefined4 *)&DAT_100a522c,0x270);
    iVar12 = 3;
  }
  if (DAT_100a5178 != (void *)0x0) {
    FUN_1003dda0((int)DAT_100a5178);
  }
  pcVar5 = *(char **)(&DAT_100b59f0 + uVar3 * 0x14);
  if (pcVar5 == (char *)0x0) {
    pcVar15 = (char *)(&DAT_100a5190 + iVar12 * 0x27);
    *pcVar15 = '\0';
  }
  else {
    puVar7 = FUN_10019060(uVar3);
    (&DAT_100a5224)[iVar12 * 0x27] = puVar7;
    pcVar15 = (char *)(&DAT_100a5190 + iVar12 * 0x27);
    _strncpy(pcVar15,pcVar5,0x20);
    *(undefined1 *)(iVar12 * 0x9c + 0x100a51af) = 0;
  }
  iVar8 = iVar12 * 0x9c;
  if (((char)uVar4 == -1) ||
     (pcVar5 = *(char **)(&DAT_100b59f0 + uVar4 * 0x14), pcVar5 == (char *)0x0)) {
    (&DAT_100a51d0)[iVar8] = 0;
  }
  else {
    puVar7 = FUN_10019060(uVar4);
    (&DAT_100a5228)[iVar12 * 0x27] = puVar7;
    _strncpy(&DAT_100a51d0 + iVar8,pcVar5,0x20);
    *(undefined1 *)(iVar8 + 0x100a51ef) = 0;
  }
  pbVar9 = &DAT_100a51d0 + iVar8;
  if ((char)uVar4 == -1) {
    uVar3 = 0xffffffff;
    (&DAT_100a521c)[iVar12 * 0x27] = 1;
    pbVar13 = local_20 + 2;
    do {
      pbVar14 = pbVar13;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pbVar14 = pbVar13 + 1;
      bVar2 = *pbVar13;
      pbVar13 = pbVar14;
    } while (bVar2 != 0);
    uVar3 = ~uVar3;
    pbVar13 = pbVar14 + -uVar3;
    pbVar14 = pbVar9;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar13;
      pbVar13 = pbVar13 + 4;
      pbVar14 = pbVar14 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar14 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      pbVar14 = pbVar14 + 1;
    }
  }
  else {
    if ((uVar3 == uVar4) || (uVar3 == 0)) {
      (&DAT_100a5214)[iVar12 * 0x27] = 1;
    }
    pcVar5 = s_d_teammate_100784f8;
    pbVar13 = local_20;
    do {
      bVar2 = *pbVar13;
      bVar16 = bVar2 < (byte)*pcVar5;
      if (bVar2 != *pcVar5) {
LAB_100195c2:
        iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
        goto LAB_100195c7;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar13[1];
      bVar16 = bVar2 < (byte)pcVar5[1];
      if (bVar2 != pcVar5[1]) goto LAB_100195c2;
      pbVar13 = pbVar13 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_100195c7:
    if (iVar8 == 0) {
      (&DAT_100a5218)[iVar12 * 0x27] = 1;
    }
  }
  iVar8 = FUN_1001c090(&DAT_100a3a40,(char *)local_20);
  (&DAT_100a5210)[iVar12 * 0x27] = iVar8;
  (*DAT_100a502c)(s_hud_deathnotice_time_10078450);
  lVar17 = __ftol();
  _DAT_1007841c = (int)lVar17;
  (&DAT_100a5220)[iVar12 * 0x27] = (float)_DAT_1007841c + DAT_100a3a64;
  if ((&DAT_100a521c)[iVar12 * 0x27] != 0) {
    (*DAT_100a5068)(pcVar15);
    (*DAT_100a5068)(s_killed_a_100784ec);
    (*DAT_100a5068)(pbVar9);
    (*DAT_100a5068)(&DAT_100784e8);
    return 1;
  }
  if ((&DAT_100a5214)[iVar12 * 0x27] == 0) {
    if ((&DAT_100a5218)[iVar12 * 0x27] == 0) {
      (*DAT_100a5068)(pcVar15);
      (*DAT_100a5068)(s_killed_100784a4);
    }
    else {
      (*DAT_100a5068)();
      (*DAT_100a5068)(s_killed_his_teammate_100784b0);
    }
    (*DAT_100a5068)(pbVar9);
  }
  else {
    (*DAT_100a5068)(pbVar9);
    pbVar13 = &DAT_100784e0;
    pbVar9 = local_20;
    do {
      bVar2 = *pbVar9;
      bVar16 = bVar2 < *pbVar13;
      if (bVar2 != *pbVar13) {
LAB_100196a1:
        iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
        goto LAB_100196a6;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar16 = bVar2 < pbVar13[1];
      if (bVar2 != pbVar13[1]) goto LAB_100196a1;
      pbVar9 = pbVar9 + 2;
      pbVar13 = pbVar13 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_100196a6:
    if (iVar8 == 0) {
      (*DAT_100a5068)(s_died_100784d8);
    }
    else {
      (*DAT_100a5068)(s_killed_self_100784c8);
    }
  }
  if (((&stack0x00000000 != (undefined1 *)0x20) && (local_20[0] != 0)) && ('\r' < (char)local_20[0])
     ) {
    pbVar13 = &DAT_100784e0;
    pbVar9 = local_20;
    do {
      bVar2 = *pbVar9;
      bVar16 = bVar2 < *pbVar13;
      if (bVar2 != *pbVar13) {
LAB_1001975d:
        iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
        goto LAB_10019762;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar16 = bVar2 < pbVar13[1];
      if (bVar2 != pbVar13[1]) goto LAB_1001975d;
      pbVar9 = pbVar9 + 2;
      pbVar13 = pbVar13 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_10019762:
    if ((iVar8 != 0) && ((&DAT_100a5218)[iVar12 * 0x27] == 0)) {
      (*DAT_100a5068)(s_with_1007849c);
      pbVar13 = &DAT_10076440;
      pbVar9 = local_20;
      do {
        pbVar9 = pbVar9 + 2;
        bVar2 = *pbVar9;
        bVar16 = bVar2 < *pbVar13;
        if (bVar2 != *pbVar13) {
LAB_100197b7:
          iVar12 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_100197bc;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar16 = bVar2 < pbVar13[1];
        if (bVar2 != pbVar13[1]) goto LAB_100197b7;
        pbVar13 = pbVar13 + 2;
      } while (bVar2 != 0);
      iVar12 = 0;
LAB_100197bc:
      if (iVar12 == 0) {
        uVar3 = 0xffffffff;
        pcVar5 = s_d_gluon_gun_10078490;
        do {
          pcVar15 = pcVar5;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pbVar9 = (byte *)(pcVar15 + -uVar3);
        pbVar13 = local_20;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pbVar13 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          pbVar13 = pbVar13 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pbVar13 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar13 = pbVar13 + 1;
        }
      }
      pcVar5 = s_gauss_10076a6c;
      pbVar9 = local_20;
      do {
        pbVar9 = pbVar9 + 2;
        bVar2 = *pbVar9;
        bVar16 = bVar2 < (byte)*pcVar5;
        if (bVar2 != *pcVar5) {
LAB_10019815:
          iVar12 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_1001981a;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar16 = bVar2 < (byte)pcVar5[1];
        if (bVar2 != pcVar5[1]) goto LAB_10019815;
        pcVar5 = pcVar5 + 2;
      } while (bVar2 != 0);
      iVar12 = 0;
LAB_1001981a:
      if (iVar12 == 0) {
        uVar3 = 0xffffffff;
        pcVar5 = s_d_tau_cannon_10078480;
        do {
          pcVar15 = pcVar5;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pbVar9 = (byte *)(pcVar15 + -uVar3);
        pbVar13 = local_20;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pbVar13 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          pbVar13 = pbVar13 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pbVar13 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar13 = pbVar13 + 1;
        }
      }
      (*DAT_100a5068)(local_20 + 2);
    }
  }
  (*DAT_100a5068)(&DAT_100784e8);
  return 1;
}

