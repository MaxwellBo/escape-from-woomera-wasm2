
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10059100(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float afStack_3c [3];
  float afStack_30 [3];
  float afStack_24 [3];
  float afStack_18 [3];
  float afStack_c [3];
  
  switch(*(undefined4 *)(*(int *)(param_1 + 4) + 0x184)) {
  case 0:
    iVar4 = FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xc0)),
                         (int)param_2);
    iVar2 = FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xc4)),
                         (int)param_2);
    if (iVar4 == 0) {
      return;
    }
    if (iVar2 == 0) {
      return;
    }
    param_2 = FUN_100295c0(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xb8),
                           *(int *)(param_1 + 200));
    uVar1 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x208);
    uVar5 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x208));
    uVar3 = (*DAT_10121f24)(uVar1);
    FUN_10029880(param_2,uVar5,uVar3);
    break;
  case 1:
    pfVar6 = FUN_10058750(afStack_3c,param_1,(int)param_2,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xc0)));
    fStack_60 = *pfVar6;
    fStack_5c = pfVar6[1];
    fStack_58 = pfVar6[2];
    iVar4 = FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xc4)),
                         (int)param_2);
    if (iVar4 == 0) {
      return;
    }
    param_2 = FUN_100295c0(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xb8),
                           *(int *)(param_1 + 200));
    uVar5 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x208));
    FUN_10029800(param_2,&fStack_60,uVar5);
    break;
  case 2:
    pfVar6 = FUN_10058750(afStack_30,param_1,(int)param_2,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xc0)));
    fStack_60 = *pfVar6;
    fStack_5c = pfVar6[1];
    fStack_58 = pfVar6[2];
    pfVar6 = FUN_10058750(afStack_24,param_1,(int)param_2,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xc4)));
    fStack_54 = *pfVar6;
    fStack_50 = pfVar6[1];
    fStack_4c = pfVar6[2];
    param_2 = FUN_100295c0(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xb8),
                           *(int *)(param_1 + 200));
    pfVar6 = &fStack_54;
    goto LAB_100593cd;
  case 3:
    pfVar6 = FUN_10058750(afStack_18,param_1,(int)param_2,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xc0)));
    fStack_60 = *pfVar6;
    fStack_5c = pfVar6[1];
    fStack_58 = pfVar6[2];
    pfVar6 = FUN_10058820(afStack_c,param_1,(int)param_2,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xc4)));
    fStack_54 = *pfVar6;
    fStack_50 = pfVar6[1];
    fStack_4c = pfVar6[2];
    param_2 = FUN_100295c0(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0xb8),
                           *(int *)(param_1 + 200));
    fStack_48 = fStack_54 + fStack_60;
    pfVar6 = &fStack_48;
    fStack_44 = fStack_5c + fStack_50;
    fStack_40 = fStack_58 + fStack_4c;
LAB_100593cd:
    FUN_10029700(param_2,&fStack_60,pfVar6);
  }
  lVar7 = __ftol();
  lVar8 = __ftol();
  lVar9 = __ftol();
  *(float *)(param_2[1] + 0x150) = (float)(int)lVar9;
  *(float *)(param_2[1] + 0x154) = (float)(int)lVar8;
  *(float *)(param_2[1] + 0x158) = (float)(int)lVar7;
  lVar7 = __ftol();
  *(float *)(param_2[1] + 0x14c) = (float)(int)lVar7;
  *(undefined4 *)(param_2[1] + 0x114) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_2[1] + 0x130) = *(undefined4 *)(param_1 + 0xd0);
  *(float *)(param_2[1] + 0x134) = (float)*(int *)(param_1 + 0xd4);
  *(uint *)(param_2[1] + 0x148) =
       *(uint *)(param_1 + 0xe4) & 0xf0 | *(uint *)(param_2[1] + 0x148) & 0xf;
  *(undefined4 *)(param_2[1] + 0x1e0) = *(undefined4 *)(param_1 + 0xdc);
  *(float *)(param_2[1] + 0x164) = (float)*(int *)(param_1 + 0xe0);
  *(uint *)(param_2[1] + 0x1a0) =
       *(uint *)(param_2[1] + 0x1a0) | *(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0x78;
  if (*(float *)(param_1 + 0xd8) != _DAT_100dd5f8) {
    param_2[0x1d] = (int)CBaseEntity::SUB_Remove;
    (**(code **)(*param_2 + 8))(*(undefined4 *)(param_1 + 0xd8));
  }
  *(undefined4 *)(param_2[1] + 0x1cc) = *(undefined4 *)(param_1 + 0xbc);
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x1c8);
  if (iVar4 != 0) {
    FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + iVar4),param_2,param_1,3,0);
  }
  return;
}

