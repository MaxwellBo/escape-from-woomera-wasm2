
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002e220(undefined1 *param_1,int param_2)

{
  float *pfVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  undefined1 *this;
  char *pcVar10;
  byte *pbVar11;
  bool bVar12;
  float10 fVar13;
  undefined3 uVar9;
  
  pbVar8 = *(byte **)(param_2 + 4);
  pcVar10 = s_shootmodel_10108338;
  pbVar5 = pbVar8;
  this = param_1;
  do {
    bVar2 = *pbVar5;
    uVar9 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar9,bVar2);
    bVar12 = bVar2 < (byte)*pcVar10;
    if (bVar2 != *pcVar10) {
LAB_1002e25b:
      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_1002e260;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    this = (undefined1 *)CONCAT31(uVar9,bVar2);
    bVar12 = bVar2 < (byte)pcVar10[1];
    if (bVar2 != pcVar10[1]) goto LAB_1002e25b;
    pbVar5 = pbVar5 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_1002e260:
  if (iVar6 == 0) {
    uVar7 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb8) = uVar7;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar10 = s_shootsounds_1010832c;
  pbVar5 = pbVar8;
  do {
    bVar2 = *pbVar5;
    uVar9 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar9,bVar2);
    bVar12 = bVar2 < (byte)*pcVar10;
    if (bVar2 != *pcVar10) {
LAB_1002e2b6:
      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_1002e2bb;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    this = (undefined1 *)CONCAT31(uVar9,bVar2);
    bVar12 = bVar2 < (byte)pcVar10[1];
    if (bVar2 != pcVar10[1]) goto LAB_1002e2b6;
    pbVar5 = pbVar5 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_1002e2bb:
  if (iVar6 == 0) {
    uVar7 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = 1;
    switch(uVar7) {
    case 0:
      *(undefined4 *)(param_1 + 0xd0) = 0;
      return;
    case 1:
      *(undefined4 *)(param_1 + 0xd0) = 1;
      return;
    case 2:
      *(undefined4 *)(param_1 + 0xd0) = 2;
      return;
    case 3:
      *(undefined4 *)(param_1 + 0xd0) = 3;
      return;
    case 4:
      *(undefined4 *)(param_1 + 0xd0) = 8;
      return;
    default:
      *(undefined4 *)(param_1 + 0xd0) = 9;
      return;
    }
  }
  pbVar11 = &DAT_10107d84;
  pbVar5 = pbVar8;
  do {
    bVar2 = *pbVar5;
    uVar9 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar9,bVar2);
    bVar12 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_1002e382:
      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_1002e387;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    this = (undefined1 *)CONCAT31(uVar9,bVar2);
    bVar12 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_1002e382;
    pbVar5 = pbVar5 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_1002e387:
  if (iVar6 == 0) {
    uVar7 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xf8) = uVar7;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar10 = s_m_iszTouchOther_10107d74;
  pbVar5 = pbVar8;
  do {
    bVar2 = *pbVar5;
    uVar9 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar9,bVar2);
    bVar12 = bVar2 < (byte)*pcVar10;
    if (bVar2 != *pcVar10) {
LAB_1002e3da:
      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_1002e3df;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    this = (undefined1 *)CONCAT31(uVar9,bVar2);
    bVar12 = bVar2 < (byte)pcVar10[1];
    if (bVar2 != pcVar10[1]) goto LAB_1002e3da;
    pbVar5 = pbVar5 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_1002e3df:
  if (iVar6 == 0) {
    uVar7 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xfc) = uVar7;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar10 = s_m_iPhysics_10107d68;
  pbVar5 = pbVar8;
  do {
    bVar2 = *pbVar5;
    uVar9 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar9,bVar2);
    bVar12 = bVar2 < (byte)*pcVar10;
    if (bVar2 != *pcVar10) {
LAB_1002e432:
      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_1002e437;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    this = (undefined1 *)CONCAT31(uVar9,bVar2);
    bVar12 = bVar2 < (byte)pcVar10[1];
    if (bVar2 != pcVar10[1]) goto LAB_1002e432;
    pbVar5 = pbVar5 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_1002e437:
  if (iVar6 == 0) {
    uVar7 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x100) = uVar7;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar10 = s_m_fFriction_10107d5c;
  pbVar5 = pbVar8;
  do {
    bVar2 = *pbVar5;
    uVar9 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar9,bVar2);
    bVar12 = bVar2 < (byte)*pcVar10;
    if (bVar2 != *pcVar10) {
LAB_1002e489:
      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_1002e48e;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    this = (undefined1 *)CONCAT31(uVar9,bVar2);
    bVar12 = bVar2 < (byte)pcVar10[1];
    if (bVar2 != pcVar10[1]) goto LAB_1002e489;
    pbVar5 = pbVar5 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_1002e48e:
  if (iVar6 == 0) {
    fVar13 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0x104) = (float)fVar13;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar10 = s_m_vecSize_10107d50;
  do {
    bVar2 = *pbVar8;
    bVar12 = bVar2 < (byte)*pcVar10;
    if (bVar2 != *pcVar10) {
LAB_1002e4e0:
      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_1002e4e5;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar8[1];
    bVar12 = bVar2 < (byte)pcVar10[1];
    if (bVar2 != pcVar10[1]) goto LAB_1002e4e0;
    pbVar8 = pbVar8 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_1002e4e5:
  if (iVar6 != 0) {
    FUN_1002d530(param_1,param_2);
    return;
  }
  pfVar1 = (float *)(param_1 + 0x108);
  FUN_100b0880(pfVar1,*(char **)(param_2 + 8));
  fVar3 = *(float *)(param_1 + 0x10c) * _DAT_100dd614;
  fVar4 = *(float *)(param_1 + 0x110) * _DAT_100dd614;
  *pfVar1 = *pfVar1 * _DAT_100dd614;
  *(float *)(param_1 + 0x10c) = fVar3;
  *(float *)(param_1 + 0x110) = fVar4;
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

