
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CFuncTrain::Next(void) */

void __thiscall CFuncTrain::Next(CFuncTrain *this)

{
  byte bVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  float10 fVar14;
  longlong lVar15;
  float fVar16;
  float *pfVar17;
  float fVar18;
  CFuncTrain *pCVar19;
  int iVar20;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float afStack_c [3];
  
                    /* 0x75950  157  ?Next@CFuncTrain@@QAEXXZ */
  piVar3 = (int *)(**(code **)(*(int *)this + 0xd8))();
  if (piVar3 == (int *)0x0) {
    *(undefined4 *)(this + 0x170) = 0;
    FUN_100638f0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
    FUN_10063ac0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
    pvVar7 = *(void **)(*(int *)(this + 4) + 0x1e8);
    if (pvVar7 != (void *)0x0) {
      FUN_10094b20(pvVar7,*(undefined4 *)(*(int *)(this + 4) + 0x208),6,
                   (char *)(*(int *)(DAT_10122044 + 0x98) + (int)pvVar7),0,0,0x20,100);
    }
    pvVar7 = *(void **)(*(int *)(this + 4) + 0x1ec);
    if (pvVar7 == (void *)0x0) {
      return;
    }
    FUN_10094b20(pvVar7,*(undefined4 *)(*(int *)(this + 4) + 0x208),2,
                 (char *)(*(int *)(DAT_10122044 + 0x98) + (int)pvVar7),*(undefined4 *)(this + 0x160)
                 ,0x3f4ccccd,0,100);
    return;
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x1d4) = *(undefined4 *)(*(int *)(this + 4) + 0x1c8);
  if (((*(uint *)(*(int *)(this + 4) + 0x1a0) & 0x800000) == 0) || (*(int *)(this + 0x164) == 0)) {
    *(undefined4 *)(*(int *)(this + 4) + 0x1c8) = *(undefined4 *)(piVar3[1] + 0x1c8);
  }
  else {
    for (piVar5 = *(int **)(*(int *)(this + 0x164) + 0xd8); piVar5 != (int *)0x0;
        piVar5 = (int *)(**(code **)(*piVar5 + 0xd8))()) {
      pbVar12 = (byte *)(*(int *)(*(int *)(this + 4) + 0x1c8) + *(int *)(DAT_10122044 + 0x98));
      pbVar11 = (byte *)(*(int *)(piVar5[1] + 0x1c8) + *(int *)(DAT_10122044 + 0x98));
      do {
        bVar1 = *pbVar11;
        bVar13 = bVar1 < *pbVar12;
        if (bVar1 != *pbVar12) {
LAB_10075ac6:
          iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_10075acb;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar13 = bVar1 < pbVar12[1];
        if (bVar1 != pbVar12[1]) goto LAB_10075ac6;
        pbVar11 = pbVar11 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_10075acb:
      if (iVar4 == 0) {
        *(undefined4 *)(*(int *)(this + 4) + 0x1c8) = *(undefined4 *)(piVar5[1] + 0x1cc);
        break;
      }
    }
  }
  fVar14 = (float10)(**(code **)(*piVar3 + 0x94))();
  iVar4 = *(int *)(this + 0x168);
  *(float *)(this + 0xe8) = (float)fVar14;
  if (iVar4 == 0) goto LAB_10075d76;
  if (*(float *)(iVar4 + 0x1f8) != _DAT_100dd5f8) {
    lVar15 = __ftol();
    iVar6 = (int)lVar15;
    if (iVar6 == 0) {
      *(undefined4 *)(*(int *)(this + 4) + 0x1f8) = *(undefined4 *)(iVar4 + 0x1f8);
    }
    else if (iVar6 == 1) {
      *(float *)(*(int *)(this + 4) + 0x1f8) =
           *(float *)(*(int *)(this + 4) + 0x1f8) + *(float *)(iVar4 + 0x1f8);
    }
    else {
      if (iVar6 != 2) goto LAB_10075cf0;
      iVar6 = *(int *)(this + 4);
      if ((*(byte *)(iVar6 + 0x1a0) & 2) == 0) {
        iVar20 = piVar3[1];
        fStack_20 = (*(float *)(iVar6 + 0xec) + *(float *)(iVar6 + 0xe0)) * _DAT_100dd614;
        fStack_1c = (*(float *)(iVar6 + 0xf0) + *(float *)(iVar6 + 0xe4)) * _DAT_100dd614;
        fStack_14 = *(float *)(iVar20 + 0xc) - fStack_20;
        fStack_10 = *(float *)(iVar20 + 0x10) - fStack_1c;
        fVar2 = *(float *)(iVar6 + 8) -
                (*(float *)(iVar20 + 8) -
                (*(float *)(iVar6 + 0xe8) + *(float *)(iVar6 + 0xdc)) * _DAT_100dd614);
        fVar16 = *(float *)(iVar6 + 0xc) - fStack_14;
        fVar18 = *(float *)(iVar6 + 0x10) - fStack_10;
        fVar18 = fVar2 * fVar2 + fVar16 * fVar16 + fVar18 * fVar18;
      }
      else {
        iVar20 = piVar3[1];
        fVar18 = *(float *)(iVar6 + 8) - *(float *)(iVar20 + 8);
        fVar16 = *(float *)(iVar6 + 0xc) - *(float *)(iVar20 + 0xc);
        fVar2 = *(float *)(iVar6 + 0x10) - *(float *)(iVar20 + 0x10);
        fVar18 = fVar16 * fVar16 + fVar2 * fVar2 + fVar18 * fVar18;
      }
      *(float *)(iVar6 + 0x1f8) = SQRT(fVar18) / *(float *)(iVar4 + 0x1f8);
    }
    (*DAT_10121efc)(2);
  }
LAB_10075cf0:
  if ((*(uint *)(*(int *)(this + 0x168) + 0x1a0) & 0x800000) != 0) {
    iVar4 = piVar3[1];
    *(float *)(this + 0x178) = *(float *)(iVar4 + 0x5c);
    *(undefined4 *)(this + 0x17c) = *(undefined4 *)(iVar4 + 0x60);
    *(undefined4 *)(this + 0x180) = *(undefined4 *)(iVar4 + 100);
    FUN_10063ac0((int)this,*(float *)(this + 0x178),*(float *)(this + 0x17c),
                 *(float *)(this + 0x180));
  }
  if (*(float *)(*(int *)(this + 0x168) + 0x1bc) != _DAT_100dd5f8) {
    FUN_100635b0((int)this);
  }
LAB_10075d76:
  *(int *)(this + 0x168) = piVar3[1];
  *(undefined4 *)(*(int *)(this + 4) + 400) = *(undefined4 *)(piVar3[1] + 0x208);
  if ((*(byte *)(piVar3[1] + 0x1a0) & 2) != 0) {
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 0x20;
    iVar4 = *(int *)(this + 4);
    if (*(int *)(this + 0x10) == 0) {
      if ((*(byte *)(iVar4 + 0x1a0) & 2) == 0) {
        pfVar8 = afStack_c;
        fVar18 = 0.5;
        pvVar7 = (void *)FUN_1000b550((void *)(iVar4 + 0xdc),&fStack_18,(float *)(iVar4 + 0xe8));
        FUN_10002280(pvVar7,pfVar8,fVar18);
      }
    }
    else if ((*(byte *)(iVar4 + 0x1a0) & 2) == 0) {
      pfVar8 = &fStack_18;
      fVar18 = 0.5;
      pvVar7 = (void *)FUN_1000b550((void *)(iVar4 + 0xdc),&fStack_24,(float *)(iVar4 + 0xe8));
      pfVar8 = (float *)FUN_10002280(pvVar7,pfVar8,fVar18);
      FUN_10002250((void *)(piVar3[1] + 8),afStack_c,pfVar8);
    }
    FUN_10063390((int)this);
    if (*(float *)(piVar3[1] + 0x1bc) != _DAT_100dd5f8) {
      FUN_100635b0((int)this);
    }
    Wait(this);
    return;
  }
  if (*(int *)(this + 0x170) == 0) {
    pvVar7 = *(void **)(*(int *)(this + 4) + 0x1e8);
    if (pvVar7 != (void *)0x0) {
      FUN_10094b20(pvVar7,*(undefined4 *)(*(int *)(this + 4) + 0x208),6,
                   (char *)(*(int *)(DAT_10122044 + 0x98) + (int)pvVar7),0,0,0x20,100);
    }
    pvVar7 = *(void **)(*(int *)(this + 4) + 0x1e8);
    if (pvVar7 != (void *)0x0) {
      FUN_10094b20(pvVar7,*(undefined4 *)(*(int *)(this + 4) + 0x208),6,
                   (char *)(*(int *)(DAT_10122044 + 0x98) + (int)pvVar7),
                   *(undefined4 *)(this + 0x160),0x3f4ccccd,0,100);
    }
  }
  *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) & 0xffffffdf;
  *(code **)(this + 0x130) = Wait;
  if (*(float *)(piVar3[1] + 0x1bc) != _DAT_100dd5f8) {
    iVar4 = *(int *)(this + 4);
    fStack_24 = *(float *)(iVar4 + 0x50);
    fStack_20 = *(float *)(iVar4 + 0x54);
    fStack_1c = *(float *)(iVar4 + 0x58);
    FUN_100761b0(&fStack_24);
    FUN_100635b0((int)this);
    iVar4 = piVar3[1];
    iVar6 = *(int *)(this + 4);
    fVar18 = *(float *)(iVar4 + 8) - *(float *)(iVar6 + 8);
    fVar16 = *(float *)(iVar4 + 0xc) - *(float *)(iVar6 + 0xc);
    fVar2 = *(float *)(iVar4 + 0x10) - *(float *)(iVar6 + 0x10);
    fStack_18 = *(float *)(iVar4 + 0x50) - *(float *)(iVar6 + 0x50);
    fStack_14 = *(float *)(iVar4 + 0x54) - *(float *)(iVar6 + 0x54);
    fStack_10 = *(float *)(iVar4 + 0x58) - *(float *)(iVar6 + 0x58);
    fStack_1c = SQRT(fVar18 * fVar18 + fVar2 * fVar2 + fVar16 * fVar16) / *(float *)(iVar6 + 0x1f8);
    fStack_24 = fStack_18 / fStack_1c;
    fStack_20 = fStack_14 / fStack_1c;
    *(float *)(this + 0x178) = fStack_24;
    fStack_1c = fStack_10 / fStack_1c;
    *(float *)(this + 0x17c) = fStack_20;
    *(float *)(this + 0x180) = fStack_1c;
  }
  pfVar8 = *(float **)(this + 0x178);
  fVar18 = (float)*(undefined8 *)(this + 0x17c);
  pCVar19 = this;
  FUN_10063ac0((int)this,(float)pfVar8,*(float *)(this + 0x17c),*(float *)(this + 0x180));
  iVar4 = *(int *)(this + 0x10);
  iVar6 = *(int *)(this + 4);
  *(undefined4 *)(this + 0x170) = 2;
  if (iVar4 == 0) {
    if ((*(byte *)(iVar6 + 0x1a0) & 2) != 0) {
      iVar4 = *(int *)(iVar6 + 0x1f8);
      FUN_10003850(&stack0xffffffb8,(undefined4 *)(piVar3[1] + 8));
      FUN_10099340(this,(int)pCVar19,(int)pfVar8,(int)fVar18,iVar4);
      return;
    }
    iVar20 = *(int *)(iVar6 + 0x1f8);
    pfVar8 = afStack_c;
    fVar18 = 0.5;
    pvVar7 = (void *)FUN_1000b550((void *)(iVar6 + 0xdc),&fStack_18,(float *)(iVar6 + 0xe8));
    pCVar19 = (CFuncTrain *)0x10076185;
    pfVar9 = (float *)FUN_10002280(pvVar7,pfVar8,fVar18);
  }
  else {
    iVar20 = *(int *)(iVar6 + 0x1f8);
    if ((*(byte *)(iVar6 + 0x1a0) & 2) == 0) {
      pfVar17 = (float *)&stack0xffffffb8;
      pfVar10 = (float *)(*(int *)(iVar4 + 4) + 8);
      pfVar9 = afStack_c;
      fVar16 = 0.5;
      pvVar7 = (void *)FUN_1000b550((void *)(iVar6 + 0xdc),&fStack_18,(float *)(iVar6 + 0xe8));
      pfVar9 = (float *)FUN_10002280(pvVar7,pfVar9,fVar16);
      pvVar7 = (void *)FUN_10002250((void *)(piVar3[1] + 8),&fStack_24,pfVar9);
      FUN_10002250(pvVar7,pfVar17,pfVar10);
      FUN_10099340(this,(int)pCVar19,(int)pfVar8,(int)fVar18,iVar20);
      return;
    }
    pfVar9 = (float *)(*(int *)(iVar4 + 4) + 8);
  }
  FUN_10002250((void *)(piVar3[1] + 8),(float *)&stack0xffffffb8,pfVar9);
  FUN_10099340(this,(int)pCVar19,(int)pfVar8,(int)fVar18,iVar20);
  return;
}

