
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001fc00(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  float local_50c;
  undefined4 local_508;
  undefined4 local_504;
  byte abStack_500 [256];
  byte abStack_400 [1024];
  
  local_50c = 0.0;
  local_508 = 0;
  local_504 = 0;
  iVar3 = (*DAT_100a50c4)(0);
  if (iVar3 != 0) {
    pcVar4 = (char *)(*DAT_100a5130)(*(undefined4 *)(*(int *)(iVar3 + 0xb94) + 0x180),abStack_400);
    cVar2 = *pcVar4;
    while ((cVar2 != '\0' && (abStack_400[0] != 0x7d))) {
      if (abStack_400[0] != 0x7b) {
        return;
      }
      while (pcVar4 = (char *)(*DAT_100a5130)(pcVar4,abStack_400), abStack_400[0] != 0x7d) {
        if (pcVar4 == (char *)0x0) {
          return;
        }
        uVar6 = 0xffffffff;
        pbVar5 = abStack_400;
        do {
          pbVar9 = pbVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pbVar9 = pbVar5 + 1;
          bVar1 = *pbVar5;
          pbVar5 = pbVar9;
        } while (bVar1 != 0);
        uVar6 = ~uVar6;
        pbVar5 = pbVar9 + -uVar6;
        pbVar9 = abStack_500;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar5;
          pbVar5 = pbVar5 + 4;
          pbVar9 = pbVar9 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar9 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          pbVar9 = pbVar9 + 1;
        }
        uVar6 = 0xffffffff;
        pbVar5 = abStack_500;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (bVar1 != 0);
        uVar6 = ~uVar6;
        while ((uVar6 - 1 != 0 && (*(char *)((int)&local_504 + uVar6 + 2) == ' '))) {
          *(undefined1 *)((int)&local_504 + uVar6 + 2) = 0;
          uVar6 = uVar6 - 1;
        }
        pcVar4 = (char *)(*DAT_100a5130)(pcVar4,abStack_400);
        if (pcVar4 == (char *)0x0) {
          return;
        }
        if (abStack_400[0] == 0x7d) {
          return;
        }
        pcVar8 = s_classname_1007770c;
        pbVar5 = abStack_500;
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_1001fd43:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_1001fd48;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_1001fd43;
          pbVar5 = pbVar5 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_1001fd48:
        if (iVar3 == 0) {
          pcVar8 = s_info_player_start_10078b14;
          pbVar5 = abStack_400;
          do {
            bVar1 = *pbVar5;
            bVar10 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_1001fd7c:
              iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_1001fd81;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar10 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_1001fd7c;
            pbVar5 = pbVar5 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_1001fd81:
          if (iVar3 == 0) break;
        }
        pcVar8 = s_origin_10078b0c;
        pbVar5 = abStack_500;
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_1001fdb2:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_1001fdb7;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_1001fdb2;
          pbVar5 = pbVar5 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_1001fdb7:
        if (iVar3 == 0) {
          FUN_1001fb60(&local_50c,(char *)abStack_400);
        }
      }
      pcVar4 = (char *)(*DAT_100a5130)(pcVar4,abStack_400);
      cVar2 = *pcVar4;
    }
  }
  _DAT_100bcdf8 = local_504;
  _DAT_100bcdf4 = local_508;
  DAT_100bcdf0 = local_50c;
  DAT_100bcdcc = 1;
  DAT_100b6ff0 = 1;
  DAT_100b6f90 = local_504;
  DAT_100b6f8c = local_508;
  DAT_100b6f88 = local_50c;
  return;
}

