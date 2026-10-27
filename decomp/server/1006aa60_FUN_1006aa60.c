
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_1006aa60(void *this,float param_1,float param_2,float param_3)

{
  float *this_00;
  int iVar1;
  bool bVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  void *pvVar6;
  float10 fVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 auStack_c [12];
  
  iVar1 = *(int *)((int)this + 4);
  FUN_10001d60(&local_30,*(float *)(iVar1 + 0x20) * _DAT_100dd614,
               *(float *)(iVar1 + 0x24) * _DAT_100dd614,*(float *)(iVar1 + 0x28) * _DAT_100dd614);
  iVar1 = *(int *)((int)this + 4);
  FUN_10001d60(&local_3c,local_30 + *(float *)(iVar1 + 8),local_2c + *(float *)(iVar1 + 0xc),
               local_28 + *(float *)(iVar1 + 0x10));
  fVar11 = param_2 - *(float *)(*(int *)((int)this + 4) + 0xc);
  local_34 = 0.0;
  fVar12 = param_1 - *(float *)(*(int *)((int)this + 4) + 8);
  FUN_10001d60(&local_48,fVar12,fVar11,0);
  fVar3 = SQRT(local_48 * local_48 + local_44 * local_44 + local_40 * local_40) - _DAT_100ddae8;
  FUN_10001d60(&local_48,param_1 - local_3c,param_2 - local_38,-local_34);
  this_00 = (float *)((int)this + 0x30c);
  fVar10 = SQRT(local_48 * local_48 + local_44 * local_44 + local_40 * local_40) - _DAT_100ddae8;
  if (((*this_00 == _DAT_100dd5f8) && (*(float *)((int)this + 0x310) == _DAT_100dd5f8)) &&
     (*(float *)((int)this + 0x314) == _DAT_100dd5f8)) {
    iVar1 = *(int *)((int)this + 4);
    *this_00 = *(float *)(iVar1 + 0x20);
    *(undefined4 *)((int)this + 0x310) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)((int)this + 0x314) = *(undefined4 *)(iVar1 + 0x28);
  }
  if ((_DAT_100dd5f8 <= fVar3) || (fVar3 < fVar10)) {
    if ((_DAT_100dd5f8 < fVar3) && (fVar3 <= fVar10)) {
      FUN_10001d60(&local_30,fVar12,fVar11,0);
      fVar7 = FUN_1000a9b0(&local_30);
      if (fVar7 == (float10)_DAT_100dd5f8) {
        fVar12 = 1.0;
        fVar11 = 0.0;
        fVar10 = 0.0;
      }
      else {
        fVar7 = (float10)_DAT_100dd618 / fVar7;
        fVar12 = (float)((float10)local_28 * fVar7);
        fVar11 = (float)((float10)local_2c * fVar7);
        fVar10 = (float)((float10)local_30 * fVar7);
      }
      FUN_10001d60(&local_48,fVar10,fVar11,fVar12);
      FUN_10001d60(&local_18,local_48 * _DAT_100ddaf8,local_44 * _DAT_100ddaf8,
                   local_40 * _DAT_100ddaf8);
      pfVar4 = (float *)FUN_1000b550(this_00,&local_24,&local_18);
      *this_00 = *pfVar4;
      *(float *)((int)this + 0x310) = pfVar4[1];
      *(float *)((int)this + 0x314) = pfVar4[2];
    }
  }
  else {
    FUN_10001d60(&local_48,fVar12,fVar11,0);
    fVar7 = FUN_1000a9b0(&local_48);
    if (fVar7 == (float10)_DAT_100dd5f8) {
      fVar12 = 1.0;
      fVar11 = 0.0;
      fVar10 = 0.0;
    }
    else {
      fVar7 = (float10)_DAT_100dd618 / fVar7;
      fVar12 = (float)((float10)local_40 * fVar7);
      fVar11 = (float)((float10)local_44 * fVar7);
      fVar10 = (float)((float10)local_48 * fVar7);
    }
    FUN_10001d60(&local_30,fVar10,fVar11,fVar12);
    FUN_10001d60(&local_24,local_30 * _DAT_100ddaf8,local_2c * _DAT_100ddaf8,
                 local_28 * _DAT_100ddaf8);
    FUN_10001d60(&local_18,*this_00 - local_24,*(float *)((int)this + 0x310) - local_20,
                 *(float *)((int)this + 0x314) - local_1c);
    *this_00 = local_18;
    *(undefined4 *)((int)this + 0x310) = local_14;
    *(undefined4 *)((int)this + 0x314) = local_10;
  }
  *(float *)(*(int *)((int)this + 4) + 100) = fVar3 * _DAT_100ddacc;
  bVar2 = fVar3 < _DAT_100ddac8;
  fVar7 = (float10)(*DAT_10121f74)(0xc0000000,0x40000000);
  fVar12 = (float)fVar7;
  fVar7 = (float10)(*DAT_10121f74)(0xc0000000,0x40000000);
  fVar11 = (float)fVar7;
  fVar7 = (float10)(*DAT_10121f74)(0xc0000000,0x40000000);
  pfVar4 = (float *)FUN_10001d60(&local_18,(float)fVar7,fVar11,fVar12);
  pfVar4 = (float *)FUN_1000b550(this_00,&local_24,pfVar4);
  *this_00 = *pfVar4;
  *(float *)((int)this + 0x310) = pfVar4[1];
  *(float *)((int)this + 0x314) = pfVar4[2];
  pfVar5 = (float *)FUN_10001d60(&local_18,0,0,*(undefined4 *)((int)this + 0x314));
  pfVar4 = &local_24;
  pfVar9 = &local_30;
  fVar12 = 200.0;
  pfVar8 = &local_48;
  pvVar6 = (void *)FUN_10001d60(auStack_c,*this_00,*(undefined4 *)((int)this + 0x310),0);
  pvVar6 = (void *)FUN_1001fdd0(pvVar6,pfVar8);
  pvVar6 = (void *)FUN_10002280(pvVar6,pfVar9,fVar12);
  pfVar4 = (float *)FUN_1000b550(pvVar6,pfVar4,pfVar5);
  *this_00 = *pfVar4;
  *(float *)((int)this + 0x310) = pfVar4[1];
  *(float *)((int)this + 0x314) = pfVar4[2];
  iVar1 = *(int *)((int)this + 4);
  fVar12 = param_3 - *(float *)(iVar1 + 0x10);
  if ((fVar12 <= _DAT_100dd5f8) || (_DAT_100de484 <= *(float *)((int)this + 0x314))) {
    if ((_DAT_100dd5f8 <= fVar12) || (*(float *)((int)this + 0x314) <= _DAT_100e0d90))
    goto LAB_1006af1a;
    fVar12 = *(float *)((int)this + 0x314) - _DAT_100ddacc;
  }
  else {
    fVar12 = *(float *)((int)this + 0x314) + _DAT_100ddacc;
  }
  *(float *)((int)this + 0x314) = fVar12;
LAB_1006af1a:
  *(float *)(iVar1 + 0x20) = *this_00;
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)((int)this + 0x310);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)((int)this + 0x314);
  return bVar2;
}

