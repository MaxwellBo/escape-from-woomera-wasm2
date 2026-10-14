
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1007f1d0(int *param_1,void *param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = FUN_1005cae0(param_1,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = FUN_100b20a0(param_2,(byte *)s_PLAYER_10114f80,(int)param_1,&DAT_101144e0,0x26);
  if (*(int *)(*(int *)(DAT_10122044 + 0x9c) + 0x52c) == 0) {
    (*DAT_10121efc)(1,s_No_Landmark__s_10114f88,*(int *)(DAT_10122044 + 0x9c) + 0x530);
    iVar3 = FUN_1007ea20(param_1);
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar3 + 0x80;
    }
    uVar8 = *(undefined4 *)(iVar5 + 0xc);
    iVar1 = param_1[1];
    fVar2 = *(float *)(iVar5 + 0x10) + _DAT_100dd618;
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)(iVar1 + 0xc) = uVar8;
    *(float *)(iVar1 + 0x10) = fVar2;
    if (iVar3 != 0) {
      iVar3 = iVar3 + 0x80;
    }
    iVar5 = param_1[1];
    *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(iVar3 + 0x50);
    *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
  }
  *(undefined4 *)(param_1[1] + 0x7c) = 0;
  iVar3 = param_1[1];
  *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar3 + 0x74);
  *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar3 + 0x78);
  *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(iVar3 + 0x7c);
  *(undefined4 *)(param_1[1] + 0xa0) = 1;
  param_1[0xb4] = 0xf7;
  DAT_10121dcc = *(undefined4 *)(param_1[1] + 0xb4);
  if ((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0) {
    puVar9 = &uStack_c;
    uStack_c = 0x41800000;
    uStack_8 = 0x41800000;
    uStack_4 = 0x42100000;
    uStack_18 = 0xc1800000;
    uStack_14 = 0xc1800000;
    uStack_10 = 0xc2100000;
    puVar6 = &uStack_18;
  }
  else {
    puVar9 = &uStack_18;
    uStack_18 = 0x41800000;
    uStack_14 = 0x41800000;
    uStack_10 = 0x41900000;
    uStack_c = 0xc1800000;
    uStack_8 = 0xc1800000;
    uStack_4 = 0xc1900000;
    puVar6 = &uStack_c;
  }
  FUN_100afdc0(param_1[1],puVar6,puVar9);
  (*DAT_10121fe8)(*(undefined4 *)(param_1[1] + 0x208),&DAT_10114f3c,&DAT_1010c45c);
  if (param_1[0x13b] == 0) {
    puVar10 = &DAT_101083f8;
    uVar8 = *(undefined4 *)(param_1[1] + 0x208);
  }
  else {
    puVar10 = &DAT_1010c45c;
    uVar8 = *(undefined4 *)(param_1[1] + 0x208);
  }
  (*DAT_10121fe8)(uVar8,&DAT_1010fb38,puVar10);
  FUN_1007f1c0();
  fVar7 = FUN_100ae400();
  param_1[0xaf] = (int)(float)fVar7;
  return uVar4;
}

