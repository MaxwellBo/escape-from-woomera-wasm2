
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10077820(CFuncTrackTrain *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  char *pcVar13;
  float fVar14;
  undefined8 uVar15;
  double dVar16;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(float *)(*(int *)(param_1 + 4) + 0x1f8) == _DAT_100dd5f8) {
    FUN_100638f0((int)param_1,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
    FUN_10019680((int)param_1);
    uVar15 = CONCAT44(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1cc),
                      s_TRAIN__s___Speed_is_0_10114194);
LAB_100778e4:
    (*DAT_10121efc)(2,uVar15);
    FUN_10077570((int)param_1);
    return;
  }
  if (*(int *)(param_1 + 0xbc) == 0) {
    FUN_100638f0((int)param_1,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
    FUN_10019680((int)param_1);
    uVar15 = CONCAT44(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1cc),
                      s_TRAIN__s___Lost_path_1011417c);
    goto LAB_100778e4;
  }
  FUN_10077660((int)param_1);
  iVar6 = *(int *)(param_1 + 4);
  fStack_24 = *(float *)(iVar6 + 8);
  fStack_20 = *(float *)(iVar6 + 0xc);
  fStack_1c = *(float *)(iVar6 + 0x10) - *(float *)(param_1 + 0xc4);
  iVar4 = FUN_10073a20(*(void **)(param_1 + 0xbc),&fStack_24,
                       *(float *)(iVar6 + 0x1f8) * (float)_DAT_100dfb80,1);
  fStack_1c = fStack_1c + *(float *)(param_1 + 0xc4);
  pfVar5 = (float *)FUN_10002250(&fStack_24,&fStack_c,(float *)(*(int *)(param_1 + 4) + 8));
  FUN_100638f0((int)param_1,*pfVar5 * _DAT_100dd63c,pfVar5[1] * _DAT_100dd63c,
               pfVar5[2] * _DAT_100dd63c);
  iVar6 = *(int *)(param_1 + 4);
  fStack_30 = *(float *)(iVar6 + 8);
  fStack_2c = *(float *)(iVar6 + 0xc);
  fStack_28 = *(float *)(iVar6 + 0x10) - *(float *)(param_1 + 0xc4);
  fVar14 = *(float *)(param_1 + 0xc0);
  if (fVar14 <= _DAT_100dd5f8) {
    fVar14 = 100.0;
  }
  FUN_10073a20(*(void **)(param_1 + 0xbc),&fStack_30,fVar14,0);
  fStack_28 = fStack_28 + *(float *)(param_1 + 0xc4);
  iVar6 = *(int *)(param_1 + 4);
  if ((*(uint *)(iVar6 + 0x1a0) & 0x800000) == 0) {
    fStack_4 = fStack_28 - *(float *)(iVar6 + 0x10);
    fStack_8 = fStack_2c - *(float *)(iVar6 + 0xc);
    fStack_c = fStack_30 - *(float *)(iVar6 + 8);
    FUN_100ae830(&fStack_3c,&fStack_c);
    fStack_38 = fStack_38 + _DAT_100ddaec;
    FUN_100761b0(&fStack_3c);
    FUN_100761b0((float *)(*(int *)(param_1 + 4) + 0x50));
    if ((iVar4 == 0) || ((fStack_c == _DAT_100dd5f8 && (fStack_8 == _DAT_100dd5f8)))) {
      iVar6 = *(int *)(param_1 + 4);
      fStack_3c = *(float *)(iVar6 + 0x50);
      fStack_38 = *(float *)(iVar6 + 0x54);
      fStack_34 = *(float *)(iVar6 + 0x58);
    }
    if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) == 0) {
      fVar8 = (float10)FUN_100aff60(fStack_3c,*(float *)(*(int *)(param_1 + 4) + 0x50));
      fStack_44 = (float)(fVar8 * (float10)_DAT_100dd63c);
    }
    else {
      fStack_44 = *(float *)(param_1 + 0x10c);
    }
    if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 0x10) == 0) {
      fVar8 = (float10)FUN_100aff60(fStack_38,*(float *)(*(int *)(param_1 + 4) + 0x54));
      fStack_40 = (float)(fVar8 * (float10)_DAT_100dd63c);
    }
    else {
      fStack_40 = *(float *)(param_1 + 0x110);
    }
    if (*(float *)(param_1 + 0xf8) == _DAT_100dd5f8) {
      fVar8 = (float10)*(float *)(param_1 + 0x114);
    }
    else {
      iVar6 = *(int *)(param_1 + 4);
      if (_DAT_100ee140 <= *(float *)(iVar6 + 0x60)) {
        fVar14 = *(float *)(iVar6 + 0x58);
        if (*(float *)(iVar6 + 0x60) <= _DAT_100dd5d8) {
          fVar8 = FUN_100afec0(0.0,fVar14,*(float *)(param_1 + 0xf8) * _DAT_100de4fc);
          fVar8 = (float10)FUN_100aff60((float)fVar8,fVar14);
          fVar8 = fVar8 * (float10)_DAT_100de4fc;
          goto LAB_10077be0;
        }
        fVar12 = *(float *)(param_1 + 0xf8);
        fVar11 = fVar12 + fVar12;
      }
      else {
        fVar14 = *(float *)(iVar6 + 0x58);
        fVar11 = *(float *)(param_1 + 0xf8) + *(float *)(param_1 + 0xf8);
        fVar12 = -*(float *)(param_1 + 0xf8);
      }
      fVar8 = FUN_100afec0(fVar12,fVar14,fVar11);
      fVar8 = (float10)FUN_100aff60((float)fVar8,fVar14);
    }
LAB_10077be0:
    FUN_10063ac0((int)param_1,fStack_44,fStack_40,(float)fVar8);
  }
  if (iVar4 == 0) {
    FUN_10077570((int)param_1);
    iVar6 = *(int *)(param_1 + 4);
    fStack_3c = fStack_24 - *(float *)(iVar6 + 8);
    fStack_38 = fStack_20 - *(float *)(iVar6 + 0xc);
    fStack_34 = fStack_1c - *(float *)(iVar6 + 0x10);
    if ((*(uint *)(iVar6 + 0x1a0) & 0x800000) == 0) {
      FUN_10063ac0((int)param_1,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
    }
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = 0;
    fVar14 = SQRT(fStack_3c * fStack_3c + fStack_38 * fStack_38 + fStack_34 * fStack_34);
    if (fVar14 <= _DAT_100dd5f8) {
      FUN_100638f0((int)param_1,fStack_3c,fStack_38,fStack_34);
      CFuncTrackTrain::DeadEnd(param_1);
      return;
    }
    fVar12 = *(float *)(param_1 + 0xfc);
    fVar11 = *(float *)(param_1 + 0xfc) / fVar14;
    FUN_100638f0((int)param_1,fVar11 * fStack_3c,fStack_38 * fVar11,fStack_34 * fVar11);
    *(code **)(param_1 + 0x74) = CFuncTrackTrain::DeadEnd;
    FUN_10077160(param_1,fVar14 / fVar12,0);
    return;
  }
  if (iVar4 == *(int *)(param_1 + 0xbc)) goto LAB_100781b4;
  iVar6 = *(int *)(param_1 + 0xbc);
  if (_DAT_100dd5f8 <= *(float *)(*(int *)(param_1 + 4) + 0x1f8)) {
    iVar6 = iVar4;
  }
  *(int *)(param_1 + 0xbc) = iVar4;
  iVar4 = *(int *)(*(int *)(iVar6 + 4) + 0x1d4);
  if (iVar4 != 0) {
    FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + iVar4),(int *)param_1,param_1,3,0);
    if ((*(byte *)(*(int *)(iVar6 + 4) + 0x1a0) & 2) != 0) {
      *(undefined4 *)(*(int *)(iVar6 + 4) + 0x1d4) = 0;
    }
  }
  if ((*(byte *)(*(int *)(iVar6 + 4) + 0x1a0) & 8) != 0) {
    *(uint *)(*(int *)(param_1 + 4) + 0x1a0) = *(uint *)(*(int *)(param_1 + 4) + 0x1a0) | 2;
  }
  iVar4 = *(int *)(iVar6 + 4);
  if ((*(int *)(iVar4 + 0x1bc) == 0x3f800000) &&
     ((*(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0x800000) != 0)) {
    fStack_8 = *(float *)(iVar4 + 0x54) - _DAT_100ddaec;
    fStack_4 = *(float *)(iVar4 + 0x58);
    FUN_100635b0((int)param_1);
  }
  iVar4 = *(int *)(param_1 + 4);
  uVar9 = __ftol();
  lVar10 = __ftol();
  iVar1 = *(int *)(iVar6 + 4);
  fVar14 = (float)(int)((longlong)
                        ((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff) /
                       (longlong)(int)lVar10) * (float)_DAT_100dd5f0;
  if (*(int *)(iVar1 + 0x164) == 0x40000000) {
    *(uint *)(iVar4 + 0x1a0) = *(uint *)(iVar4 + 0x1a0) & 0xff3fffff;
  }
  else if ((*(uint *)(iVar1 + 0x1a0) & 0x80000) != 0) {
    if (*(int *)(iVar1 + 0x164) == 0x3f800000) {
      *(float *)(param_1 + 0x100) = *(float *)(iVar1 + 0x5c);
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(iVar1 + 0x60);
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(iVar1 + 100);
      FUN_10063ac0((int)param_1,fVar14 * *(float *)(param_1 + 0x100),
                   fVar14 * *(float *)(param_1 + 0x104),fVar14 * *(float *)(param_1 + 0x108));
      iVar4 = *(int *)(param_1 + 4);
      uVar7 = *(uint *)(iVar4 + 0x1a0) | 0xc00000;
    }
    else {
      if (*(float *)(iVar1 + 0x164) != _DAT_100dd5f8) goto LAB_10077df9;
      FUN_10063ac0((int)param_1,*(float *)(iVar1 + 0x5c),*(float *)(iVar1 + 0x60),
                   *(float *)(iVar1 + 100));
      *(uint *)(*(int *)(param_1 + 4) + 0x1a0) = *(uint *)(*(int *)(param_1 + 4) + 0x1a0) | 0x800000
      ;
      iVar4 = *(int *)(param_1 + 4);
      uVar7 = *(uint *)(iVar4 + 0x1a0) & 0xffbfffff;
    }
    *(uint *)(iVar4 + 0x1a0) = uVar7;
  }
LAB_10077df9:
  if (*(float *)(*(int *)(param_1 + 4) + 0x1f8) <= _DAT_100dd5f8) {
    iVar4 = FUN_10073980(iVar6);
  }
  else {
    iVar4 = FUN_10073950(iVar6);
  }
  iVar6 = *(int *)(iVar6 + 4);
  if (*(float *)(iVar6 + 0x1f8) != _DAT_100dd5f8) {
    lVar10 = __ftol();
    switch((int)lVar10) {
    case 0:
      if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = *(undefined4 *)(iVar6 + 0x1f8);
      }
      dVar16 = (double)*(float *)(*(int *)(param_1 + 4) + 0x1f8);
      iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98);
      pcVar13 = s_TrackTrain__s_speed_set_to__4_2f_10114158;
      break;
    case 1:
      *(float *)(param_1 + 200) = *(float *)(iVar6 + 0x1f8) + *(float *)(param_1 + 200);
      lVar10 = __ftol();
      *(int *)(*(int *)(param_1 + 4) + 0x184) = (int)lVar10;
      *(float *)(*(int *)(param_1 + 4) + 0x1f8) = fVar14 * *(float *)(param_1 + 200);
      dVar16 = (double)*(float *)(*(int *)(param_1 + 4) + 0x1f8);
      iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98);
      pcVar13 = s_TrackTrain__s_speed_accel_to__4__10114108;
      break;
    case 2:
      iVar1 = *(int *)(iVar4 + 4);
      iVar2 = *(int *)(param_1 + 4);
      fVar12 = *(float *)(iVar2 + 8) - *(float *)(iVar1 + 8);
      fVar3 = *(float *)(iVar2 + 0xc) - *(float *)(iVar1 + 0xc);
      fVar11 = *(float *)(iVar2 + 0x10) - *(float *)(iVar1 + 0x10);
      *(float *)(param_1 + 200) =
           SQRT(fVar12 * fVar12 + fVar3 * fVar3 + fVar11 * fVar11) / *(float *)(iVar6 + 0x1f8);
      lVar10 = __ftol();
      *(int *)(iVar2 + 0x184) = (int)lVar10;
      *(float *)(*(int *)(param_1 + 4) + 0x1f8) = fVar14 * *(float *)(param_1 + 200);
      dVar16 = (double)*(float *)(*(int *)(param_1 + 4) + 0x1f8);
      iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98);
      pcVar13 = s_TrackTrain__s_speed_to__4_2f__ti_101140e0;
      break;
    case 3:
      *(undefined4 *)(param_1 + 200) = *(undefined4 *)(iVar6 + 0x1f8);
      lVar10 = __ftol();
      *(int *)(*(int *)(param_1 + 4) + 0x184) = (int)lVar10;
      *(float *)(*(int *)(param_1 + 4) + 0x1f8) = fVar14 * *(float *)(param_1 + 200);
      dVar16 = (double)*(float *)(*(int *)(param_1 + 4) + 0x1f8);
      iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98);
      pcVar13 = s_TrackTrain__s_master_speed_set_t_1011412c;
      break;
    default:
      goto switchD_10077e4d_default;
    }
    (*DAT_10121efc)(2,pcVar13,iVar6,dVar16);
  }
switchD_10077e4d_default:
  if (*(float *)(*(int *)(iVar4 + 4) + 0x1bc) == _DAT_100dd618) {
    *(uint *)(*(int *)(param_1 + 4) + 0x1a0) = *(uint *)(*(int *)(param_1 + 4) + 0x1a0) | 0xc00000;
    iVar6 = *(int *)(param_1 + 4);
    fStack_18 = *(float *)(iVar6 + 0x50);
    uStack_14 = *(undefined4 *)(iVar6 + 0x54);
    uStack_10 = *(undefined4 *)(iVar6 + 0x58);
    FUN_100761b0(&fStack_18);
    FUN_100635b0((int)param_1);
    iVar6 = *(int *)(iVar4 + 4);
    iVar1 = *(int *)(param_1 + 4);
    fStack_c = *(float *)(iVar6 + 8) - *(float *)(iVar1 + 8);
    fStack_8 = *(float *)(iVar6 + 0xc) - *(float *)(iVar1 + 0xc);
    fStack_4 = *(float *)(iVar6 + 0x10) - *(float *)(iVar1 + 0x10);
    if (fVar14 <= _DAT_100dd5f8) {
      fVar8 = (float10)FUN_100aff60(*(float *)(iVar1 + 0x50),*(float *)(iVar6 + 0x50));
      fStack_3c = (float)fVar8;
      fVar8 = (float10)FUN_100aff60(*(float *)(*(int *)(param_1 + 4) + 0x54),
                                    *(float *)(*(int *)(iVar4 + 4) + 0x54));
      fVar12 = *(float *)(*(int *)(iVar4 + 4) + 0x58);
      fVar11 = *(float *)(*(int *)(param_1 + 4) + 0x58);
    }
    else {
      fVar8 = (float10)FUN_100aff60(*(float *)(iVar6 + 0x50),*(float *)(iVar1 + 0x50));
      fStack_3c = (float)fVar8;
      fVar8 = (float10)FUN_100aff60(*(float *)(*(int *)(iVar4 + 4) + 0x54),
                                    *(float *)(*(int *)(param_1 + 4) + 0x54));
      fVar12 = *(float *)(*(int *)(param_1 + 4) + 0x58);
      fVar11 = *(float *)(*(int *)(iVar4 + 4) + 0x58);
    }
    fStack_38 = (float)fVar8;
    fVar8 = (float10)FUN_100aff60(fVar11,fVar12);
    if (fStack_38 <= _DAT_100dd5f8) {
      fVar12 = fStack_38 + _DAT_100ddaec;
    }
    else {
      fVar12 = fStack_38 - _DAT_100ddaec;
    }
    fVar11 = SQRT(fStack_c * fStack_c + fStack_4 * fStack_4 + fStack_8 * fStack_8) /
             *(float *)(param_1 + 200);
    fStack_c = fStack_3c / fVar11;
    fStack_8 = fVar12 / fVar11;
    *(float *)(param_1 + 0x100) = fStack_c;
    *(float *)(param_1 + 0x104) = fStack_8;
    fStack_4 = (float)(fVar8 / (float10)fVar11);
    *(float *)(param_1 + 0x108) = fStack_4;
    FUN_10063ac0((int)param_1,fVar14 * *(float *)(param_1 + 0x100),
                 fVar14 * *(float *)(param_1 + 0x104),fVar14 * *(float *)(param_1 + 0x108));
  }
LAB_100781b4:
  *(code **)(param_1 + 0x74) = CFuncTrackTrain::PostponeNext;
  FUN_10077160(param_1,0x3f000000,1);
  return;
}

