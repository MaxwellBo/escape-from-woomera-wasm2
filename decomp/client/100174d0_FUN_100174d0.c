
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100174d0(int param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  fVar1 = param_2;
  if ((DAT_100a4fdc & 0x80000000) == 0) {
    return 1;
  }
  if ((DAT_100a3a94 & 5) != 0) {
    return 1;
  }
  iStack_4 = param_1;
  FUN_10017a70(param_1);
  FUN_10018400(&DAT_100a3978,fVar1);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 == 0) {
    return 0;
  }
  if ((*(int *)(iVar4 + 0x80) < 0) && (*(int *)(iVar4 + 0x84) < 0)) {
    return 0;
  }
  piVar2 = (int *)(DAT_100a4fe8 * 0x10 + DAT_100a3ab4);
  iVar6 = piVar2[1] - *piVar2;
  iStack_10 = iVar4;
  lVar8 = __ftol();
  uStack_c = (undefined4)lVar8;
  if (_DAT_10059a18 < *(float *)(param_1 + 0x14)) {
    *(float *)(param_1 + 0x14) =
         (float)((float10)*(float *)(param_1 + 0x14) -
                (float10)_DAT_100a3a70 * (float10)_DAT_1005f800);
  }
  uStack_14 = DAT_100a3aac >> 0x10 & 0xff;
  uStack_18 = DAT_100a3aac >> 8 & 0xff;
  param_2 = (float)(DAT_100a3aac & 0xff);
  FUN_1001e790(&uStack_14,&uStack_18,&param_2);
  iVar7 = (DAT_100a4dd0 - DAT_100a3aa8 / 2) - DAT_100a3aa8;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (0 < *(int *)(iVar3 + 0x80)) {
    iVar3 = *(int *)(iVar3 + 0xd8) - *(int *)(iVar3 + 0xd4);
    if (*(int *)(iVar4 + 0xa0) < 0) {
      iVar5 = DAT_100a4dcc + iVar6 * -4;
      uVar9 = uStack_14;
      uVar10 = uStack_18;
      uVar11 = (uint)param_2;
      iVar4 = FUN_10015eb0(&DAT_100a0ea8,*(int *)(iStack_10 + 0x80));
      iVar4 = FUN_1001e950(&DAT_100a3a40,iVar5 - iVar3,iVar7,5,iVar4,uVar9,uVar10,uVar11);
    }
    else {
      iStack_8 = iVar6 / 10;
      iVar4 = FUN_1001e950(&DAT_100a3a40,(DAT_100a4dcc + iVar6 * -8) - iVar3,iVar7,5,
                           *(int *)(iVar4 + 0xa0),uStack_14,uStack_18,param_2);
      uStack_18 = DAT_100a3aac >> 8 & 0xff;
      uStack_14 = DAT_100a3aac >> 0x10 & 0xff;
      param_2 = (float)(DAT_100a3aac & 0xff);
      iVar4 = iVar4 + iVar6 / 2;
      (*DAT_100a501c)(iVar4,iVar7,iStack_8,DAT_100a3aa8,uStack_14,uStack_18,param_2,uStack_c);
      FUN_1001e790(&uStack_14,&uStack_18,&param_2);
      uVar9 = uStack_14;
      uVar10 = uStack_18;
      uVar11 = (uint)param_2;
      iVar3 = FUN_10015eb0(&DAT_100a0ea8,*(int *)(iStack_10 + 0x80));
      iVar4 = FUN_1001e950(&DAT_100a3a40,iVar6 / 2 + iStack_8 + iVar4,iVar7,5,iVar3,uVar9,uVar10,
                           uVar11);
      param_1 = iStack_4;
    }
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar5 = *(int *)(iVar3 + 0xe0) - *(int *)(iVar3 + 0xdc);
    iStack_4 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
    (*DAT_100a5000)(*(undefined4 *)(iVar3 + 0xd0),uStack_14,uStack_18,param_2);
    (*DAT_100a500c)(0,iVar4,iVar7 - iStack_4,*(int *)(param_1 + 0x1c) + 0xd4);
    iVar4 = iStack_10;
  }
  if (0 < *(int *)(iVar4 + 0x84)) {
    iStack_4 = *(int *)(*(int *)(param_1 + 0x1c) + 0xec) - *(int *)(*(int *)(param_1 + 0x1c) + 0xe8)
    ;
    iVar4 = FUN_10015eb0(&DAT_100a0ea8,*(int *)(iVar4 + 0x84));
    if (0 < iVar4) {
      iVar7 = iVar7 + (-((int)(DAT_100a3aa8 + (DAT_100a3aa8 >> 0x1f & 3U)) >> 2) - DAT_100a3aa8);
      iVar6 = (DAT_100a4dcc + iVar6 * -4) - iStack_4;
      uVar9 = uStack_14;
      uVar10 = uStack_18;
      uVar11 = (uint)param_2;
      iVar4 = FUN_10015eb0(&DAT_100a0ea8,*(int *)(iStack_10 + 0x84));
      iVar6 = FUN_1001e950(&DAT_100a3a40,iVar6,iVar7,5,iVar4,uVar9,uVar10,uVar11);
      (*DAT_100a5000)(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe4),uStack_14,uStack_18,param_2);
      iVar4 = *(int *)(param_1 + 0x1c);
      iVar3 = *(int *)(iVar4 + 0xf4) - *(int *)(iVar4 + 0xf0);
      (*DAT_100a500c)(0,iVar6,iVar7 - ((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3),iVar4 + 0xe8);
    }
  }
  return 1;
}

