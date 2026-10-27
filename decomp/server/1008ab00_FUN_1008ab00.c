
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1008ab00(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  void *this_00;
  float10 fVar9;
  float10 fVar10;
  
  *(int *)((int)this + 0x314) = param_1;
  if ((param_1 == 4) &&
     (pfVar5 = (float *)FUN_10095f40(*(int *)((int)this + 0x288)), pfVar5 != (float *)0x0)) {
    iVar6 = (*DAT_10121f70)(0,5);
    *(float *)((int)this + 0x1ec) = (float)(3 - iVar6) + *pfVar5;
    iVar6 = (*DAT_10121f70)(0,5);
    *(float *)((int)this + 0x1f0) = (float)(3 - iVar6) + pfVar5[1];
    fVar1 = pfVar5[2];
    *(undefined4 *)((int)this + 0x1f8) = 0x40;
    *(float *)((int)this + 500) = fVar1;
    uVar7 = FUN_1005e6d0(0x40);
    *(undefined4 *)((int)this + 0x26c) = uVar7;
    return;
  }
  do {
    fVar9 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
    fVar10 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
    iVar8 = (*DAT_10121f70)(0,0xff);
    iVar6 = *(int *)((int)this + 4);
    fVar1 = (float)(iVar8 + 0x100) * (float)fVar9 + *(float *)(iVar6 + 8);
    fVar2 = (float)(iVar8 + 0x100) * (float)fVar10 + *(float *)(iVar6 + 0xc);
    fVar4 = fVar1 - *(float *)(iVar6 + 8);
    fVar3 = fVar2 - *(float *)(iVar6 + 0xc);
  } while (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < _DAT_100ddaf4);
  *(float *)((int)this + 0x1f0) = fVar2;
  *(float *)((int)this + 0x1ec) = fVar1;
  *(undefined4 *)((int)this + 500) = *(undefined4 *)(*(int *)((int)this + 4) + 0x10);
  *(undefined4 *)((int)this + 0x1f8) = 0x40;
  uVar7 = FUN_1005e6d0(0x40);
  *(undefined4 *)((int)this + 0x26c) = uVar7;
  iVar6 = (*DAT_10121f70)(0,9);
  if (iVar6 == 1) {
    uVar7 = *(undefined4 *)(*(int *)((int)this + 4) + 0x208);
    iVar6 = (*DAT_10121f70)(0,0x27);
    FUN_10094b20(this_00,uVar7,4,s_roach_rch_walk_wav_1011544c,0x3f800000,0x3f4ccccd,0,iVar6 + 0x50)
    ;
  }
  return;
}

