
void __thiscall FUN_10038090(undefined1 *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *this;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  longlong lVar9;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  undefined3 uVar5;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pbVar6 = &DAT_10108e6c;
  pbVar2 = pbVar4;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_100380cb:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100380d0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined1 *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_100380cb;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100380d0:
  if (iVar3 == 0) {
    iVar3 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = 1;
    if (iVar3 == 0) {
      uStack_18 = 0x41000000;
      uStack_14 = 0x41000000;
      uStack_10 = 0x41000000;
      uStack_c = 0xc1000000;
      uStack_8 = 0xc1000000;
      uStack_4 = 0xc1000000;
      FUN_100afdc0(*(int *)(param_1 + 4),&uStack_c,&uStack_18);
      return;
    }
    if (iVar3 != 2) {
      if (iVar3 != 3) {
        uStack_60 = 0x41800000;
        uStack_5c = 0x41800000;
        uStack_58 = 0x42100000;
        uStack_54 = 0xc1800000;
        uStack_50 = 0xc1800000;
        uStack_4c = 0xc2100000;
        FUN_100afdc0(*(int *)(param_1 + 4),&uStack_54,&uStack_60);
        return;
      }
      uStack_48 = 0x41800000;
      uStack_44 = 0x41800000;
      uStack_40 = 0x41900000;
      uStack_3c = 0xc1800000;
      uStack_38 = 0xc1800000;
      uStack_34 = 0xc1900000;
      FUN_100afdc0(*(int *)(param_1 + 4),&uStack_3c,&uStack_48);
      return;
    }
    uStack_30 = 0x42000000;
    uStack_2c = 0x42000000;
    uStack_28 = 0x42100000;
    uStack_24 = 0xc2000000;
    uStack_20 = 0xc2000000;
    uStack_1c = 0xc2100000;
    FUN_100afdc0(*(int *)(param_1 + 4),&uStack_24,&uStack_30);
    return;
  }
  pcVar7 = s_buoyancy_10108e60;
  do {
    bVar1 = *pbVar4;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (undefined1 *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1003826b:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10038270;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    this = (undefined1 *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1003826b;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10038270:
  if (iVar3 == 0) {
    FUN_100c82a6(this,*(byte **)(param_2 + 8));
    lVar9 = __ftol();
    *(int *)(*(int *)(param_1 + 4) + 0x110) = (int)lVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  FUN_10036460(param_1,param_2);
  return;
}

