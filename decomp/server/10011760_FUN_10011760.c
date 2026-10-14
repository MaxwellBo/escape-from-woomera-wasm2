
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10011760(undefined1 *param_1,int param_2)

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
  float10 fVar11;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_fanfriction_10103c68;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001179c:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100117a1;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001179c;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100117a1:
  if (iVar3 == 0) {
    fVar10 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0xb8) = (float)(fVar10 * (float10)_DAT_100dfb88);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_Volume_10103c60;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100117fc:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10011801;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100117fc;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10011801:
  if (iVar3 == 0) {
    fVar11 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
    fVar10 = (float10)_DAT_100dfb80;
    *(float *)(param_1 + 0xc0) = (float)(fVar11 * fVar10);
    if ((float10)_DAT_100dd628 < fVar11 * fVar10) {
      *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0xc0) < (float)_DAT_100de1e8) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_spawnorigin_10103c54;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10011892:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10011897;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10011892;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10011897:
  if (iVar3 == 0) {
    FUN_100b0880(&fStack_c,*(char **)(param_2 + 8));
    if (((fStack_c != DAT_10121dd8) || (fStack_8 != DAT_10121ddc)) || (fStack_4 != DAT_10121de0)) {
      iVar3 = *(int *)(param_1 + 4);
      *(float *)(iVar3 + 8) = fStack_c;
      *(float *)(iVar3 + 0xc) = fStack_8;
      *(float *)(iVar3 + 0x10) = fStack_4;
      return;
    }
  }
  else {
    pcVar7 = s_sounds_10103c4c;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_10011935:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_1001193a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_10011935;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1001193a:
    if (iVar3 == 0) {
      uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
      *(undefined4 *)(param_1 + 200) = uVar4;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    pbVar8 = &DAT_10103c44;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_1001198f:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_10011994;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_1001198f;
      pbVar2 = pbVar2 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10011994:
    if (iVar3 == 0) {
      FUN_100b0880((float *)(*(int *)(param_1 + 4) + 0x44),*(char **)(param_2 + 8));
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    pcVar7 = s_movewith_10101364;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100119ea:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100119ef;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100119ea;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100119ef:
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
LAB_10011a42:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_10011a47;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_10011a42;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10011a47:
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
LAB_10011a99:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_10011a9e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      this = (undefined1 *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_10011a99;
      pbVar5 = pbVar5 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10011a9e:
    if (iVar3 == 0) {
      uVar4 = FUN_100c8388(this,*(byte **)(param_2 + 8));
      *(undefined4 *)(param_1 + 0x60) = uVar4;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}

