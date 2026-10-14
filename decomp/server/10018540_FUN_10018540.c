
void __thiscall FUN_10018540(undefined1 *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined1 *this;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  float10 fVar10;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_MaxDelay_10104d18;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10018578:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1001857d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10018578;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001857d:
  if (iVar3 == 0) {
    fVar10 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0xb8) = (float)fVar10;
  }
  else {
    pcVar7 = s_style_10101354;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100185cc:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100185d1;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100185cc;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100185d1:
    if (iVar3 != 0) {
      pcVar7 = s_height_101048dc;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_10018600:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_10018605;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (undefined1 *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_10018600;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10018605:
      if (iVar3 != 0) {
        pcVar7 = s_killtarget_101048d0;
        pbVar2 = pbVar5;
        do {
          bVar1 = *pbVar2;
          uVar6 = (undefined3)((uint)this >> 8);
          this = (undefined1 *)CONCAT31(uVar6,bVar1);
          bVar9 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_10018634:
            iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_10018639;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          this = (undefined1 *)CONCAT31(uVar6,bVar1);
          bVar9 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_10018634;
          pbVar2 = pbVar2 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_10018639:
        if (iVar3 != 0) {
          pbVar8 = &DAT_101048c8;
          pbVar2 = pbVar5;
          do {
            bVar1 = *pbVar2;
            uVar6 = (undefined3)((uint)this >> 8);
            this = (undefined1 *)CONCAT31(uVar6,bVar1);
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_1001866c:
              iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_10018671;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            this = (undefined1 *)CONCAT31(uVar6,bVar1);
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_1001866c;
            pbVar2 = pbVar2 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_10018671:
          if (iVar3 != 0) {
            pbVar8 = &DAT_101048c0;
            pbVar2 = pbVar5;
            do {
              bVar1 = *pbVar2;
              uVar6 = (undefined3)((uint)this >> 8);
              this = (undefined1 *)CONCAT31(uVar6,bVar1);
              bVar9 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_100186a4:
                iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_100186a9;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar2[1];
              this = (undefined1 *)CONCAT31(uVar6,bVar1);
              bVar9 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_100186a4;
              pbVar2 = pbVar2 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_100186a9:
            if (iVar3 != 0) {
              pbVar8 = &DAT_101048b8;
              pbVar2 = pbVar5;
              do {
                bVar1 = *pbVar2;
                uVar6 = (undefined3)((uint)this >> 8);
                this = (undefined1 *)CONCAT31(uVar6,bVar1);
                bVar9 = bVar1 < *pbVar8;
                if (bVar1 != *pbVar8) {
LAB_100186dc:
                  iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                  goto LAB_100186e1;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar2[1];
                this = (undefined1 *)CONCAT31(uVar6,bVar1);
                bVar9 = bVar1 < pbVar8[1];
                if (bVar1 != pbVar8[1]) goto LAB_100186dc;
                pbVar2 = pbVar2 + 2;
                pbVar8 = pbVar8 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_100186e1:
              if (iVar3 != 0) {
                pcVar7 = s_movewith_10101364;
                pbVar2 = pbVar5;
                do {
                  bVar1 = *pbVar2;
                  uVar6 = (undefined3)((uint)this >> 8);
                  this = (undefined1 *)CONCAT31(uVar6,bVar1);
                  bVar9 = bVar1 < (byte)*pcVar7;
                  if (bVar1 != *pcVar7) {
LAB_10018714:
                    iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_10018719;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar2[1];
                  this = (undefined1 *)CONCAT31(uVar6,bVar1);
                  bVar9 = bVar1 < (byte)pcVar7[1];
                  if (bVar1 != pcVar7[1]) goto LAB_10018714;
                  pbVar2 = pbVar2 + 2;
                  pcVar7 = pcVar7 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_10018719:
                if (iVar3 == 0) {
                  uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
                  *(undefined4 *)(param_1 + 0x14) = uVar4;
                  *(undefined4 *)(param_2 + 0xc) = 1;
                  return;
                }
                pcVar7 = s_skill_1010135c;
                pbVar2 = pbVar5;
                do {
                  bVar1 = *pbVar2;
                  uVar6 = (undefined3)((uint)this >> 8);
                  this = (undefined1 *)CONCAT31(uVar6,bVar1);
                  bVar9 = bVar1 < (byte)*pcVar7;
                  if (bVar1 != *pcVar7) {
LAB_10018766:
                    iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_1001876b;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar2[1];
                  this = (undefined1 *)CONCAT31(uVar6,bVar1);
                  bVar9 = bVar1 < (byte)pcVar7[1];
                  if (bVar1 != pcVar7[1]) goto LAB_10018766;
                  pbVar2 = pbVar2 + 2;
                  pcVar7 = pcVar7 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_1001876b:
                if (iVar3 == 0) {
                  uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
                  *(undefined4 *)(param_1 + 0x5c) = uVar4;
                  *(undefined4 *)(param_2 + 0xc) = 1;
                  return;
                }
                pcVar7 = s_style_10101354;
                do {
                  bVar1 = *pbVar5;
                  uVar6 = (undefined3)((uint)this >> 8);
                  this = (undefined1 *)CONCAT31(uVar6,bVar1);
                  bVar9 = bVar1 < (byte)*pcVar7;
                  if (bVar1 != *pcVar7) {
LAB_100187b7:
                    iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_100187bc;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar5[1];
                  this = (undefined1 *)CONCAT31(uVar6,bVar1);
                  bVar9 = bVar1 < (byte)pcVar7[1];
                  if (bVar1 != pcVar7[1]) goto LAB_100187b7;
                  pbVar5 = pbVar5 + 2;
                  pcVar7 = pcVar7 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_100187bc:
                if (iVar3 == 0) {
                  uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
                  *(undefined4 *)(param_1 + 0x60) = uVar4;
                  *(undefined4 *)(param_2 + 0xc) = 1;
                  return;
                }
                *(undefined4 *)(param_2 + 0xc) = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

