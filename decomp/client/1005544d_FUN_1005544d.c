
undefined4 __cdecl FUN_1005544d(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_1004ca8b(0x19);
  CodePage = FUN_100555fa(param_1);
  if (CodePage != DAT_100bce00) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1007e808;
LAB_1005548a:
      if (*pUVar5 != CodePage) goto code_r0x1005548e;
      local_8 = 0;
      puVar15 = &DAT_100bcf20;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1007e818);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1007e800)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_100bcf20 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      DAT_100bce1c = 1;
      DAT_100bce00 = CodePage;
      DAT_100bd024 = FUN_10055644(CodePage);
      DAT_100bce10 = *(undefined4 *)(iVar12 + 0x1007e80c);
      DAT_100bce14 = *(undefined4 *)(iVar12 + 0x1007e810);
      DAT_100bce18 = *(undefined4 *)(iVar12 + 0x1007e814);
      goto LAB_100555de;
    }
    goto LAB_100555d9;
  }
  goto LAB_10055474;
code_r0x1005548e:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if ((UINT *)0x1007e8f7 < pUVar5) goto code_r0x10055499;
  goto LAB_1005548a;
code_r0x10055499:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_100bd024 = 0;
    puVar15 = &DAT_100bcf20;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_100bce1c = 0;
      DAT_100bce00 = CodePage;
    }
    else {
      DAT_100bce00 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_100bcf20 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_100bcf20 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_100bd024 = FUN_10055644(CodePage);
      DAT_100bce1c = 1;
    }
    DAT_100bce10 = 0;
    DAT_100bce14 = 0;
    DAT_100bce18 = 0;
  }
  else {
    if (DAT_100bcd58 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100555eb;
    }
LAB_100555d9:
    FUN_10055677();
  }
LAB_100555de:
  FUN_100556a0();
LAB_10055474:
  uVar14 = 0;
LAB_100555eb:
  FUN_1004caec(0x19);
  return uVar14;
}

