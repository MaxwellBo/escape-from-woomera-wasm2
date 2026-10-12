
void __fastcall FUN_100bfbf0(int param_1)

{
  char cVar1;
  uint uVar2;
  void *this;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  
  uVar3 = 0xffffffff;
  pcVar7 = s_efw_GetPackage_1011c4d8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar4 = ~uVar3 - 1;
  uVar3 = uVar2;
  if (uVar4 <= uVar2) {
    uVar3 = uVar4;
  }
  bVar9 = false;
  iVar5 = 0;
  bVar10 = true;
  pbVar6 = *(byte **)(param_1 + 8);
  pbVar8 = (byte *)s_efw_GetPackage_1011c4d8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar9 = *pbVar6 < *pbVar8;
    bVar10 = *pbVar6 == *pbVar8;
    pbVar6 = pbVar6 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar10);
  if (!bVar10) {
    iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
  }
  if (((iVar5 != 0) || (uVar2 < uVar4)) || (uVar2 != uVar4)) {
    uVar3 = 0xffffffff;
    pcVar7 = s_efw_GetPackage__1011c4c8;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar4 = ~uVar3 - 1;
    uVar3 = uVar2;
    if (uVar4 <= uVar2) {
      uVar3 = uVar4;
    }
    bVar9 = false;
    iVar5 = 0;
    bVar10 = true;
    pbVar6 = *(byte **)(param_1 + 8);
    pbVar8 = (byte *)s_efw_GetPackage__1011c4c8;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      bVar9 = *pbVar6 < *pbVar8;
      bVar10 = *pbVar6 == *pbVar8;
      pbVar6 = pbVar6 + 1;
      pbVar8 = pbVar8 + 1;
    } while (bVar10);
    if (!bVar10) {
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
    }
    if (((iVar5 != 0) || (uVar2 < uVar4)) || (uVar2 != uVar4)) {
      uVar3 = 0xffffffff;
      pcVar7 = s_efw_EndMailPickupMessage_1011c4ac;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar2 = *(uint *)(param_1 + 0xc);
      uVar4 = ~uVar3 - 1;
      uVar3 = uVar2;
      if (uVar4 <= uVar2) {
        uVar3 = uVar4;
      }
      bVar9 = false;
      iVar5 = 0;
      bVar10 = true;
      pbVar6 = *(byte **)(param_1 + 8);
      pbVar8 = (byte *)s_efw_EndMailPickupMessage_1011c4ac;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        bVar9 = *pbVar6 < *pbVar8;
        bVar10 = *pbVar6 == *pbVar8;
        pbVar6 = pbVar6 + 1;
        pbVar8 = pbVar8 + 1;
      } while (bVar10);
      if (!bVar10) {
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (((iVar5 != 0) || (uVar2 < uVar4)) || (uVar2 != uVar4)) {
        uVar3 = 0xffffffff;
        pcVar7 = s_efw_EndMailPickupMessage__1011c490;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar2 = *(uint *)(param_1 + 0xc);
        uVar4 = ~uVar3 - 1;
        uVar3 = uVar2;
        if (uVar4 <= uVar2) {
          uVar3 = uVar4;
        }
        bVar9 = false;
        iVar5 = 0;
        bVar10 = true;
        pbVar6 = *(byte **)(param_1 + 8);
        pbVar8 = (byte *)s_efw_EndMailPickupMessage__1011c490;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          bVar9 = *pbVar6 < *pbVar8;
          bVar10 = *pbVar6 == *pbVar8;
          pbVar6 = pbVar6 + 1;
          pbVar8 = pbVar8 + 1;
        } while (bVar10);
        if (!bVar10) {
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        if (iVar5 != 0) {
          return;
        }
        if (uVar2 < uVar4) {
          return;
        }
        if (uVar2 != uVar4) {
          return;
        }
      }
      if (DAT_10132cc4 == 0) {
        return;
      }
      FUN_100c77e0(DAT_10132cc4);
      return;
    }
  }
  this = (void *)FUN_100c6980();
  FUN_1007f800(this,0x1011b960);
  FUN_1007f800(this,0x1011b9e0);
  iVar11 = 0x47;
  iVar5 = FUN_100c6980();
  FUN_100c81d0(iVar5,iVar11);
  FUN_100c4d70(10.0);
  return;
}

