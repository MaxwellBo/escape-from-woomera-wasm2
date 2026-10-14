
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007ca60(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *extraout_ECX;
  void *pvVar6;
  int iVar7;
  longlong lVar8;
  void *pvVar9;
  char *pcVar10;
  
  pvVar6 = (void *)param_1[1];
  if (*(int *)((int)pvVar6 + 0x108) == 8) {
    return;
  }
  if (*(float *)((int)pvVar6 + 0x160) < _DAT_100dd5f8) {
    return;
  }
  if ((*(int *)((int)pvVar6 + 0x1c0) == 3) && (-0x11 < *(int *)((int)pvVar6 + 0x1c4))) {
    uVar1 = param_1[0xb0];
    *(undefined1 *)(param_1 + 0xb2) = 0;
    param_1[0xb0] = uVar1 & 0xfff7ffff;
    if (*DAT_10122044 <= *(float *)((int)pvVar6 + 0x1fc)) {
      param_1[0xb0] = uVar1 & 0xfff7bfff;
    }
    else if (*(float *)((int)pvVar6 + 0x200) < *DAT_10122044) {
      *(float *)((int)pvVar6 + 0x1e0) = *(float *)((int)pvVar6 + 0x1e0) + _DAT_100dd618;
      if (_DAT_100dd5d8 < *(float *)(param_1[1] + 0x1e0)) {
        *(undefined4 *)(param_1[1] + 0x1e0) = 0x40a00000;
      }
      iVar2 = (*DAT_10121f1c)(0);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + 0x80;
      }
      iVar3 = (*DAT_10121f1c)(0);
      if (iVar3 != 0) {
        iVar3 = iVar3 + 0x80;
      }
      (**(code **)(*param_1 + 0x60))(iVar3,iVar2,*(undefined4 *)(param_1[1] + 0x1e0),0x4000);
      *(float *)(param_1[1] + 0x200) = *DAT_10122044 + _DAT_100dd618;
      lVar8 = __ftol();
      param_1[0x130] = (int)lVar8;
    }
  }
  else {
    if (*DAT_10122044 <= *(float *)((int)pvVar6 + 0x1fc)) {
      if (*(float *)((int)pvVar6 + 0x1fc) < *DAT_10122044 + _DAT_100ee930) {
        uVar4 = *(undefined4 *)((int)pvVar6 + 0x208);
        pcVar10 = s_player_pl_wade2_wav_101059d0;
        goto LAB_1007cc0b;
      }
    }
    else {
      uVar4 = *(undefined4 *)((int)pvVar6 + 0x208);
      pcVar10 = s_player_pl_wade1_wav_101059e4;
LAB_1007cc0b:
      FUN_10094b20(pvVar6,uVar4,2,pcVar10,0x3f800000,0x3f4ccccd,0,100);
    }
    *(float *)(param_1[1] + 0x1fc) = *DAT_10122044 + _DAT_100dd624;
    *(undefined4 *)(param_1[1] + 0x1e0) = 0x40000000;
    if (param_1[0x131] < param_1[0x130]) {
      *(undefined1 *)(param_1 + 0xb2) = 0;
      param_1[0xb0] = param_1[0xb0] & 0xffffbfffU | 0x80000;
    }
  }
  iVar2 = param_1[1];
  if ((*(int *)(iVar2 + 0x1c0) == 0) || (*(int *)(iVar2 + 0x1c4) < -0x10)) {
    if ((*(uint *)(iVar2 + 0x1a4) & 0x10) == 0) {
      return;
    }
    *(uint *)(iVar2 + 0x1a4) = *(uint *)(iVar2 + 0x1a4) & 0xffffffef;
    return;
  }
  lVar8 = __ftol();
  iVar2 = (*DAT_10121f70)(0,0x1f);
  if ((iVar2 != 0) || (iVar2 = (*DAT_10121f70)(0,0xb), iVar2 < (int)lVar8))
  goto switchD_1007ccd2_default;
  uVar4 = (*DAT_10121f70)(0,3);
  switch(uVar4) {
  case 0:
    pcVar10 = s_player_pl_swim1_wav_10105a20;
    goto LAB_1007cd43;
  case 1:
    pvVar6 = *(void **)(param_1[1] + 0x208);
    pcVar10 = s_player_pl_swim2_wav_10101dc8;
    pvVar9 = pvVar6;
    break;
  case 2:
    pcVar10 = s_player_pl_swim3_wav_10105a0c;
    pvVar6 = extraout_ECX;
    pvVar9 = *(void **)(param_1[1] + 0x208);
    break;
  case 3:
    pcVar10 = s_player_pl_swim4_wav_101059f8;
LAB_1007cd43:
    pvVar6 = (void *)param_1[1];
    pvVar9 = *(void **)((int)pvVar6 + 0x208);
    break;
  default:
    goto switchD_1007ccd2_default;
  }
  FUN_10094b20(pvVar6,pvVar9,4,pcVar10,0x3f4ccccd,0x3f4ccccd,0,100);
switchD_1007ccd2_default:
  iVar2 = param_1[1];
  if (*(int *)(iVar2 + 0x1c4) == -5) {
    if (*DAT_10122044 <= *(float *)(iVar2 + 0x1e4)) goto LAB_1007ce3d;
    iVar2 = (*DAT_10121f1c)(0);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + 0x80;
    }
    iVar3 = (*DAT_10121f1c)(0);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + 0x80;
    }
    iVar7 = *param_1;
    uVar4 = 8;
    iVar5 = *(int *)(param_1[1] + 0x1c0) * 10;
  }
  else {
    if (*(int *)(iVar2 + 0x1c4) != -4) goto LAB_1007ce3d;
    *(float *)(iVar2 + 0x1e4) = *DAT_10122044 + _DAT_100dd618;
    iVar2 = (*DAT_10121f1c)(0);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + 0x80;
    }
    iVar3 = (*DAT_10121f1c)(0);
    if (iVar3 != 0) {
      iVar3 = iVar3 + 0x80;
    }
    iVar7 = *param_1;
    uVar4 = 0x100000;
    iVar5 = *(int *)(param_1[1] + 0x1c0) << 2;
  }
  (**(code **)(iVar7 + 0x60))(iVar3,iVar2,(float)iVar5,uVar4);
LAB_1007ce3d:
  uVar1 = *(uint *)(param_1[1] + 0x1a4);
  if ((uVar1 & 0x10) != 0) {
    return;
  }
  *(uint *)(param_1[1] + 0x1a4) = uVar1 | 0x10;
  *(undefined4 *)(param_1[1] + 0x1e4) = 0;
  return;
}

