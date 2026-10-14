
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CApache::HuntThink(void) */

void __thiscall CApache::HuntThink(CApache *this)

{
  CApache *pCVar1;
  CApache *pCVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined3 extraout_var_00;
  float *pfVar10;
  float unaff_EBX;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_40 [20];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
                    /* 0x9fc0  122  ?HuntThink@CApache@@AAEXXZ */
  FUN_10007fc0((int)this,0.0);
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  FUN_1000b9a0((int)this);
  if ((*(int *)(this + 8) == 0) && (*(int *)(*(int *)(this + 4) + 0x1c8) != 0)) {
    iVar5 = FUN_100af030(0,(byte *)((int)DAT_10122044[0x26] + *(int *)(*(int *)(this + 4) + 0x1c8)))
    ;
    *(int *)(this + 8) = iVar5;
    if (iVar5 != 0) {
      iVar3 = *(int *)(iVar5 + 4);
      *(undefined4 *)(this + 0x338) = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(this + 0x33c) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(this + 0x340) = *(undefined4 *)(iVar3 + 0x10);
      FUN_100af210((float *)(*(int *)(iVar5 + 4) + 0x50));
      pfVar10 = DAT_10122044;
      *(float *)(this + 0x344) = DAT_10122044[10];
      *(float *)(this + 0x348) = pfVar10[0xb];
      *(float *)(this + 0x34c) = pfVar10[0xc];
    }
  }
  (**(code **)(*(int *)this + 0x11c))(0xffc);
  pCVar1 = this + 0x160;
  iVar5 = (**(code **)(*(int *)this + 0x144))();
  FUN_10019420(pCVar1,iVar5);
  if (*(float *)(this + 0x374) < _DAT_100de4b4) {
    *(float *)(this + 0x374) = *(float *)(this + 0x374) + _DAT_100dd5d8;
  }
  bVar4 = FUN_10019450((uint *)pCVar1);
  if (CONCAT31(extraout_var,bVar4) != 0) {
    iVar5 = *(int *)this;
    uVar6 = FUN_10019410((uint *)pCVar1);
    iVar5 = (**(code **)(iVar5 + 0x110))(uVar6);
    if (iVar5 == 0) {
      FUN_10019420(pCVar1,0);
    }
    else {
      if (*(float *)(this + 0x35c) < *DAT_10122044 - _DAT_100dd5d8) {
        *(float *)(this + 0x360) = *DAT_10122044;
      }
      *(float *)(this + 0x35c) = *DAT_10122044;
      piVar7 = (int *)FUN_10019460((uint *)pCVar1);
      puVar8 = (undefined4 *)(**(code **)(*piVar7 + 0xf8))(&fStack_4c);
      *(undefined4 *)(this + 800) = *puVar8;
      *(undefined4 *)(this + 0x324) = puVar8[1];
      *(undefined4 *)(this + 0x328) = puVar8[2];
    }
  }
  iVar5 = *(int *)(this + 4);
  pCVar1 = this + 800;
  fVar15 = *(float *)pCVar1 - *(float *)(iVar5 + 8);
  fStack_60 = *(float *)(this + 0x324) - *(float *)(iVar5 + 0xc);
  fStack_5c = *(float *)(this + 0x328) - *(float *)(iVar5 + 0x10);
  fVar12 = SQRT(fStack_60 * fStack_60 + fStack_5c * fStack_5c + fVar15 * fVar15);
  if (fVar12 == _DAT_100dd5f8) {
    fVar14 = 1.0;
    fVar13 = 0.0;
    fVar12 = 0.0;
  }
  else {
    fVar12 = _DAT_100dd618 / fVar12;
    fVar14 = fStack_5c * fVar12;
    fVar13 = fStack_60 * fVar12;
    fVar12 = fVar12 * fVar15;
  }
  FUN_10001d60(&fStack_58,fVar12,fVar13,fVar14);
  pCVar2 = this + 0x338;
  *(float *)(this + 0x314) = fStack_58;
  *(float *)(this + 0x318) = fStack_54;
  *(float *)(this + 0x31c) = fStack_50;
  iVar5 = *(int *)(this + 4);
  fVar15 = *(float *)(iVar5 + 8) - *(float *)pCVar2;
  fVar12 = *(float *)(iVar5 + 0xc) - *(float *)(this + 0x33c);
  fVar14 = *(float *)(iVar5 + 0x10) - *(float *)(this + 0x340);
  fVar15 = SQRT(fVar12 * fVar12 + fVar14 * fVar14 + fVar15 * fVar15);
  if (*(int *)(this + 8) == 0) {
    *(float *)pCVar2 = *(float *)(iVar5 + 8);
    *(undefined4 *)(this + 0x33c) = *(undefined4 *)(iVar5 + 0xc);
    *(undefined4 *)(this + 0x340) = *(undefined4 *)(iVar5 + 0x10);
  }
  else if (fVar15 < _DAT_100ddaf4) {
    iVar5 = FUN_100af030(0,(byte *)(*(int *)(*(int *)(*(int *)(this + 8) + 4) + 0x1c8) +
                                   (int)DAT_10122044[0x26]));
    *(int *)(this + 8) = iVar5;
    if (iVar5 != 0) {
      iVar3 = *(int *)(iVar5 + 4);
      *(float *)pCVar2 = *(float *)(iVar3 + 8);
      *(undefined4 *)(this + 0x33c) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(this + 0x340) = *(undefined4 *)(iVar3 + 0x10);
      FUN_100af210((float *)(*(int *)(iVar5 + 4) + 0x50));
      pfVar10 = DAT_10122044;
      *(float *)(this + 0x344) = DAT_10122044[10];
      *(float *)(this + 0x348) = pfVar10[0xb];
      iVar5 = *(int *)(this + 4);
      *(float *)(this + 0x34c) = pfVar10[0xc];
      fVar15 = *(float *)(iVar5 + 8) - *(float *)pCVar2;
      fVar14 = *(float *)(iVar5 + 0xc) - *(float *)(this + 0x33c);
      fVar12 = *(float *)(iVar5 + 0x10) - *(float *)(this + 0x340);
      fVar15 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar15 * fVar15);
    }
  }
  if (fVar15 <= _DAT_100dd640) {
    *(undefined4 *)(this + 0x32c) = *(undefined4 *)(this + 0x344);
    *(undefined4 *)(this + 0x330) = *(undefined4 *)(this + 0x348);
    *(undefined4 *)(this + 0x334) = *(undefined4 *)(this + 0x34c);
  }
  else {
    if (*DAT_10122044 < *(float *)(this + 0x35c) + _DAT_100de4b0) {
      iVar5 = *(int *)(this + 4);
      fVar15 = *(float *)pCVar2 - *(float *)(iVar5 + 8);
      fStack_60 = *(float *)(this + 0x33c) - *(float *)(iVar5 + 0xc);
      fStack_5c = *(float *)(this + 0x340) - *(float *)(iVar5 + 0x10);
      fVar12 = SQRT(fStack_60 * fStack_60 + fStack_5c * fStack_5c + fVar15 * fVar15);
      if (fVar12 == _DAT_100dd5f8) {
        fVar14 = 1.0;
        fVar13 = 0.0;
        fVar12 = 0.0;
      }
      else {
        fVar12 = _DAT_100dd618 / fVar12;
        fVar14 = fStack_5c * fVar12;
        fVar13 = fStack_60 * fVar12;
        fVar12 = fVar12 * fVar15;
      }
      FUN_10001d60(&fStack_58,fVar12,fVar13,fVar14);
      iVar5 = *(int *)(this + 4);
      fVar15 = *(float *)pCVar1 - *(float *)(iVar5 + 8);
      fStack_60 = *(float *)(this + 0x324) - *(float *)(iVar5 + 0xc);
      fStack_5c = *(float *)(this + 0x328) - *(float *)(iVar5 + 0x10);
      fVar12 = SQRT(fStack_60 * fStack_60 + fStack_5c * fStack_5c + fVar15 * fVar15);
      if (fVar12 == _DAT_100dd5f8) {
        fVar14 = 1.0;
        fVar13 = 0.0;
        fVar12 = 0.0;
      }
      else {
        fVar12 = _DAT_100dd618 / fVar12;
        fVar14 = fStack_5c * fVar12;
        fVar13 = fStack_60 * fVar12;
        fVar12 = fVar12 * fVar15;
      }
      FUN_10001d60(&fStack_4c,fVar12,fVar13,fVar14);
      if ((float)_DAT_100dd5f0 <
          fStack_50 * fStack_44 + fStack_54 * fStack_48 + fStack_58 * fStack_4c) {
        iVar5 = *(int *)(this + 4);
        fVar15 = *(float *)pCVar1 - *(float *)(iVar5 + 8);
        fStack_60 = *(float *)(this + 0x324) - *(float *)(iVar5 + 0xc);
        fStack_5c = *(float *)(this + 0x328) - *(float *)(iVar5 + 0x10);
        fVar12 = SQRT(fStack_60 * fStack_60 + fStack_5c * fStack_5c + fVar15 * fVar15);
        if (fVar12 == _DAT_100dd5f8) {
          fVar14 = 1.0;
          fVar13 = 0.0;
          fVar12 = 0.0;
        }
        else {
          fVar12 = _DAT_100dd618 / fVar12;
          fVar14 = fStack_5c * fVar12;
          fVar13 = fStack_60 * fVar12;
          fVar12 = fVar12 * fVar15;
        }
        FUN_10001d60(&fStack_4c,fVar12,fVar13,fVar14);
        *(float *)(this + 0x32c) = fStack_4c;
        *(float *)(this + 0x330) = fStack_48;
        *(float *)(this + 0x334) = fStack_44;
        goto LAB_1000a5b0;
      }
    }
    iVar5 = *(int *)(this + 4);
    fStack_5c = *(float *)(this + 0x340) - *(float *)(iVar5 + 0x10);
    fStack_60 = *(float *)(this + 0x33c) - *(float *)(iVar5 + 0xc);
    fStack_64 = *(float *)pCVar2 - *(float *)(iVar5 + 8);
    fVar11 = FUN_1000a9b0(&fStack_64);
    if (fVar11 == (float10)_DAT_100dd5f8) {
      fStack_58 = 0.0;
      fStack_54 = 0.0;
      fStack_50 = 1.0;
    }
    else {
      fVar11 = (float10)_DAT_100dd618 / fVar11;
      FUN_10001d60(&fStack_58,(float)(fVar11 * (float10)fStack_64),
                   (float)((float10)fStack_60 * fVar11),(float)((float10)fStack_5c * fVar11));
    }
    *(float *)(this + 0x32c) = fStack_58;
    *(float *)(this + 0x330) = fStack_54;
    *(float *)(this + 0x334) = fStack_50;
  }
LAB_1000a5b0:
  FUN_1000a9e0((int)this);
  if ((*DAT_10122044 < *(float *)(this + 0x35c) + _DAT_100dd618) &&
     (*(float *)(this + 0x360) + _DAT_100de4ac < *DAT_10122044)) {
    iVar5 = FUN_1000b580(this);
    if ((iVar5 != 0) && (_DAT_100de4a8 < *(float *)(this + 0x374))) {
      *(undefined4 *)(this + 0x374) = 0x43c80000;
    }
    if (DAT_10121df0 == 1) {
      *(float *)(this + 0x310) = *DAT_10122044 + (float)_DAT_100de4a0;
    }
  }
  FUN_100af210((float *)(*(int *)(this + 4) + 0x50));
  FUN_10001d60(&fStack_58,DAT_10122044[10] * _DAT_100de4b4,DAT_10122044[0xb] * _DAT_100de4b4,
               DAT_10122044[0xc] * _DAT_100de4b4);
  iVar5 = *(int *)(this + 4);
  FUN_10001d60(&fStack_4c,fStack_58 + *(float *)(iVar5 + 0x20),fStack_54 + *(float *)(iVar5 + 0x24),
               fStack_50 + *(float *)(iVar5 + 0x28));
  fVar11 = FUN_1000a9b0(&fStack_4c);
  if (fVar11 == (float10)_DAT_100dd5f8) {
    fVar15 = 1.0;
    fVar12 = 0.0;
    fVar14 = 0.0;
  }
  else {
    fVar11 = (float10)_DAT_100dd618 / fVar11;
    fVar15 = (float)((float10)fStack_44 * fVar11);
    fVar12 = (float)((float10)fStack_48 * fVar11);
    fVar14 = (float)((float10)fStack_4c * fVar11);
  }
  FUN_10001d60(&stack0xffffff90,fVar14,fVar12,fVar15);
  uVar9 = *(uint *)(this + 0x308) & 0x80000001;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
  }
  if (uVar9 == 1) {
    FUN_1000b0c0((int)this);
    *(float *)(this + 0x310) = *DAT_10122044 + (float)_DAT_100dd648;
    if (*(int *)(this + 0x308) < 1) {
      fVar15 = *DAT_10122044 + _DAT_100dd63c;
      *(undefined4 *)(this + 0x308) = 10;
      *(float *)(this + 0x310) = fVar15;
      return;
    }
  }
  else {
    iVar5 = *(int *)(this + 4);
    if ((((*(float *)(iVar5 + 0x50) < _DAT_100dd5f8) &&
         (_DAT_100de49c <
          *(float *)(iVar5 + 0x20) * DAT_10122044[10] +
          *(float *)(iVar5 + 0x24) * DAT_10122044[0xb] +
          *(float *)(iVar5 + 0x28) * DAT_10122044[0xc])) &&
        (*(float *)(this + 0x310) < *DAT_10122044)) &&
       (*DAT_10122044 < *(float *)(this + 0x35c) + _DAT_100de498)) {
      bVar4 = FUN_10019450((uint *)(this + 0x160));
      if (CONCAT31(extraout_var_00,bVar4) == 0) {
        uVar6 = *(undefined4 *)(*(int *)(this + 4) + 0x208);
        FUN_10001d60(&fStack_4c,unaff_EBX * _DAT_100de488,fStack_6c * _DAT_100de488,
                     fStack_68 * _DAT_100de488);
        iVar5 = *(int *)(this + 4);
        FUN_10001d60(&fStack_58,fStack_4c + *(float *)(iVar5 + 8),
                     fStack_48 + *(float *)(iVar5 + 0xc),fStack_44 + *(float *)(iVar5 + 0x10));
        FUN_100afc60(*(int *)(this + 4) + 8,&fStack_58,0,uVar6,auStack_40);
        pfVar10 = (float *)FUN_10002250(&fStack_2c,&fStack_4c,(float *)pCVar1);
        fVar11 = FUN_1000a9b0(pfVar10);
        if (fVar11 < (float10)_DAT_100de47c) {
          FUN_1000b0c0((int)this);
        }
      }
      else if ((float)_DAT_100de490 <
               unaff_EBX * *(float *)(this + 0x314) +
               fStack_6c * *(float *)(this + 0x318) + fStack_68 * *(float *)(this + 0x31c)) {
        uVar6 = *(undefined4 *)(*(int *)(this + 4) + 0x208);
        FUN_10001d60(&fStack_4c,unaff_EBX * _DAT_100de488,fStack_6c * _DAT_100de488,
                     fStack_68 * _DAT_100de488);
        iVar5 = *(int *)(this + 4);
        FUN_10001d60(&fStack_58,fStack_4c + *(float *)(iVar5 + 8),
                     fStack_48 + *(float *)(iVar5 + 0xc),fStack_44 + *(float *)(iVar5 + 0x10));
        FUN_100afc60(*(int *)(this + 4) + 8,&fStack_58,1,uVar6,auStack_40);
        FUN_10001d60(&fStack_58,fStack_2c - *(float *)pCVar1,fStack_28 - *(float *)(this + 0x324),
                     fStack_24 - *(float *)(this + 0x328));
        if (SQRT(fStack_58 * fStack_58 + fStack_54 * fStack_54 + fStack_50 * fStack_50) <
            _DAT_100de47c) {
          FUN_1000b0c0((int)this);
          return;
        }
      }
    }
  }
  return;
}

