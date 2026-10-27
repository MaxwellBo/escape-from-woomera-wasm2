
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10017fc0(int param_1)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  if ((DAT_100a3a94 & 5) != 0) {
    return 1;
  }
  uStack_c = DAT_100a3aac >> 0x10 & 0xff;
  uStack_10 = DAT_100a3aac >> 8 & 0xff;
  uStack_14 = DAT_100a3aac & 0xff;
  lVar8 = __ftol();
  uStack_4 = (undefined4)lVar8;
  if (_DAT_10059a18 < *(float *)(param_1 + 0x28)) {
    *(float *)(param_1 + 0x28) =
         (float)((float10)*(float *)(param_1 + 0x28) -
                (float10)_DAT_100a3a70 * (float10)_DAT_1005f800);
  }
  FUN_1001e790(&uStack_c,&uStack_10,&uStack_14);
  piVar3 = (int *)(DAT_100a4fe8 * 0x10 + DAT_100a3ab4);
  iVar7 = piVar3[1] - *piVar3;
  iVar5 = DAT_100a4dd0 + DAT_100a3aa8 * -4;
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    iVar6 = (DAT_100a4dcc - iVar7) - iVar7;
    iVar5 = iVar5 + (piVar3[3] - piVar3[2]);
  }
  else {
    piVar3 = (int *)(iVar1 * 0x10 + DAT_100a3ab4);
    iVar6 = (DAT_100a4dcc - iVar7) + (*piVar3 - piVar3[1]);
    iVar5 = iVar5 + (piVar3[3] - piVar3[2]);
    if (iVar1 < 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(DAT_100a3ab0 + iVar1 * 4);
    }
    (*DAT_100a5000)(uVar4,uStack_c,uStack_10,uStack_14);
    (*DAT_100a500c)(0,iVar6,iVar5,*(int *)(param_1 + 0x14) * 0x10 + DAT_100a3ab4);
  }
  iStack_8 = 3;
  piVar3 = (int *)(param_1 + 0x24);
  do {
    if (-1 < *piVar3) {
      bVar2 = FUN_1001eb60(*piVar3,1);
      iVar6 = iVar6 + (-(CONCAT31(extraout_var,bVar2) * iVar7) - iVar7 / 2);
      FUN_1001e950(&DAT_100a3a40,iVar6,iVar5,1,*piVar3,uStack_c,uStack_10,uStack_14);
      if (iStack_8 != 0) {
        iVar6 = iVar6 - iVar7 / 2;
        (*DAT_100a501c)(iVar6,iVar5,iVar7 / 10,DAT_100a3aa8,uStack_c,uStack_10,uStack_14,uStack_4);
      }
    }
    piVar3 = piVar3 + -1;
    iStack_8 = iStack_8 + -1;
  } while (-1 < iStack_8);
  return 1;
}

