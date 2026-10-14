
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CSqueakGrenade::HuntThink(void) */

void __thiscall CSqueakGrenade::HuntThink(CSqueakGrenade *this)

{
  CSqueakGrenade *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  undefined3 extraout_var;
  int *piVar6;
  undefined3 extraout_var_00;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  void *this_01;
  float unaff_ESI;
  float10 fVar10;
  float fStack_24;
  float fStack_20;
  float fStack_10;
  float fStack_c;
  
                    /* 0x97460  125  ?HuntThink@CSqueakGrenade@@AAEXXZ */
  iVar5 = (**(code **)(*(int *)this + 200))();
  if (iVar5 == 0) {
    *(undefined4 *)(this + 0x78) = 0;
    FUN_100b0ef0((int)this);
    return;
  }
  FUN_10007fc0((int)this,0.0);
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  if (*(float *)(this + 0x30c) <= *DAT_10122044) {
    iVar5 = *(int *)(this + 4);
    fVar1 = *(float *)(iVar5 + 0x20);
    fVar1 = SQRT(*(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28) +
                 *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) + fVar1 * fVar1);
    if (fVar1 == _DAT_100dd5f8) {
      _DAT_10121df8 = 0.0;
      fStack_24 = 0.0;
      fStack_20 = 1.0;
    }
    else {
      fVar1 = _DAT_100dd618 / fVar1;
      FUN_10001d60(&stack0xffffffd8,fVar1 * *(float *)(iVar5 + 0x20),
                   fVar1 * *(float *)(iVar5 + 0x24),fVar1 * *(float *)(iVar5 + 0x28));
      _DAT_10121df8 = unaff_ESI;
    }
    _DAT_10121dfc = fStack_24;
    _DAT_10121e00 = fStack_20;
    *(undefined4 *)(*(int *)(this + 4) + 0x160) = 0xbf800000;
    (**(code **)(*(int *)this + 0x68))(*(undefined4 *)(this + 4),0);
    return;
  }
  iVar5 = *(int *)(this + 4);
  if ((*(int *)(iVar5 + 0x1c0) == 0) || (*(int *)(iVar5 + 0x1c4) == -0x13)) {
    *(undefined4 *)(iVar5 + 0x108) = 5;
    *(undefined4 *)(*(int *)(this + 4) + 0x108) = 10;
  }
  else {
    if (*(int *)(iVar5 + 0x108) == 10) {
      *(undefined4 *)(iVar5 + 0x108) = 5;
    }
    iVar5 = *(int *)(this + 4);
    unaff_ESI = *(float *)(iVar5 + 0x20) * _DAT_100e0ed4;
    fVar1 = *(float *)(iVar5 + 0x24) * _DAT_100e0ed4;
    fVar2 = *(float *)(iVar5 + 0x28) * _DAT_100e0ed4;
    *(float *)(iVar5 + 0x20) = unaff_ESI;
    *(float *)(iVar5 + 0x24) = fVar1;
    *(float *)(iVar5 + 0x28) = fVar2;
    *(float *)(*(int *)(this + 4) + 0x28) =
         *(float *)(*(int *)(this + 4) + 0x28) + (float)_DAT_100f0fb0;
  }
  if (*DAT_10122044 < *(float *)(this + 0x31c)) {
    return;
  }
  *(float *)(this + 0x31c) = *DAT_10122044 + (float)_DAT_100e4138;
  fVar1 = *(float *)(*(int *)(this + 4) + 0x20);
  fVar2 = *(float *)(*(int *)(this + 4) + 0x24);
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  if (fVar3 != _DAT_100dd5f8) {
    fVar3 = _DAT_100dd618 / fVar3;
    FUN_10001d60(&fStack_10,fVar3 * fVar1,fVar2 * fVar3,0);
  }
  FUN_100af200(*(int *)(this + 4) + 0x50);
  this_00 = this + 0x160;
  bVar4 = FUN_10019450((uint *)this_00);
  if (CONCAT31(extraout_var,bVar4) != 0) {
    piVar6 = (int *)FUN_10019460((uint *)this_00);
    iVar5 = (**(code **)(*piVar6 + 0xb8))();
    if (iVar5 != 0) goto LAB_100976c9;
  }
  (**(code **)(*(int *)this + 0x11c))(0x200);
  iVar5 = (**(code **)(*(int *)this + 0x144))();
  FUN_10019420(this_00,iVar5);
LAB_100976c9:
  if ((*(float *)(this + 0x30c) - *DAT_10122044 <= (float)_DAT_100dd648) &&
     ((float)_DAT_100e0eb8 <= *(float *)(this + 0x30c) - *DAT_10122044)) {
    uVar7 = *(undefined4 *)(*(int *)(this + 4) + 0x208);
    iVar5 = (*DAT_10121f70)(0,0x3f);
    FUN_10094b20(this_01,uVar7,2,s_squeek_sqk_die1_wav_101174f8,0x3f800000,0x3f4ccccd,0,iVar5 + 100)
    ;
    FUN_10095d30(1,(undefined4 *)(*(int *)(this + 4) + 8),0x100,0.25);
  }
  bVar4 = FUN_10019450((uint *)this_00);
  if (CONCAT31(extraout_var_00,bVar4) != 0) {
    iVar5 = *(int *)this;
    uVar7 = FUN_10019410((uint *)this_00);
    iVar5 = (**(code **)(iVar5 + 0x110))(uVar7);
    if (iVar5 != 0) {
      iVar5 = *(int *)(this + 4);
      piVar6 = (int *)FUN_10019460((uint *)this_00);
      pfVar8 = (float *)(**(code **)(*piVar6 + 0xfc))(&fStack_10);
      fVar1 = *pfVar8 - *(float *)(iVar5 + 8);
      fStack_24 = pfVar8[1] - *(float *)(iVar5 + 0xc);
      fStack_20 = pfVar8[2] - *(float *)(iVar5 + 0x10);
      fVar2 = SQRT(fVar1 * fVar1 + fStack_24 * fStack_24 + fStack_20 * fStack_20);
      if (fVar2 == _DAT_100dd5f8) {
        unaff_ESI = 0.0;
        fStack_24 = 0.0;
        fStack_20 = 1.0;
      }
      else {
        fVar2 = _DAT_100dd618 / fVar2;
        FUN_10001d60(&stack0xffffffd8,fVar2 * fVar1,fStack_24 * fVar2,fStack_20 * fVar2);
      }
      *(float *)(this + 0x310) = unaff_ESI;
      *(float *)(this + 0x314) = fStack_24;
      *(float *)(this + 0x318) = fStack_20;
    }
    iVar5 = *(int *)(this + 4);
    fVar1 = (float)_DAT_100ef350 /
            (SQRT(*(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28) +
                  *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                  *(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20)) + (float)_DAT_100de4a0);
    if ((float)_DAT_100ee940 < fVar1) {
      fVar1 = _DAT_100ed294;
    }
    fVar2 = *(float *)(this + 0x314) * _DAT_100ddae4;
    fVar3 = *(float *)(this + 0x318) * _DAT_100ddae4;
    fStack_10 = fVar1 * *(float *)(iVar5 + 0x20);
    fStack_c = fVar1 * *(float *)(iVar5 + 0x24);
    *(float *)(iVar5 + 0x20) = fStack_10 + *(float *)(this + 0x310) * _DAT_100ddae4;
    *(float *)(iVar5 + 0x24) = fStack_c + fVar2;
    *(float *)(iVar5 + 0x28) = fVar1 * *(float *)(iVar5 + 0x28) + fVar3;
  }
  iVar5 = *(int *)(this + 4);
  if ((*(uint *)(iVar5 + 0x1a4) & 0x200) == 0) {
    if (((*(float *)(iVar5 + 0x5c) == _DAT_100dd5f8) && (*(float *)(iVar5 + 0x60) == _DAT_100dd5f8))
       && (*(float *)(iVar5 + 100) == _DAT_100dd5f8)) {
      fVar10 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
      *(float *)(*(int *)(this + 4) + 0x5c) = (float)fVar10;
      fVar10 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
      *(float *)(*(int *)(this + 4) + 100) = (float)fVar10;
    }
  }
  else {
    *(undefined4 *)(iVar5 + 0x5c) = 0;
    *(undefined4 *)(iVar5 + 0x60) = 0;
    *(undefined4 *)(iVar5 + 100) = 0;
  }
  iVar5 = *(int *)(this + 4);
  fVar1 = *(float *)(iVar5 + 8) - *(float *)(this + 0x324);
  fVar3 = *(float *)(iVar5 + 0xc) - *(float *)(this + 0x328);
  fVar2 = *(float *)(iVar5 + 0x10) - *(float *)(this + 0x32c);
  if (SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) < (float)_DAT_100dd628) {
    fVar10 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
    *(float *)(*(int *)(this + 4) + 0x20) = (float)fVar10;
    fVar10 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
    *(float *)(*(int *)(this + 4) + 0x24) = (float)fVar10;
  }
  iVar5 = *(int *)(this + 4);
  *(undefined4 *)(this + 0x324) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(this + 0x328) = *(undefined4 *)(iVar5 + 0xc);
  *(undefined4 *)(this + 0x32c) = *(undefined4 *)(iVar5 + 0x10);
  puVar9 = (undefined4 *)FUN_100ae830(&fStack_10,iVar5 + 0x20);
  iVar5 = *(int *)(this + 4);
  *(undefined4 *)(iVar5 + 0x50) = *puVar9;
  *(undefined4 *)(iVar5 + 0x54) = puVar9[1];
  *(undefined4 *)(iVar5 + 0x58) = puVar9[2];
  *(undefined4 *)(*(int *)(this + 4) + 0x58) = 0;
  *(undefined4 *)(*(int *)(this + 4) + 0x50) = 0;
  return;
}

