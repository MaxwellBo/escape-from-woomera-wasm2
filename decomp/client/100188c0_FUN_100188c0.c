
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100188c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  if ((DAT_100a3a94 & 8) != 0) {
    return 1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  uStack_10 = *puVar1;
  uStack_c = puVar1[1];
  iStack_8 = puVar1[2];
  iStack_4 = puVar1[3];
  iVar3 = *(int *)(param_1 + 0x24);
  if (100 < iVar3) {
    iVar3 = 100;
  }
  uStack_14 = 100 - iVar3;
  lVar8 = __ftol();
  iStack_8 = (int)lVar8;
  uStack_14 = DAT_100a3aac >> 0x10 & 0xff;
  uStack_18 = DAT_100a3aac >> 8 & 0xff;
  uStack_1c = DAT_100a3aac & 0xff;
  if ((DAT_100a4fdc & 0x80000000) != 0) {
    if (*(float *)(param_1 + 0x28) != _DAT_10059a18) {
      if (_DAT_1005ace0 < *(float *)(param_1 + 0x28)) {
        *(undefined4 *)(param_1 + 0x28) = 0x42c80000;
      }
      fVar7 = (float10)*(float *)(param_1 + 0x28) - (float10)_DAT_100a3a70 * (float10)_DAT_1005f800;
      *(float *)(param_1 + 0x28) = (float)fVar7;
      if (fVar7 <= (float10)_DAT_10059a18) {
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      __ftol();
    }
    FUN_1001e790(&uStack_14,&uStack_18,&uStack_1c);
    iVar3 = (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) - *(int *)(*(int *)(param_1 + 0x1c) + 8)) / 6;
    iVar6 = (DAT_100a4dd0 - DAT_100a3aa8 / 2) - DAT_100a3aa8;
    iVar2 = DAT_100a4dcc / 5;
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar4 = FUN_1001c090(&DAT_100a3a40,s_suit_empty_10078004);
      if (iVar4 < 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(DAT_100a3ab0 + iVar4 * 4);
      }
      *(undefined4 *)(param_1 + 0x14) = uVar5;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar4 = FUN_1001c090(&DAT_100a3a40,s_suit_full_10077ff8);
      if (iVar4 < 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(DAT_100a3ab0 + iVar4 * 4);
      }
      *(undefined4 *)(param_1 + 0x18) = uVar5;
    }
    (*DAT_100a5000)(*(undefined4 *)(param_1 + 0x14),uStack_14,uStack_18,uStack_1c);
    (*DAT_100a500c)(0,iVar2,iVar6 - iVar3,*(undefined4 *)(param_1 + 0x1c));
    if (iStack_8 < iStack_4) {
      (*DAT_100a5000)(*(undefined4 *)(param_1 + 0x18),uStack_14,uStack_18,uStack_1c);
      (*DAT_100a500c)(0,iVar2,((iVar6 - *(int *)(*(int *)(param_1 + 0x20) + 8)) - iVar3) + iStack_8,
                      &uStack_10);
    }
    FUN_1001e950(&DAT_100a3a40,((*(int **)(param_1 + 0x1c))[1] - **(int **)(param_1 + 0x1c)) + iVar2
                 ,iVar6,5,*(int *)(param_1 + 0x24),uStack_14,uStack_18,uStack_1c);
    return 1;
  }
  return 1;
}

