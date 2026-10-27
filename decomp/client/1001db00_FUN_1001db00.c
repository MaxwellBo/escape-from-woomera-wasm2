
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001db00(void)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  uint *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *extraout_ECX;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  longlong lVar17;
  char *pcStack00000004;
  float fStack00000008;
  undefined4 *puStack00000010;
  float in_stack_00001468;
  int in_stack_0000146c;
  
  FUN_1004a6a0();
  _DAT_100a95ac = in_stack_00001468;
  puStack00000010 = extraout_ECX;
  FUN_10041a20();
  FUN_1001e4c0(1.0);
  if (DAT_100baee0 < 1) {
LAB_1001db43:
    bVar5 = false;
  }
  else {
    cVar6 = FUN_10046990();
    bVar5 = true;
    if (cVar6 != '\0') goto LAB_1001db43;
  }
  fVar1 = ((((float)bVar5 - _DAT_100a95b8) * _DAT_10060134 + _DAT_100a95b8) - _DAT_10059cec) *
          _DAT_10060130 + _DAT_10059cec;
  _DAT_100a95b8 = _DAT_10059a18;
  if ((_DAT_10059a18 <= fVar1) && (_DAT_100a95b8 = fVar1, _DAT_10059eb0 < fVar1)) {
    _DAT_100a95b8 = _DAT_10059eb0;
  }
  iVar13 = DAT_100a4dd0 + -0x140;
  lVar17 = __ftol();
  iVar8 = (int)lVar17;
  pcStack00000004 = (char *)(float)iVar13;
  __ftol();
  __ftol();
  (*DAT_100a501c)();
  FUN_1001d750(0,(char *)(float)iVar13,(float)DAT_100a4dcc * _DAT_100a95b8 * _DAT_1006012c,
               (float)DAT_100a4dd0,0,0,0x3e4ccccd,0x3f800000,0);
  if (bVar5) {
    iVar13 = FUN_10041a30();
    fVar1 = (float)iVar13 * _DAT_10060128;
    fVar4 = _DAT_10059a18;
    if ((_DAT_10059a18 <= fVar1) && (fVar4 = fVar1, _DAT_10059eb0 < fVar1)) {
      fVar4 = _DAT_10059eb0;
    }
    FUN_1001e4c0(_DAT_10059eb0 - fVar4 * _DAT_10060124);
    lVar17 = __ftol();
    iVar14 = (int)lVar17;
    puVar7 = FUN_1004aff0((uint *)&DAT_100b7824,PTR_s_____PREVIOUS_QUESTION__10064d28);
    uVar10 = 0xffffffff;
    pcStack00000004 = &stack0x00000c94;
    pcVar15 = &DAT_100b7824;
    do {
      pcVar12 = pcVar15;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar12 = pcVar15 + 1;
      cVar6 = *pcVar15;
      pcVar15 = pcVar12;
    } while (cVar6 != '\0');
    uVar10 = ~uVar10;
    pcVar15 = pcVar12 + -uVar10;
    pcVar12 = pcStack00000004;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar12 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar12 = pcVar12 + 1;
    }
    if (puVar7 != (uint *)0x0) {
      uVar10 = 0xffffffff;
      pcStack00000004 = &stack0x000004c4;
      pcVar15 = PTR_s_____PREVIOUS_QUESTION__10064d28;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar6 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar6 != '\0');
      uVar11 = 0xffffffff;
      pcVar15 = (char *)((~uVar10 - 1) + (int)puVar7);
      do {
        pcVar12 = pcVar15;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar12 = pcVar15 + 1;
        cVar6 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar6 != '\0');
      uVar11 = ~uVar11;
      pcVar15 = pcVar12 + -uVar11;
      pcVar12 = pcStack00000004;
      for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      (&stack0x00000000)[(int)(puVar7 + -0x402dae4)] = 0;
    }
    iVar16 = 0;
    if (0 < DAT_100baee0) {
      pcStack00000004 = (char *)(iVar13 * 3);
      do {
        uVar10 = 0xffffffff;
        pcVar15 = &DAT_100b7824;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar6 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar6 != '\0');
        pcVar12 = (char *)(~uVar10 - 1);
        pcVar15 = pcStack00000004;
        if (DAT_100baed4 != '\0') {
          pcVar15 = pcVar12;
        }
        if (iVar16 == 0) {
          FUN_100499f0(&stack0x000000dc,&DAT_10078410);
          if ((-1 < (int)pcVar15) && ((int)pcVar15 < (int)pcVar12)) {
            (&stack0x000000dc)[(int)pcVar15] = 0;
          }
          iVar13 = -1;
          DAT_100a95b4._0_1_ = 0;
          pcVar15 = &stack0x000004c4;
          do {
            if (iVar13 == 0) break;
            iVar13 = iVar13 + -1;
            cVar6 = *pcVar15;
            pcVar15 = pcVar15 + 1;
          } while (cVar6 != '\0');
          if (iVar13 != -2) {
            FUN_1001e7d0(0x19,iVar14,iVar8,&stack0x000004c4,100,200,100);
            iVar14 = iVar14 + 0x23;
          }
          FUN_1001e7d0(0x19,iVar14,iVar8,&stack0x000000dc,200,200,0);
          iVar14 = DAT_100a95a8 + 0x23;
        }
        else if ((int)pcVar12 <= (int)pcVar15) {
          FUN_100499f0(&stack0x000000dc,(byte *)s_Press___d___s_100789e0);
          DAT_100a95b4._0_1_ = 1;
          FUN_1001e7d0(0x19,iVar14,iVar8,&stack0x000000dc,100,200,100);
          DAT_100a95b4._0_1_ = 0;
          iVar14 = DAT_100a95a8 + 10;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < DAT_100baee0);
    }
  }
  cVar6 = FUN_10046990();
  if ((cVar6 == '\0') && (!bVar5)) {
    iVar8 = FUN_10047670(1);
    FUN_10047670(2);
    iVar13 = FUN_10047670(5);
    pcStack00000004 = (char *)(uint)(iVar13 != 0);
    fVar1 = (float)(int)pcStack00000004;
    fStack00000008 =
         ((((float)(int)pcStack00000004 - _DAT_100a95bc) * _DAT_10060134 + _DAT_100a95bc) -
         _DAT_10059cec) * _DAT_10060130 + _DAT_10059cec;
    if (_DAT_10059a18 <= fStack00000008) {
      if (_DAT_10059eb0 < fStack00000008) {
        fStack00000008 = 1.0;
      }
    }
    else {
      fStack00000008 = 0.0;
    }
    _DAT_100a95bc = fStack00000008;
    if (_DAT_10059a18 < fStack00000008) {
      FUN_10043dd0(fStack00000008);
    }
    fVar1 = (((fVar1 - _DAT_100a95c4) * _DAT_10060134 + _DAT_100a95c4) - _DAT_10059cec) *
            _DAT_10060130 + _DAT_10059cec;
    _DAT_100a95c4 = _DAT_10059a18;
    if ((_DAT_10059a18 <= fVar1) && (_DAT_100a95c4 = fVar1, _DAT_10059eb0 < fVar1)) {
      _DAT_100a95c4 = _DAT_10059eb0;
    }
    if ((((DAT_100a95c0 < 1) || (iVar8 < 1)) || (DAT_100a95c0 == iVar8)) ||
       (_DAT_100a95c4 != _DAT_10059eb0)) {
      if ((_DAT_10060120 < _DAT_100a95c4) && (0 < iVar8)) {
        DAT_100a95c0 = iVar8;
      }
      if (_DAT_100a95c4 < _DAT_1006011c) goto LAB_1001e02e;
    }
    else {
      _DAT_100a95c4 = 0.0;
LAB_1001e02e:
      if (iVar8 == 0) {
        DAT_100a95c0 = 0;
      }
    }
    if (_DAT_10059a18 < _DAT_100a95c4) {
      iVar13 = DAT_100a95c0;
      if (iVar8 == 0) {
        iVar13 = 0;
        iVar8 = DAT_100a95c0;
      }
      if ((iVar13 != iVar8) && (0 < iVar13)) {
        FUN_100499f0(&stack0x00000014,(byte *)s_sprites_efw_diary__02d_s_spr_100789c0);
        iVar8 = FUN_10031300(&stack0x00000014);
        iVar13 = (*DAT_100a4ffc)();
        iVar14 = (*DAT_100a4ff8)();
        pcStack00000004 = (char *)((DAT_100a4dcc - iVar13) + iVar13);
        FUN_1001d750((float)(DAT_100a4dcc - iVar13),(float)(DAT_100a4dd0 - iVar13),
                     (float)(int)pcStack00000004,(float)((DAT_100a4dd0 - iVar13) + iVar14),
                     0x3f800000,0x3f800000,0x3f800000,0x3f800000,iVar8);
      }
      FUN_100499f0(&stack0x00000014,(byte *)s_sprites_efw_diary__02d_s_spr_100789c0);
      iVar8 = FUN_10031300(&stack0x00000014);
      iVar13 = (*DAT_100a4ffc)();
      iVar14 = (*DAT_100a4ff8)();
      pcStack00000004 = (char *)((DAT_100a4dcc - iVar13) + iVar13);
      FUN_1001d750((float)(DAT_100a4dcc - iVar13),(float)(DAT_100a4dd0 - iVar13),
                   (float)(int)pcStack00000004,
                   (float)iVar14 * _DAT_100a95c4 + (float)(DAT_100a4dd0 - iVar13),0x3f800000,
                   0x3f800000,0x3f800000,0x3f800000,iVar8);
    }
  }
  FUN_10047660(1);
  __ftol();
  lVar17 = __ftol();
  FUN_1001daa0(0x14,0x78,(int)lVar17);
  FUN_10046590();
  FUN_10043bb0();
  uVar9 = puStack00000010[9];
  puStack00000010[9] = in_stack_00001468;
  puStack00000010[10] = uVar9;
  *(double *)(puStack00000010 + 0xc) = (double)(in_stack_00001468 - (float)puStack00000010[10]);
  if (_DAT_100a95a0 != _DAT_10059a18) {
    DAT_100a95a4 = DAT_100a95a4 -
                   (float)(30000 - DAT_100a959c) *
                   ((in_stack_00001468 - (float)puStack00000010[10]) / _DAT_100a95a0);
    if (_DAT_10060118 < DAT_100a95a4) {
      DAT_100a95a4 = 30000.0;
    }
    if (DAT_100a95a4 < (float)DAT_100a959c) {
      DAT_100a95a4 = (float)DAT_100a959c;
    }
  }
  if (*(double *)(puStack00000010 + 0xc) < _DAT_1005d2a8) {
    puStack00000010[0xc] = 0;
    puStack00000010[0xd] = 0;
  }
  if (DAT_100a5178 == (void *)0x0) goto LAB_1001e2fe;
  if (puStack00000010[0x569] != 0) {
    if (in_stack_0000146c == 0) {
      puStack00000010[0x569] = 0;
      FUN_1003c9a0(DAT_100a5178);
      FUN_1003ca30((int)DAT_100a5178);
      goto LAB_1001e2fe;
    }
    if (puStack00000010[0x569] != 0) goto LAB_1001e2fe;
  }
  if (in_stack_0000146c != 0) {
    FUN_1003c9a0(DAT_100a5178);
    FUN_1003d490((int)DAT_100a5178);
    FUN_1003c9e0((int)DAT_100a5178);
  }
LAB_1001e2fe:
  if ((DAT_100a95c8 != 0) && ((float)DAT_100a95c8 < in_stack_00001468)) {
    (*DAT_100a5040)();
    DAT_100a95c8 = 0;
  }
  piVar2 = (int *)*puStack00000010;
  puStack00000010[0x569] = in_stack_0000146c;
  for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    piVar3 = (int *)*piVar2;
    if (in_stack_0000146c == 0) {
      if (((*(byte *)(piVar3 + 4) & 1) != 0) && ((*(byte *)(puStack00000010 + 0x15) & 4) == 0)) {
        (**(code **)(*piVar3 + 0xc))();
      }
    }
    else if ((*(byte *)(piVar3 + 4) & 2) != 0) {
      (**(code **)(*piVar3 + 0xc))();
    }
  }
  __ftol();
  FUN_10047670(3);
  FUN_100499f0(&stack0x00000078,(byte *)s__2d__02d__s_100789a0);
  if (puStack00000010[1] == 0) {
    uVar9 = FUN_10031300((byte *)s_sprites_efw_artslogo_spr_10078984);
    puStack00000010[1] = uVar9;
  }
  (*DAT_100a4ffc)();
  (*DAT_100a4ff8)();
  __ftol();
  (*DAT_100a5000)();
  (*DAT_100a500c)();
  return 1;
}

