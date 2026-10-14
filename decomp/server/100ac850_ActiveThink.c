
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBaseTurret::ActiveThink(void) */

void __thiscall CBaseTurret::ActiveThink(CBaseTurret *this)

{
  CBaseTurret *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined3 extraout_var;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float *pfVar8;
  float fVar9;
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
                    /* 0xac850  3  ?ActiveThink@CBaseTurret@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  FUN_10007fc0((int)this,0.0);
  if (*(int *)(this + 0x330) == 0) {
LAB_100acd02:
    FUN_10019420(this + 0x160,0);
    fVar9 = *DAT_10122044;
    *(code **)(this + 0x74) = SearchThink;
    *(float *)(this + 0x348) = *(float *)(this + 0x34c) + fVar9;
    return;
  }
  this_00 = this + 0x160;
  bVar4 = FUN_10019450((uint *)this_00);
  if (CONCAT31(extraout_var,bVar4) == 0) goto LAB_100acd02;
  piVar5 = (int *)FUN_10019460((uint *)this_00);
  iVar6 = (**(code **)(*piVar5 + 0xb8))();
  if (iVar6 == 0) {
    if (*(float *)(this + 0x348) == _DAT_100dd5f8) {
      *(float *)(this + 0x348) = *DAT_10122044 + (float)_DAT_100dd648;
    }
    else if (*(float *)(this + 0x348) < *DAT_10122044) {
      FUN_10019420(this_00,0);
      fVar9 = *DAT_10122044;
      *(code **)(this + 0x74) = SearchThink;
      *(float *)(this + 0x348) = *(float *)(this + 0x34c) + fVar9;
      return;
    }
  }
  iVar6 = *(int *)(this + 4);
  fStack_14 = *(float *)(iVar6 + 0x17c) + *(float *)(iVar6 + 0x10);
  fStack_18 = *(float *)(iVar6 + 0x178) + *(float *)(iVar6 + 0xc);
  fStack_1c = *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0x174);
  piVar5 = (int *)FUN_10019460((uint *)this_00);
  (**(code **)(*piVar5 + 0x104))(&fStack_28,&fStack_1c);
  pfVar8 = &fStack_28;
  fVar9 = 0.0;
  iVar6 = FUN_10019460((uint *)this_00);
  iVar6 = FUN_10044560(*(int *)(this + 4),*(int *)(iVar6 + 4),pfVar8,fVar9);
  fStack_34 = fStack_28 - fStack_1c;
  fStack_30 = fStack_24 - fStack_18;
  fStack_2c = fStack_20 - fStack_14;
  fStack_10 = fStack_34;
  fStack_c = fStack_30;
  fStack_8 = fStack_2c;
  FUN_100ae830(&fStack_40,&fStack_10);
  if ((iVar6 == 0) ||
     (_DAT_100f06d8 < SQRT(fStack_34 * fStack_34 + fStack_30 * fStack_30 + fStack_2c * fStack_2c)))
  {
    if (*(float *)(this + 0x348) == _DAT_100dd5f8) {
      *(float *)(this + 0x348) = *DAT_10122044 + (float)_DAT_100dd648;
    }
    else if (*(float *)(this + 0x348) < *DAT_10122044) goto LAB_100acd02;
    iVar6 = 0;
  }
  else {
    *(float *)(this + 0x33c) = fStack_28;
    *(float *)(this + 0x340) = fStack_24;
    *(float *)(this + 0x344) = fStack_20;
  }
  FUN_100af210((float *)(this + 0x358));
  fVar9 = SQRT(fStack_34 * fStack_34 + fStack_30 * fStack_30 + fStack_2c * fStack_2c);
  fVar1 = _DAT_100dd5f8;
  fVar2 = _DAT_100dd618;
  fVar3 = _DAT_100dd5f8;
  if (fVar9 != _DAT_100dd5f8) {
    fVar9 = _DAT_100dd618 / fVar9;
    fVar1 = fVar9 * fStack_34;
    fVar2 = fStack_2c * fVar9;
    fVar3 = fStack_30 * fVar9;
  }
  if ((*(int *)(this + 0x30c) == 0) ||
     ((fVar1 * DAT_10122044[10] + fVar3 * DAT_10122044[0xb] + fVar2 * DAT_10122044[0xc] <=
       (float)_DAT_100f5e70 && (*(int *)(this + 0x334) == 0)))) {
    FUN_100ad2f0(this,2);
  }
  else {
    FUN_10008450(this,0,&fStack_10,&fStack_34);
    FUN_100ad2f0(this,1);
    (**(code **)(*(int *)this + 0x240))(&fStack_10,DAT_10122044 + 10);
  }
  if (*(int *)(this + 0x334) != 0) {
    iVar6 = (*DAT_10121f70)(0,9);
    if (iVar6 == 0) {
      fVar7 = (float10)(*DAT_10121f74)(0,0x43b40000);
      *(float *)(this + 0x368) = (float)fVar7;
      fVar7 = (float10)(*DAT_10121f74)(0,0x42b40000);
      *(float *)(this + 0x364) = (float)(fVar7 - (float10)(*(int *)(this + 0x32c) * 0x5a));
      (**(code **)(*(int *)this + 0x60))
                (*(undefined4 *)(this + 4),*(undefined4 *)(this + 4),0x3f800000,0);
      return;
    }
    goto LAB_100acce2;
  }
  if (iVar6 == 0) goto LAB_100acce2;
  if (_DAT_100ddae8 < fStack_3c) {
    fStack_3c = fStack_3c - _DAT_100ddae8;
  }
  if (fStack_3c < _DAT_100dd5f8) {
    fStack_3c = fStack_3c + _DAT_100ddae8;
  }
  if (fStack_40 < _DAT_100de530) {
    fStack_40 = fStack_40 + _DAT_100ddae8;
  }
  if (_DAT_100ddaec < fStack_40) {
    fStack_40 = fStack_40 - _DAT_100ddae8;
  }
  if (*(int *)(this + 0x32c) == 0) {
    if (fStack_40 <= _DAT_100de4b0) {
      fVar9 = (float)*(int *)(this + 800);
      if ((float)*(int *)(this + 800) <= fStack_40) {
LAB_100acccc:
        fVar9 = fStack_40;
      }
    }
    else {
      fStack_40 = 90.0;
      fVar9 = fStack_40;
    }
  }
  else if (_DAT_100ed948 <= fStack_40) {
    fVar9 = (float)-*(int *)(this + 800);
    if (fStack_40 <= (float)-*(int *)(this + 800)) goto LAB_100acccc;
  }
  else {
    fStack_40 = -90.0;
    fVar9 = fStack_40;
  }
  fStack_40 = fVar9;
  *(float *)(this + 0x368) = fStack_3c;
  *(float *)(this + 0x364) = fStack_40;
LAB_100acce2:
  (**(code **)(*(int *)this + 0x230))();
  FUN_100adab0(this);
  return;
}

