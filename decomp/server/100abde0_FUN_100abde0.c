
void __thiscall FUN_100abde0(undefined1 *param_1,int param_2)

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
  pcVar7 = s_maxsleep_1011a2e4;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100abe18:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100abe1d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100abe18;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100abe1d:
  if (iVar3 == 0) {
    fVar10 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0x34c) = (float)fVar10;
  }
  else {
    pcVar7 = s_orientation_1011a2d8;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100abe6c:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100abe71;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100abe6c;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100abe71:
    if (iVar3 == 0) {
      uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
      *(undefined4 *)(param_1 + 0x32c) = uVar4;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    pcVar7 = s_searchspeed_1011a2cc;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100abec0:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100abec5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100abec0;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100abec5:
    if (iVar3 == 0) {
      uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
      *(undefined4 *)(param_1 + 0x350) = uVar4;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    pcVar7 = s_turnrate_1011a2c0;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100abf14:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100abf19;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100abf14;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100abf19:
    if (iVar3 == 0) {
      uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
      *(undefined4 *)(param_1 + 0x324) = uVar4;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    pcVar7 = s_style_10101354;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100abf68:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100abf6d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100abf68;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100abf6d:
    if (iVar3 != 0) {
      pcVar7 = s_height_101048dc;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100abfa0:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100abfa5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100abfa0;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100abfa5:
      if (iVar3 != 0) {
        pbVar8 = &DAT_101048c8;
        pbVar2 = pbVar5;
        do {
          bVar1 = *pbVar2;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_100abfd8:
            iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_100abfdd;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_100abfd8;
          pbVar2 = pbVar2 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_100abfdd:
        if (iVar3 != 0) {
          pbVar8 = &DAT_101048c0;
          pbVar2 = pbVar5;
          do {
            bVar1 = *pbVar2;
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_100ac010:
              iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_100ac015;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_100ac010;
            pbVar2 = pbVar2 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_100ac015:
          if (iVar3 != 0) {
            pbVar2 = &DAT_101048b8;
            do {
              bVar1 = *pbVar5;
              bVar9 = bVar1 < *pbVar2;
              if (bVar1 != *pbVar2) {
LAB_100ac048:
                iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_100ac04d;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar9 = bVar1 < pbVar2[1];
              if (bVar1 != pbVar2[1]) goto LAB_100ac048;
              pbVar5 = pbVar5 + 2;
              pbVar2 = pbVar2 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_100ac04d:
            if (iVar3 != 0) {
              FUN_10060f00(param_1,param_2);
              return;
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

