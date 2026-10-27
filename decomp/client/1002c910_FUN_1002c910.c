
void __thiscall FUN_1002c910(void *this,int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 extraout_ECX;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  void *extraout_ECX_00;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  char *pcVar14;
  byte *pbVar15;
  byte *local_ac;
  byte local_a0 [32];
  byte local_80;
  byte local_7f [127];
  
  pbVar11 = &local_80;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    pbVar11[0] = 0;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    pbVar11[3] = 0;
    pbVar11 = pbVar11 + 4;
  }
  FUN_10030b50((char *)((int)this + param_1 * 0x80 + 0x14),(char *)&local_80,0x80);
  pbVar11 = (byte *)((int)this + param_1 * 0x80 + 0x114);
  pbVar10 = pbVar11;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    pbVar10[0] = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10 = pbVar10 + 4;
  }
  pbVar10 = &local_80;
  pbVar12 = pbVar11;
  local_ac = pbVar11;
  do {
    if (local_80 == 0) {
      return;
    }
    bVar3 = *pbVar10;
    while (bVar3 == 10) {
      pbVar5 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar5;
    }
    if (0x7f < (int)pbVar10 - (int)&local_80) {
      return;
    }
    if (0x7f < (int)pbVar12 - (int)pbVar11) {
      return;
    }
    iVar6 = FUN_100499e5(pbVar11,pbVar10);
    if (((iVar6 < 0) || (7 < iVar6)) ||
       (pvVar7 = *(void **)((int)this + iVar6 * 4 + 0x214), pvVar7 == (void *)0x0)) {
      bVar3 = *pbVar10;
      while ((bVar3 != 0 && (bVar3 != 10))) {
        pbVar5 = pbVar10 + 1;
        pbVar10 = pbVar10 + 1;
        bVar3 = *pbVar5;
      }
    }
    else {
      bVar3 = *pbVar10;
      while (('/' < (char)bVar3 && ((char)bVar3 < ':'))) {
        pbVar5 = pbVar10 + 1;
        pbVar10 = pbVar10 + 1;
        bVar3 = *pbVar5;
      }
      bVar3 = *pbVar10;
      if ((bVar3 != 10) && (bVar3 != 0)) {
        do {
          if (bVar3 == 0) break;
          if (bVar3 == 0x25) {
            bVar3 = pbVar10[1];
            if (bVar3 == 0x25) {
              *pbVar12 = 0x25;
              pbVar12 = pbVar12 + 1;
              pbVar10 = pbVar10 + 2;
              local_ac = pbVar12;
            }
            else {
              pbVar10 = pbVar10 + 2;
              iVar6 = FUN_100499e5(pvVar7,pbVar10);
              bVar2 = *pbVar10;
              for (pvVar7 = (void *)CONCAT31((int3)((uint)extraout_ECX >> 8),bVar2);
                  ('/' < (char)bVar2 && ((char)pvVar7 < ':'));
                  pvVar7 = (void *)CONCAT31((int3)((uint)pvVar7 >> 8),bVar2)) {
                bVar2 = pbVar10[1];
                pbVar10 = pbVar10 + 1;
              }
              if ((-1 < iVar6) && (iVar6 < 8)) {
                iVar6 = *(int *)((int)this + iVar6 * 4 + 0x214);
                if (bVar3 == 0x69) {
                  FUN_100499f0(local_a0,&DAT_100789f4);
                  pvVar7 = extraout_ECX_00;
                }
                else {
                  pvVar7 = this;
                  if (bVar3 == 0x70) {
                    (*DAT_100a5044)(iVar6,&DAT_100b59f0 + iVar6 * 0x14);
                    pcVar13 = *(char **)(&DAT_100b59f0 + iVar6 * 0x14);
                    pbVar12 = local_ac;
                    if (pcVar13 == (char *)0x0) {
                      uVar8 = 0xffffffff;
                      pcVar13 = &DAT_10079ad0;
                      do {
                        pcVar14 = pcVar13;
                        if (uVar8 == 0) break;
                        uVar8 = uVar8 - 1;
                        pcVar14 = pcVar13 + 1;
                        cVar1 = *pcVar13;
                        pcVar13 = pcVar14;
                      } while (cVar1 != '\0');
                      uVar8 = ~uVar8;
                      pbVar5 = (byte *)(pcVar14 + -uVar8);
                      pbVar15 = local_a0;
                      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                        *(undefined4 *)pbVar15 = *(undefined4 *)pbVar5;
                        pbVar5 = pbVar5 + 4;
                        pbVar15 = pbVar15 + 4;
                      }
                      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                        *pbVar15 = *pbVar5;
                        pbVar5 = pbVar5 + 1;
                        pbVar15 = pbVar15 + 1;
                      }
                      pvVar7 = (void *)0x0;
                    }
                    else {
                      _strncpy((char *)local_a0,pcVar13,0x20);
                      puVar4 = FUN_10019060(iVar6);
                      *(undefined4 **)((int)this + param_1 * 4 + 0x238) = puVar4;
                    }
                  }
                  else {
                    local_a0[0] = 0;
                  }
                }
                pvVar7 = (void *)CONCAT31((int3)((uint)pvVar7 >> 8),local_a0[0]);
                pbVar5 = local_a0;
                bVar3 = local_a0[0];
                while ((bVar3 != 0 && (local_ac = pbVar12, (int)pbVar12 - (int)pbVar11 < 0x80))) {
                  bVar3 = *pbVar5;
                  pvVar7 = (void *)CONCAT31((int3)((uint)pvVar7 >> 8),bVar3);
                  pbVar5 = pbVar5 + 1;
                  *pbVar12 = bVar3;
                  bVar3 = *pbVar5;
                  pbVar12 = pbVar12 + 1;
                  local_ac = pbVar12;
                }
              }
            }
          }
          else {
            *pbVar12 = bVar3;
            pbVar12 = pbVar12 + 1;
            pbVar10 = pbVar10 + 1;
            local_ac = pbVar12;
          }
          bVar3 = *pbVar10;
        } while (bVar3 != 10);
      }
    }
    local_80 = *pbVar10;
  } while( true );
}

