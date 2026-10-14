
void __thiscall FUN_10044e50(void *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  void *this;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar7 = s_style_10101354;
  pbVar2 = pbVar4;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10044e88:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10044e8d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10044e88;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10044e8d:
  if (iVar3 != 0) {
    pcVar7 = s_height_101048dc;
    pbVar2 = pbVar4;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (void *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_10044ec0:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_10044ec5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (void *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_10044ec0;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10044ec5:
    if (iVar3 != 0) {
      pbVar8 = &DAT_101048c8;
      pbVar2 = pbVar4;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_10044ef8:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_10044efd;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_10044ef8;
        pbVar2 = pbVar2 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10044efd:
      if (iVar3 != 0) {
        pbVar8 = &DAT_101048c0;
        pbVar2 = pbVar4;
        do {
          bVar1 = *pbVar2;
          uVar6 = (undefined3)((uint)this >> 8);
          this = (void *)CONCAT31(uVar6,bVar1);
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_10044f30:
            iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_10044f35;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          this = (void *)CONCAT31(uVar6,bVar1);
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_10044f30;
          pbVar2 = pbVar2 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_10044f35:
        if (iVar3 != 0) {
          pbVar8 = &DAT_101048b8;
          pbVar2 = pbVar4;
          do {
            bVar1 = *pbVar2;
            uVar6 = (undefined3)((uint)this >> 8);
            this = (void *)CONCAT31(uVar6,bVar1);
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_10044f64:
              iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_10044f69;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            this = (void *)CONCAT31(uVar6,bVar1);
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_10044f64;
            pbVar2 = pbVar2 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_10044f69:
          if (iVar3 != 0) {
            pcVar7 = s_dmdelay_1010d4a0;
            do {
              bVar1 = *pbVar4;
              uVar6 = (undefined3)((uint)this >> 8);
              this = (void *)CONCAT31(uVar6,bVar1);
              bVar9 = bVar1 < (byte)*pcVar7;
              if (bVar1 != *pcVar7) {
LAB_10044f98:
                iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_10044f9d;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              this = (void *)CONCAT31(uVar6,bVar1);
              bVar9 = bVar1 < (byte)pcVar7[1];
              if (bVar1 != pcVar7[1]) goto LAB_10044f98;
              pbVar4 = pbVar4 + 2;
              pcVar7 = pcVar7 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_10044f9d:
            if (iVar3 != 0) {
              FUN_100991d0(param_1,param_2);
              return;
            }
            uVar5 = FUN_100c8388(this,*(byte **)(param_2 + 8));
            *(undefined4 *)((int)param_1 + 0x160) = uVar5;
          }
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

