
void __thiscall FUN_10015cb0(void *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  void *this;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_style_10101354;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10015ce8:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10015ced;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10015ce8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10015ced:
  if (iVar3 != 0) {
    pcVar7 = s_height_101048dc;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (void *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_10015d20:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_10015d25;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (void *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_10015d20;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10015d25:
    if (iVar3 != 0) {
      pcVar7 = s_killtarget_101048d0;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_10015d58:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_10015d5d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_10015d58;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10015d5d:
      if (iVar3 != 0) {
        pbVar8 = &DAT_101048c8;
        pbVar2 = pbVar5;
        do {
          bVar1 = *pbVar2;
          uVar6 = (undefined3)((uint)this >> 8);
          this = (void *)CONCAT31(uVar6,bVar1);
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_10015d90:
            iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_10015d95;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          this = (void *)CONCAT31(uVar6,bVar1);
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_10015d90;
          pbVar2 = pbVar2 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_10015d95:
        if (iVar3 != 0) {
          pbVar8 = &DAT_101048c0;
          pbVar2 = pbVar5;
          do {
            bVar1 = *pbVar2;
            uVar6 = (undefined3)((uint)this >> 8);
            this = (void *)CONCAT31(uVar6,bVar1);
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_10015dc8:
              iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_10015dcd;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            this = (void *)CONCAT31(uVar6,bVar1);
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_10015dc8;
            pbVar2 = pbVar2 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_10015dcd:
          if (iVar3 != 0) {
            pbVar8 = &DAT_101048b8;
            pbVar2 = pbVar5;
            do {
              bVar1 = *pbVar2;
              uVar6 = (undefined3)((uint)this >> 8);
              this = (void *)CONCAT31(uVar6,bVar1);
              bVar9 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_10015dfc:
                iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_10015e01;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar2[1];
              this = (void *)CONCAT31(uVar6,bVar1);
              bVar9 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_10015dfc;
              pbVar2 = pbVar2 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_10015e01:
            if (iVar3 != 0) {
              pcVar7 = s_globalstate_1010466c;
              pbVar2 = pbVar5;
              do {
                bVar1 = *pbVar2;
                uVar6 = (undefined3)((uint)this >> 8);
                this = (void *)CONCAT31(uVar6,bVar1);
                bVar9 = bVar1 < (byte)*pcVar7;
                if (bVar1 != *pcVar7) {
LAB_10015e30:
                  iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                  goto LAB_10015e35;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar2[1];
                this = (void *)CONCAT31(uVar6,bVar1);
                bVar9 = bVar1 < (byte)pcVar7[1];
                if (bVar1 != pcVar7[1]) goto LAB_10015e30;
                pbVar2 = pbVar2 + 2;
                pcVar7 = pcVar7 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_10015e35:
              if (iVar3 != 0) {
                pcVar7 = s_movewith_10101364;
                pbVar2 = pbVar5;
                do {
                  bVar1 = *pbVar2;
                  uVar6 = (undefined3)((uint)this >> 8);
                  this = (void *)CONCAT31(uVar6,bVar1);
                  bVar9 = bVar1 < (byte)*pcVar7;
                  if (bVar1 != *pcVar7) {
LAB_10015e85:
                    iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_10015e8a;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar2[1];
                  this = (void *)CONCAT31(uVar6,bVar1);
                  bVar9 = bVar1 < (byte)pcVar7[1];
                  if (bVar1 != pcVar7[1]) goto LAB_10015e85;
                  pbVar2 = pbVar2 + 2;
                  pcVar7 = pcVar7 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_10015e8a:
                if (iVar3 == 0) {
                  uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
                  *(undefined4 *)((int)param_1 + 0x14) = uVar4;
                  *(undefined4 *)(param_2 + 0xc) = 1;
                  return;
                }
                pcVar7 = s_skill_1010135c;
                pbVar2 = pbVar5;
                do {
                  bVar1 = *pbVar2;
                  uVar6 = (undefined3)((uint)this >> 8);
                  this = (void *)CONCAT31(uVar6,bVar1);
                  bVar9 = bVar1 < (byte)*pcVar7;
                  if (bVar1 != *pcVar7) {
LAB_10015ed7:
                    iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_10015edc;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar2[1];
                  this = (void *)CONCAT31(uVar6,bVar1);
                  bVar9 = bVar1 < (byte)pcVar7[1];
                  if (bVar1 != pcVar7[1]) goto LAB_10015ed7;
                  pbVar2 = pbVar2 + 2;
                  pcVar7 = pcVar7 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_10015edc:
                if (iVar3 == 0) {
                  uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
                  *(undefined4 *)((int)param_1 + 0x5c) = uVar4;
                  *(undefined4 *)(param_2 + 0xc) = 1;
                  return;
                }
                pcVar7 = s_style_10101354;
                do {
                  bVar1 = *pbVar5;
                  uVar6 = (undefined3)((uint)this >> 8);
                  this = (void *)CONCAT31(uVar6,bVar1);
                  bVar9 = bVar1 < (byte)*pcVar7;
                  if (bVar1 != *pcVar7) {
LAB_10015f28:
                    iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_10015f2d;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar5[1];
                  this = (void *)CONCAT31(uVar6,bVar1);
                  bVar9 = bVar1 < (byte)pcVar7[1];
                  if (bVar1 != pcVar7[1]) goto LAB_10015f28;
                  pbVar5 = pbVar5 + 2;
                  pcVar7 = pcVar7 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_10015f2d:
                if (iVar3 == 0) {
                  uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
                  *(undefined4 *)((int)param_1 + 0x60) = uVar4;
                  *(undefined4 *)(param_2 + 0xc) = 1;
                  return;
                }
                *(undefined4 *)(param_2 + 0xc) = 0;
                return;
              }
              uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
              *(undefined4 *)((int)param_1 + 0x23c) = uVar4;
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

