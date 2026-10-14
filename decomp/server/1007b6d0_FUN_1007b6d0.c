
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_1007b6d0(int *param_1,float param_2,uint param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float unaff_EBX;
  float unaff_EBP;
  longlong lVar9;
  char *pcVar10;
  uint uVar11;
  int iStack_4;
  
  bVar3 = true;
  iStack_4 = 0x3f000000;
  if (((param_5 & 0x40) != 0) && (iVar6 = (**(code **)(*DAT_10121db8 + 0x18))(), iVar6 != 0)) {
    iStack_4 = 0x3f800000;
  }
  iVar6 = (**(code **)(*param_1 + 0xb8))();
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = *(int *)(param_3 + 0x208);
  if ((iVar6 == 0) && (iVar6 = (*DAT_10121f1c)(0), iVar6 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(iVar6 + 0x7c);
  }
  iVar6 = (**(code **)(*DAT_10121db8 + 0x40))(param_1,uVar7);
  if (iVar6 == 0) {
    return 0;
  }
  lVar9 = __ftol();
  iVar6 = param_1[1];
  param_1[0x126] = (int)lVar9;
  if ((*(float *)(iVar6 + 0x1bc) != _DAT_100dd5f8) && ((param_3 & 0x4020) == 0)) {
    fVar4 = (param_2 - param_2 * _DAT_100e1140) * unaff_EBX;
    if (fVar4 <= *(float *)(iVar6 + 0x1bc)) {
      *(float *)(iVar6 + 0x1bc) = *(float *)(iVar6 + 0x1bc) - fVar4;
    }
    else {
      *(undefined4 *)(iVar6 + 0x1bc) = 0;
    }
  }
  uVar11 = param_3;
  lVar9 = __ftol();
  iVar6 = FUN_1001f350(param_1,iStack_4,param_3,(float)(int)lVar9,uVar11);
  iVar8 = 0;
  do {
    if ((param_3 & 0x8000 << ((byte)iVar8 & 0x1f)) != 0) {
      *(undefined1 *)(iVar8 + 0x2c4 + (int)param_1) = 0;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 8);
  (*DAT_10121ec0)(9,0x32,0,0);
  (*DAT_10121ec8)(3);
  uVar7 = (*DAT_10121f24)(*(undefined4 *)(param_1[1] + 0x208));
  (*DAT_10121ed0)(uVar7);
  uVar7 = (*DAT_10121f24)(*(undefined4 *)(iStack_4 + 0x208));
  (*DAT_10121ed0)(uVar7);
  (*DAT_10121ed4)(5);
  (*DAT_10121ec4)();
  if ((_DAT_100e45b4 < *(float *)(param_1[1] + 0x160)) || (bVar5 = false, param_1[0x126] < 5)) {
    bVar5 = true;
  }
  bVar2 = _DAT_100de4f8 <= *(float *)(param_1[1] + 0x160);
  bVar1 = param_1[0x126] < 0x1a;
  param_1[0xb0] = param_1[0xb0] | param_3;
  param_1[0x132] = -1;
  if (iVar6 != 0) {
    while ((((!bVar5 || ((param_5 & 0xffffc000) != 0)) && (bVar3)) && (param_5 != 0))) {
      bVar3 = false;
      if ((param_5 & 0x80) != 0) {
        if (!bVar1) {
          FUN_1007e210(param_1,(byte *)s__HEV_DMG4_10114dac,0,0x1e);
        }
        param_5 = param_5 & 0xffffff7f;
        bVar3 = true;
      }
      if ((param_5 & 0x21) != 0) {
        if (bVar1) {
          pcVar10 = s__HEV_DMG4_10114dac;
        }
        else {
          pcVar10 = s__HEV_DMG5_10114da0;
        }
        FUN_1007e210(param_1,(byte *)pcVar10,0,0x1e);
        param_5 = param_5 & 0xffffffde;
        bVar3 = true;
      }
      if ((param_5 & 2) != 0) {
        if (5 < param_1[0x126]) {
          FUN_1007e210(param_1,(byte *)s__HEV_DMG6_10114d94,0,0x1e);
        }
        param_5 = param_5 & 0xfffffffd;
        bVar3 = true;
      }
      if ((param_5 & 4) != 0) {
        if (bVar1) {
          pcVar10 = s__HEV_DMG0_10114d7c;
        }
        else {
          pcVar10 = s__HEV_DMG1_10114d88;
        }
        FUN_1007e210(param_1,(byte *)pcVar10,0,0x1e);
        param_5 = param_5 & 0xfffffffb;
        bVar3 = true;
      }
      if ((param_5 & 0x200) != 0) {
        if (!bVar1) {
          FUN_1007e210(param_1,(byte *)s__HEV_DMG2_10114d70,0,0x3c);
        }
        param_5 = param_5 & 0xfffffdff;
        bVar3 = true;
      }
      if ((param_5 & 0x28000) != 0) {
        FUN_1007e210(param_1,(byte *)s__HEV_DMG3_10114d64,0,0x3c);
        param_5 = param_5 & 0xfffd7fff;
        bVar3 = true;
      }
      if ((param_5 & 0x100000) != 0) {
        FUN_1007e210(param_1,(byte *)s__HEV_DET1_10114d58,0,0x3c);
        param_5 = param_5 & 0xffefffff;
        bVar3 = true;
      }
      if ((param_5 & 0x10000) != 0) {
        FUN_1007e210(param_1,(byte *)s__HEV_DET0_10114d4c,0,0x3c);
        param_5 = param_5 & 0xfffeffff;
        bVar3 = true;
      }
      if ((param_5 & 0x40000) != 0) {
        FUN_1007e210(param_1,(byte *)s__HEV_DET2_10114d40,0,0x3c);
        param_5 = param_5 & 0xfffbffff;
        bVar3 = true;
      }
      if ((param_5 & 0x100) != 0) {
        param_5 = param_5 & 0xfffffeff;
        bVar3 = true;
      }
    }
  }
  *(undefined4 *)(param_1[1] + 0x68) = 0xc0000000;
  if (iVar6 == 0) {
    return 0;
  }
  if (bVar5) goto LAB_1007bb9d;
  if ((!bVar1) && (_DAT_100e45b4 <= unaff_EBP)) {
    FUN_1007e210(param_1,(byte *)s__HEV_MED1_10114d34,0,0x708);
    FUN_1007e210(param_1,(byte *)s__HEV_HEAL7_10114d28,0,0x708);
  }
  if ((bVar2) || (_DAT_100e45b4 <= unaff_EBP)) goto LAB_1007bb9d;
  if (_DAT_100dd620 <= *(float *)(param_1[1] + 0x160)) {
    if (*(float *)(param_1[1] + 0x160) < _DAT_100ddacc) {
      pcVar10 = s__HEV_HLTH2_10114d10;
      goto LAB_1007bb61;
    }
  }
  else {
    pcVar10 = s__HEV_HLTH3_10114d1c;
LAB_1007bb61:
    FUN_1007e210(param_1,(byte *)pcVar10,0,600);
  }
  iVar8 = (*DAT_10121f70)(0,3);
  if ((iVar8 == 0) && (unaff_EBP < _DAT_100ddaf8)) {
    FUN_1007e210(param_1,(byte *)s__HEV_DMG7_10114d04,0,300);
  }
LAB_1007bb9d:
  if (((param_3 & 0xffffc000) != 0) && (unaff_EBP < _DAT_100e45b4)) {
    if (_DAT_100ddaf8 <= unaff_EBP) {
      iVar8 = 600;
      pcVar10 = s__HEV_HLTH1_10114cf8;
    }
    else {
      iVar8 = (*DAT_10121f70)(0,3);
      if (iVar8 != 0) {
        return iVar6;
      }
      iVar8 = 300;
      pcVar10 = s__HEV_DMG7_10114d04;
    }
    FUN_1007e210(param_1,(byte *)pcVar10,0,iVar8);
  }
  return iVar6;
}

