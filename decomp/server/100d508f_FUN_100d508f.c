
undefined4 FUN_100d508f(void)

{
  BYTE *pBVar1;
  LPWORD pWVar2;
  byte bVar3;
  int iVar4;
  undefined2 *puVar5;
  BOOL BVar6;
  BYTE *pBVar7;
  uint uVar8;
  LPCWSTR pWVar9;
  undefined4 uVar10;
  _cpinfo local_28;
  undefined2 *local_14;
  undefined2 *local_10;
  LPCWSTR local_c;
  LPCSTR local_8;
  
  uVar10 = 0;
  local_8 = (LPCSTR)0x0;
  local_c = (LPCWSTR)0x0;
  if (DAT_10134a60 == 0) {
    PTR_DAT_1011e028 = &DAT_1011e032;
    PTR_DAT_1011e02c = &DAT_1011e032;
    FUN_100c8cf1((undefined *)DAT_10134ba4);
    FUN_100c8cf1((undefined *)DAT_10134ba8);
    DAT_10134ba4 = (undefined2 *)0x0;
    DAT_10134ba8 = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_10134a70 != 0) ||
     (iVar4 = FUN_100d866e(0,(uint)DAT_10134bb8,0x1004,(char *)&DAT_10134a70), iVar4 == 0)) {
    puVar5 = _malloc(0x202);
    local_14 = puVar5;
    local_10 = _malloc(0x202);
    local_8 = _malloc(0x101);
    local_c = _malloc(0x202);
    if ((puVar5 != (undefined2 *)0x0) &&
       (((local_10 != (undefined2 *)0x0 && (local_8 != (LPCSTR)0x0)) && (local_c != (LPCWSTR)0x0))))
    {
      iVar4 = 0;
      do {
        local_8[iVar4] = (CHAR)iVar4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x100);
      BVar6 = GetCPInfo(DAT_10134a70,&local_28);
      if ((BVar6 != 0) && (local_28.MaxCharSize < 3)) {
        DAT_1011e234 = local_28.MaxCharSize & 0xffff;
        if ((1 < DAT_1011e234) && (local_28.LeadByte[0] != '\0')) {
          pBVar7 = local_28.LeadByte + 1;
          do {
            bVar3 = *pBVar7;
            if (bVar3 == 0) break;
            for (uVar8 = (uint)pBVar7[-1]; (int)uVar8 <= (int)(uint)bVar3; uVar8 = uVar8 + 1) {
              local_8[uVar8] = '\0';
              bVar3 = *pBVar7;
            }
            pBVar1 = pBVar7 + 1;
            pBVar7 = pBVar7 + 2;
          } while (*pBVar1 != 0);
        }
        BVar6 = FUN_100d0d6d(1,local_8,0x100,puVar5 + 1,0,0,0);
        if (BVar6 != 0) {
          *puVar5 = 0;
          iVar4 = 0;
          pWVar9 = local_c;
          do {
            *pWVar9 = (WCHAR)iVar4;
            pWVar9 = pWVar9 + 1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x100);
          pWVar2 = local_10 + 1;
          BVar6 = FUN_100d87ac(1,local_c,0x100,pWVar2,0,0);
          if (BVar6 != 0) {
            *local_10 = 0;
            if ((1 < (int)DAT_1011e234) && (local_28.LeadByte[0] != '\0')) {
              pBVar7 = local_28.LeadByte + 1;
              do {
                if (*pBVar7 == 0) break;
                uVar8 = (uint)pBVar7[-1];
                if (uVar8 <= *pBVar7) {
                  puVar5 = local_14 + uVar8 + 1;
                  do {
                    *puVar5 = 0x8000;
                    uVar8 = uVar8 + 1;
                    puVar5 = puVar5 + 1;
                  } while ((int)uVar8 <= (int)(uint)*pBVar7);
                }
                pBVar1 = pBVar7 + 1;
                pBVar7 = pBVar7 + 2;
              } while (*pBVar1 != 0);
            }
            PTR_DAT_1011e028 = (undefined *)(local_14 + 1);
            PTR_DAT_1011e02c = (undefined *)pWVar2;
            if (DAT_10134ba4 != (undefined2 *)0x0) {
              FUN_100c8cf1((undefined *)DAT_10134ba4);
            }
            DAT_10134ba4 = local_14;
            if (DAT_10134ba8 != (undefined2 *)0x0) {
              FUN_100c8cf1((undefined *)DAT_10134ba8);
            }
            DAT_10134ba8 = local_10;
            goto LAB_100d526d;
          }
        }
      }
    }
  }
  FUN_100c8cf1((undefined *)local_14);
  FUN_100c8cf1((undefined *)local_10);
  uVar10 = 1;
LAB_100d526d:
  FUN_100c8cf1(local_8);
  FUN_100c8cf1((undefined *)local_c);
  return uVar10;
}

