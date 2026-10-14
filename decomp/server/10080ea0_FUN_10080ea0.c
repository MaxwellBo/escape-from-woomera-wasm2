
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10080ea0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *this;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  longlong lVar10;
  undefined4 uStack_18;
  undefined1 auStack_c [12];
  
  if (param_1[0x133] != 0) {
    param_1[0x133] = 0;
    DAT_101144d8 = 0;
    (*DAT_10121ec0)(1,DAT_10124874,0,*(undefined4 *)(param_1[1] + 0x208));
    (*DAT_10121ec8)(0);
    (*DAT_10121ec4)();
    if (param_1[0x134] == 0) {
      (*DAT_10121ec0)(1,DAT_10124878,0,*(undefined4 *)(param_1[1] + 0x208));
      (*DAT_10121ec4)();
      (**(code **)(*DAT_10121db8 + 0x30))(param_1);
      param_1[0x134] = 1;
      iVar3 = (**(code **)(*DAT_10121db8 + 0x18))();
      if (iVar3 != 0) {
        FUN_10098c10((uint *)s_game_playerjoin_10115108,param_1,param_1,3,0);
      }
    }
    FUN_10098c10((uint *)s_game_playerspawn_101150f4,param_1,param_1,3,0);
  }
  if (param_1[0x140] != param_1[0x141]) {
    (*DAT_10121ec0)(1,DAT_101248d4,0,*(undefined4 *)(param_1[1] + 0x208));
    (*DAT_10121ec8)(param_1[0x140]);
    (*DAT_10121ec4)();
    param_1[0x141] = param_1[0x140];
  }
  if (param_1[0x142] != param_1[0x143]) {
    (*DAT_10121ec0)(1,DAT_101248e4,0,*(undefined4 *)(param_1[1] + 0x208));
    (*DAT_10121ec8)(param_1[0x142]);
    (*DAT_10121ec4)();
  }
  if (DAT_10121dc8 != 0) {
    (*DAT_10121ec0)(1,DAT_10124880,0,*(undefined4 *)(param_1[1] + 0x208));
    (*DAT_10121ec8)(0);
    (*DAT_10121ec4)();
    DAT_10121dc8 = 0;
  }
  iVar3 = param_1[1];
  if ((float)param_1[0x13e] != *(float *)(iVar3 + 0x160)) {
    (*DAT_10121ec0)(1,DAT_10124888,0,*(undefined4 *)(iVar3 + 0x208));
    lVar10 = __ftol();
    (*DAT_10121ec8)((int)lVar10);
    (*DAT_10121ec4)();
    iVar3 = param_1[1];
    lVar10 = __ftol();
    param_1[0x13e] = (int)lVar10;
  }
  if ((float)param_1[0x13f] != *(float *)(iVar3 + 0x1bc)) {
    lVar10 = __ftol();
    param_1[0x13f] = (int)lVar10;
    (*DAT_10121ec0)(1,DAT_10124890,0,*(undefined4 *)(iVar3 + 0x208));
    lVar10 = __ftol();
    (*DAT_10121ed0)((int)lVar10);
    (*DAT_10121ec4)();
  }
  iVar3 = param_1[1];
  if (((*(float *)(iVar3 + 0x1d8) != _DAT_100dd5f8) || (*(float *)(iVar3 + 0x1dc) != _DAT_100dd5f8))
     || (param_1[0x132] != param_1[0xb0])) {
    uStack_18 = *(undefined4 *)(iVar3 + 8);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    uVar8 = *(undefined4 *)(iVar3 + 0x10);
    if ((*(int *)(iVar3 + 0x18c) != 0) &&
       (piVar9 = *(int **)(*(int *)(iVar3 + 0x18c) + 0x7c), piVar9 != (int *)0x0)) {
      puVar4 = (undefined4 *)(**(code **)(*piVar9 + 0xf8))(auStack_c);
      uStack_18 = *puVar4;
      uVar6 = puVar4[1];
      uVar8 = puVar4[2];
    }
    uVar5 = param_1[0xb0];
    (*DAT_10121ec0)(1,DAT_1012488c,0,*(undefined4 *)(param_1[1] + 0x208));
    lVar10 = __ftol();
    (*DAT_10121ec8)((int)lVar10);
    lVar10 = __ftol();
    (*DAT_10121ec8)((int)lVar10);
    (*DAT_10121ed4)(uVar5 & 0x774118);
    (*DAT_10121edc)(uStack_18);
    (*DAT_10121edc)(uVar6);
    (*DAT_10121edc)(uVar8);
    (*DAT_10121ec4)();
    *(undefined4 *)(param_1[1] + 0x1d8) = 0;
    *(undefined4 *)(param_1[1] + 0x1dc) = 0;
    param_1[0x132] = param_1[0xb0];
    param_1[0xb0] = param_1[0xb0] & 0xffffc000;
  }
  if (((float)param_1[0xc9] != _DAT_100dd5f8) && ((float)param_1[0xc9] <= *DAT_10122044)) {
    uVar5 = FUN_1007fa20((int)param_1);
    iVar3 = param_1[0xca];
    if (uVar5 == 0) {
      if (iVar3 < 100) {
        fVar1 = *DAT_10122044;
        fVar2 = (float)_DAT_100dd608;
        param_1[0xca] = iVar3 + 1;
        param_1[0xc9] = (int)(fVar1 + fVar2);
      }
      else {
        param_1[0xc9] = 0;
      }
    }
    else if (iVar3 != 0) {
      fVar1 = *DAT_10122044;
      fVar2 = (float)_DAT_100ee940;
      param_1[0xca] = iVar3 + -1;
      param_1[0xc9] = (int)(fVar1 + fVar2);
      if (iVar3 + -1 == 0) {
        FUN_1007fae0((int)param_1);
      }
    }
    (*DAT_10121ec0)(1,DAT_10124870,0,*(undefined4 *)(param_1[1] + 0x208));
    (*DAT_10121ec8)(param_1[0xca]);
    (*DAT_10121ec4)();
  }
  if ((*(byte *)(param_1 + 0x135) & 0xc0) != 0) {
    (*DAT_10121ec0)(1,DAT_10124894,0,*(undefined4 *)(param_1[1] + 0x208));
    (*DAT_10121ec8)(param_1[0x135] & 0xf);
    (*DAT_10121ec4)();
    param_1[0x135] = param_1[0x135] & 0xffffff3f;
  }
  if (param_1[0xd7] == 0) {
    param_1[0xd7] = 1;
    piVar9 = &DAT_10131e30;
    do {
      if (piVar9[2] != 0) {
        pcVar7 = (char *)*piVar9;
        if (pcVar7 == (char *)0x0) {
          pcVar7 = s_Empty_101150ec;
        }
        (*DAT_10121ec0)(1,DAT_101248a0,0,*(undefined4 *)(param_1[1] + 0x208));
        (*DAT_10121ee0)(pcVar7);
        iVar3 = FUN_10080dd0(this,(byte *)piVar9[-4]);
        (*DAT_10121ec8)(iVar3);
        (*DAT_10121ec8)(piVar9[-3]);
        iVar3 = FUN_10080dd0((void *)piVar9[-2],(void *)piVar9[-2]);
        (*DAT_10121ec8)(iVar3);
        (*DAT_10121ec8)(piVar9[-1]);
        (*DAT_10121ec8)(piVar9[-6]);
        (*DAT_10121ec8)(piVar9[-5]);
        (*DAT_10121ec8)(piVar9[2]);
        (*DAT_10121ec8)(piVar9[3]);
        (*DAT_10121ec4)();
      }
      piVar9 = piVar9 + 0xb;
    } while ((int)piVar9 < 0x101323b0);
  }
  FUN_10080e20((int)param_1);
  piVar9 = param_1 + 0x144;
  iVar3 = 6;
  do {
    if ((int *)*piVar9 != (int *)0x0) {
      (**(code **)(*(int *)*piVar9 + 0x158))(param_1);
    }
    piVar9 = piVar9 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x14b] = param_1[0x14a];
  param_1[0x143] = param_1[0x142];
  return;
}

