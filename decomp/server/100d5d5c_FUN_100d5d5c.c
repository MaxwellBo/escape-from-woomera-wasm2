
undefined4 __cdecl FUN_100d5d5c(int param_1)

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
  
  FUN_100cf6a6(0x19);
  CodePage = FUN_100d5f09(param_1);
  if (CodePage != DAT_10134e80) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10121400;
LAB_100d5d99:
      if (*pUVar5 != CodePage) goto code_r0x100d5d9d;
      local_8 = 0;
      puVar15 = &DAT_10134fa0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10121410);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_101213f8)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10134fa0 + uVar8 + 1);
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
      DAT_10134e9c = 1;
      DAT_10134e80 = CodePage;
      DAT_101350a4 = FUN_100d5f53(CodePage);
      DAT_10134e90 = *(undefined4 *)(iVar12 + 0x10121404);
      DAT_10134e94 = *(undefined4 *)(iVar12 + 0x10121408);
      DAT_10134e98 = *(undefined4 *)(iVar12 + 0x1012140c);
      goto LAB_100d5eed;
    }
    goto LAB_100d5ee8;
  }
  goto LAB_100d5d83;
code_r0x100d5d9d:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if ((UINT *)0x101214ef < pUVar5) goto code_r0x100d5da8;
  goto LAB_100d5d99;
code_r0x100d5da8:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_101350a4 = 0;
    puVar15 = &DAT_10134fa0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_10134e9c = 0;
      DAT_10134e80 = CodePage;
    }
    else {
      DAT_10134e80 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10134fa0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10134fa0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_101350a4 = FUN_100d5f53(CodePage);
      DAT_10134e9c = 1;
    }
    DAT_10134e90 = 0;
    DAT_10134e94 = 0;
    DAT_10134e98 = 0;
  }
  else {
    if (DAT_10134bf8 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100d5efa;
    }
LAB_100d5ee8:
    FUN_100d5f86();
  }
LAB_100d5eed:
  FUN_100d5faf();
LAB_100d5d83:
  uVar14 = 0;
LAB_100d5efa:
  FUN_100cf707(0x19);
  return uVar14;
}

