
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBarnacle::BarnacleThink(void) */

void __thiscall CBarnacle::BarnacleThink(CBarnacle *this)

{
  CBarnacle *this_00;
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  undefined3 extraout_var_00;
  int iVar6;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *pvVar7;
  float unaff_EBX;
  float10 fVar8;
  void *pvVar9;
  char *pcVar10;
  float *pfVar11;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
                    /* 0xc270  15  ?BarnacleThink@CBarnacle@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  this_00 = this + 0x160;
  bVar3 = FUN_10019450((uint *)this_00);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    iVar5 = (*DAT_10121e4c)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
    if ((iVar5 == 0) || (iVar5 = (*DAT_10121f20)(iVar5), iVar5 == 0)) {
      iVar5 = *(int *)this;
      fVar8 = (float10)(*DAT_10121f74)(0x3f800000,0x3fc00000);
      (**(code **)(iVar5 + 8))((float)fVar8);
    }
    if (*(int *)(this + 0xd4) != 0) {
      (**(code **)(*(int *)this + 0x1a8))(1);
      *(undefined4 *)(this + 0x31c) = 0xc2c80000;
    }
    if ((*(int *)(this + 0x310) != 0) && (iVar5 = (*DAT_10121f70)(0,99), iVar5 == 1)) {
      FUN_1001e0f0(*(int *)(this + 4),1,1);
      *(int *)(this + 0x310) = *(int *)(this + 0x310) + -1;
      iVar5 = (*DAT_10121f70)(0,2);
      if (iVar5 == 0) {
        pvVar9 = *(void **)(*(int *)(this + 4) + 0x208);
        pcVar10 = s_barnacle_bcl_chew1_wav_10102e18;
        pvVar7 = extraout_ECX_00;
      }
      else if (iVar5 == 1) {
        pvVar7 = *(void **)(*(int *)(this + 4) + 0x208);
        pcVar10 = s_barnacle_bcl_chew2_wav_10102e30;
        pvVar9 = pvVar7;
      }
      else {
        if (iVar5 != 2) goto LAB_1000c699;
        pvVar7 = *(void **)(this + 4);
        pcVar10 = s_barnacle_bcl_chew3_wav_10102e48;
        pvVar9 = *(void **)((int)pvVar7 + 0x208);
      }
      FUN_10094b20(pvVar7,pvVar9,1,pcVar10,0x3f800000,0x3f4ccccd,0,100);
    }
LAB_1000c699:
    piVar4 = (int *)FUN_1000c9e0(this,(float *)&stack0xffffffe4);
    if ((piVar4 == (int *)0x0) || (*(int *)(this + 0x314) == 0)) {
      if (unaff_EBX <= *(float *)(this + 0x308)) {
        *(undefined4 *)(this + 0x314) = 1;
        *(float *)(this + 0x308) = unaff_EBX;
      }
      else {
        fVar1 = *(float *)(this + 0x308) + _DAT_100de45c;
        *(undefined4 *)(this + 0x314) = 0;
        *(float *)(this + 0x308) = fVar1;
      }
    }
    else {
      iVar5 = (**(code **)(*piVar4 + 0xf4))();
      if (iVar5 != 0) {
        FUN_10094b20(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),1
                     ,s_barnacle_bcl_alert2_wav_10102e00,0x3f800000,0x3f4ccccd,0,100);
        FUN_1005e1e0(this,(byte *)s_attack1_10102df8);
        *(undefined4 *)(this + 0x31c) = 0xc1a00000;
        FUN_10019420(this_00,(int)piVar4);
        *(undefined4 *)(piVar4[1] + 0x108) = 5;
        iVar5 = *(int *)(this + 4);
        iVar6 = piVar4[1];
        *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar5 + 0x20);
        *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(iVar5 + 0x24);
        *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar5 + 0x28);
        iVar5 = *(int *)(this + 4);
        iVar6 = piVar4[1];
        *(undefined4 *)(iVar6 + 0x2c) = *(undefined4 *)(iVar5 + 0x20);
        *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar5 + 0x24);
        *(undefined4 *)(iVar6 + 0x34) = *(undefined4 *)(iVar5 + 0x28);
        *(undefined4 *)(piVar4[1] + 8) = *(undefined4 *)(*(int *)(this + 4) + 8);
        *(undefined4 *)(piVar4[1] + 0xc) = *(undefined4 *)(*(int *)(this + 4) + 0xc);
        iVar5 = *(int *)(this + 4);
        *(undefined4 *)(this + 0x318) = 1;
        *(undefined4 *)(this + 0x30c) = 0xbf800000;
        iVar6 = (**(code **)(*piVar4 + 0xfc))(&fStack_10);
        *(float *)(this + 0x308) = *(float *)(iVar5 + 0x10) - *(float *)(iVar6 + 8);
      }
    }
    goto LAB_1000c7e8;
  }
  piVar4 = (int *)FUN_10019460((uint *)this_00);
  iVar5 = (**(code **)(*piVar4 + 0xb8))();
  if (iVar5 == 0) {
    *(undefined4 *)(this + 0x318) = 0;
    FUN_10019420(this_00,0);
    return;
  }
  if (*(int *)(this + 0x318) != 0) {
    bVar3 = FUN_10019450((uint *)this_00);
    if ((CONCAT31(extraout_var_00,bVar3) != 0) &&
       (iVar5 = FUN_10019460((uint *)this_00), *(int *)(*(int *)(iVar5 + 4) + 0x170) != 0)) {
      FUN_10019420(this_00,0);
      *(undefined4 *)(this + 0x318) = 0;
      return;
    }
    iVar5 = FUN_10019460((uint *)this_00);
    fStack_8 = *(float *)(*(int *)(iVar5 + 4) + 0x10);
    fVar1 = *(float *)(*(int *)(this + 4) + 8);
    fStack_c = *(float *)(*(int *)(this + 4) + 0xc);
    fStack_10 = fVar1;
    iVar5 = FUN_10019460((uint *)this_00);
    fVar2 = fStack_c;
    fVar8 = (float10)fcos((float10)*(float *)(*(int *)(iVar5 + 4) + 0x54) * (float10)_DAT_100de1f8);
    fStack_10 = (float)((float10)fVar1 - fVar8 * (float10)_DAT_100de9b0);
    iVar6 = FUN_10019460((uint *)this_00);
    iVar5 = *(int *)(this + 4);
    fVar8 = (float10)fsin((float10)*(float *)(*(int *)(iVar6 + 4) + 0x54) * (float10)_DAT_100de1f8);
    fStack_c = (float)((float10)fVar2 - fVar8 * (float10)_DAT_100de9b0);
    *(float *)(this + 0x308) = *(float *)(this + 0x308) - _DAT_100de45c;
    fStack_8 = fStack_8 + _DAT_100de45c;
    iVar6 = FUN_10019460((uint *)this_00);
    pvVar7 = *(void **)(iVar6 + 4);
    if (ABS(*(float *)(iVar5 + 0x10) -
            ((fStack_8 + *(float *)((int)pvVar7 + 0x17c)) - _DAT_100de45c)) < (float)_DAT_100de9a8)
    {
      *(undefined4 *)(this + 0x318) = 0;
      FUN_10094b20(pvVar7,*(undefined4 *)(*(int *)(this + 4) + 0x208),1,
                   s_barnacle_bcl_bite3_wav_10102e60,0x3f800000,0x3f4ccccd,0,100);
      piVar4 = (int *)FUN_10019460((uint *)this_00);
      piVar4 = (int *)(**(code **)(*piVar4 + 0x74))();
      *(float *)(this + 0x30c) = *DAT_10122044 + _DAT_100dd63c;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x1f0))(*(undefined4 *)(this + 4));
        (**(code **)(*(int *)this + 0x1a8))(0x23);
      }
    }
    pfVar11 = &fStack_10;
    iVar5 = FUN_10019410((uint *)this_00);
    FUN_100afe10(iVar5,pfVar11);
    goto LAB_1000c7e8;
  }
  piVar4 = (int *)FUN_10019460((uint *)this_00);
  piVar4 = (int *)(**(code **)(*piVar4 + 0x74))();
  if ((*(int *)(this + 0x30c) != -0x40800000) && (*(float *)(this + 0x30c) < *DAT_10122044)) {
    if (piVar4 == (int *)0x0) {
      return;
    }
    (**(code **)(*piVar4 + 0x60))
              (*(undefined4 *)(this + 4),*(undefined4 *)(this + 4),
               *(undefined4 *)(piVar4[1] + 0x160),0x2004);
    *(undefined4 *)(this + 0x310) = 3;
    return;
  }
  if ((piVar4 == (int *)0x0) || (iVar5 = (*DAT_10121f70)(0,0x31), iVar5 != 0)) goto LAB_1000c7e8;
  iVar5 = (*DAT_10121f70)(0,2);
  if (iVar5 == 0) {
    pvVar7 = *(void **)(*(int *)(this + 4) + 0x208);
    pcVar10 = s_barnacle_bcl_chew1_wav_10102e18;
    pvVar9 = pvVar7;
LAB_1000c55e:
    FUN_10094b20(pvVar7,pvVar9,1,pcVar10,0x3f800000,0x3f4ccccd,0,100);
  }
  else {
    if (iVar5 == 1) {
      pvVar7 = *(void **)(this + 4);
      pcVar10 = s_barnacle_bcl_chew2_wav_10102e30;
      pvVar9 = *(void **)((int)pvVar7 + 0x208);
      goto LAB_1000c55e;
    }
    if (iVar5 == 2) {
      pcVar10 = s_barnacle_bcl_chew3_wav_10102e48;
      pvVar7 = extraout_ECX;
      pvVar9 = *(void **)(*(int *)(this + 4) + 0x208);
      goto LAB_1000c55e;
    }
  }
  (**(code **)(*piVar4 + 0x1f0))(*(undefined4 *)(this + 4));
LAB_1000c7e8:
  FUN_10008360(this,0,-(*(float *)(this + 0x31c) + *(float *)(this + 0x308)));
  FUN_10007fc0((int)this,0.1);
  return;
}

