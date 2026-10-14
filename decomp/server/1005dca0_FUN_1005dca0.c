
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1005dca0(void *this,int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  float *pfVar11;
  undefined4 unaff_EBX;
  float10 fVar12;
  float fVar13;
  
  *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) & 0xfff7ffff;
  iVar8 = (**(code **)(*(int *)this + 0x110))(param_1);
  if (iVar8 == 0) {
    uVar10 = *(uint *)((int)this + 0x15c) | 0x20;
  }
  else {
    uVar10 = *(uint *)((int)this + 0x15c) & 0xffffffdf;
  }
  *(uint *)((int)this + 0x15c) = uVar10;
  iVar8 = (**(code **)(*param_1 + 0xb8))();
  if (iVar8 != 0) {
    iVar8 = param_1[1];
    fVar1 = *(float *)(iVar8 + 8);
    fVar2 = *(float *)(iVar8 + 0xc);
    iVar3 = *(int *)((int)this + 4);
    fVar4 = fVar1 - *(float *)(iVar3 + 8);
    fVar5 = fVar2 - *(float *)(iVar3 + 0xc);
    fVar13 = *(float *)(iVar8 + 0x10) - *(float *)(iVar3 + 0x10);
    fVar7 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar13 * fVar13);
    fVar6 = *(float *)(iVar8 + 0x10) + *(float *)(iVar8 + 0xfc) * (float)_DAT_100dd648;
    fVar13 = fVar1 - *(float *)(iVar3 + 8);
    fVar5 = fVar2 - *(float *)(iVar3 + 0xc);
    fVar4 = fVar6 - *(float *)(iVar3 + 0x10);
    fVar13 = SQRT(fVar13 * fVar13 + fVar5 * fVar5 + fVar4 * fVar4);
    if ((fVar7 <= fVar13) &&
       (fVar1 = fVar1 - *(float *)(iVar3 + 8), fVar2 = fVar2 - *(float *)(iVar3 + 0xc),
       fVar13 = (fVar6 - *(float *)(iVar8 + 0xfc)) - *(float *)(iVar3 + 0x10),
       fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar13 * fVar13), fVar13 = fVar7, fVar1 < fVar7)
       ) {
      fVar13 = fVar1;
    }
    if ((*(uint *)((int)this + 0x15c) & 0x10) == 0) {
      if (((*(uint *)((int)this + 0x15c) & 0x30) == 0) && (fVar13 <= _DAT_100dd658)) {
        unaff_EBX = 1;
        *(float *)((int)this + 0x2a8) = *(float *)(iVar8 + 8);
        *(undefined4 *)((int)this + 0x2ac) = *(undefined4 *)(iVar8 + 0xc);
        *(undefined4 *)((int)this + 0x2b0) = *(undefined4 *)(iVar8 + 0x10);
      }
    }
    else {
      pfVar11 = (float *)((int)this + 0x2a8);
      unaff_EBX = 1;
      *pfVar11 = *(float *)(iVar8 + 8);
      *(undefined4 *)((int)this + 0x2ac) = *(undefined4 *)(iVar8 + 0xc);
      *(undefined4 *)((int)this + 0x2b0) = *(undefined4 *)(iVar8 + 0x10);
      piVar9 = (int *)(**(code **)(*param_1 + 0x74))();
      if (piVar9 != (int *)0x0) {
        iVar8 = (**(code **)(*piVar9 + 0x14c))(this);
        if (iVar8 == 0) {
          uVar10 = *(uint *)((int)this + 0x15c) & 0xfff7ffff;
        }
        else {
          uVar10 = *(uint *)((int)this + 0x15c) | 0x80000;
        }
        *(uint *)((int)this + 0x15c) = uVar10;
      }
      iVar8 = param_1[1];
      if (((*(float *)(iVar8 + 0x20) != _DAT_100dd5f8) ||
          (*(float *)(iVar8 + 0x24) != _DAT_100dd5f8)) ||
         (*(float *)(iVar8 + 0x28) != _DAT_100dd5f8)) {
        fVar12 = (float10)(*DAT_10121f74)(0xbd4ccccd,0);
        iVar8 = param_1[1];
        fVar1 = *(float *)(iVar8 + 0x24);
        fVar2 = *(float *)(iVar8 + 0x28);
        *pfVar11 = *pfVar11 - (float)(fVar12 * (float10)*(float *)(iVar8 + 0x20));
        *(float *)((int)this + 0x2ac) =
             *(float *)((int)this + 0x2ac) - (float)(fVar12 * (float10)fVar1);
        *(float *)((int)this + 0x2b0) =
             (float)((float10)*(float *)((int)this + 0x2b0) - fVar12 * (float10)fVar2);
      }
    }
    if (fVar13 < *(float *)((int)this + 0x2dc)) {
      uVar10 = *(uint *)((int)this + 0x15c) & 0xffffff7f;
    }
    else {
      uVar10 = *(uint *)((int)this + 0x15c) | 0x80;
    }
    *(uint *)((int)this + 0x15c) = uVar10;
    iVar8 = (**(code **)(*(int *)this + 0x1cc))();
    if (iVar8 != 0) {
      iVar8 = FUN_10019410((uint *)((int)this + 0x160));
      FUN_1005db20(this,iVar8,fVar13);
    }
    if ((*(int *)((int)this + 0x26c) == 2) && (iVar8 = *(int *)((int)this + 0x270), iVar8 < 8)) {
      pfVar11 = (float *)(iVar8 * 0x10 + 500 + (int)this);
      while ((pfVar11[1] != 1.82169e-43 ||
             (fVar1 = pfVar11[-2] - *(float *)((int)this + 0x2a8),
             fVar13 = pfVar11[-1] - *(float *)((int)this + 0x2ac),
             fVar2 = *pfVar11 - *(float *)((int)this + 0x2b0),
             SQRT(fVar1 * fVar1 + fVar13 * fVar13 + fVar2 * fVar2) <= _DAT_100de4e4))) {
        iVar8 = iVar8 + 1;
        pfVar11 = pfVar11 + 4;
        if (7 < iVar8) {
          return unaff_EBX;
        }
      }
      FUN_1005d300(this);
    }
    return unaff_EBX;
  }
  *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) & 0xffffffcf | 0x100000;
  return 0;
}

