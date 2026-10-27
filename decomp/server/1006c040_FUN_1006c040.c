
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1006c040(void *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint local_40;
  uint local_3c;
  undefined1 local_38 [16];
  float local_28;
  
  fVar4 = param_4;
  if (*(int *)(*(int *)((int)this + 0x24) + 0xc + (int)param_4 * 0x10) !=
      *(int *)((int)this + 0x1860)) {
    *(int *)(*(int *)((int)this + 0x24) + 0xc + (int)param_4 * 0x10) = *(int *)((int)this + 0x1860);
    iVar5 = *(int *)((int)this + 0xc);
    iVar9 = (int)param_4 * 0x58;
    fVar1 = param_1 - *(float *)(iVar9 + 0xc + iVar5);
    fVar3 = param_2 - *(float *)(iVar9 + 0x10 + iVar5);
    iVar5 = iVar9 + 0xc + iVar5;
    fVar2 = param_3 - *(float *)(iVar5 + 8);
    param_4 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
    if ((param_4 < *(float *)((int)this + 0x1828)) &&
       (FUN_100afc60(&param_1,iVar5,1,0,local_38), local_28 == (float)_DAT_100dd628)) {
      *(float *)((int)this + 0x182c) = fVar4;
      *(float *)((int)this + 0x1828) = param_4;
      lVar10 = __ftol();
      uVar7 = (uint)*(byte *)(iVar9 + 0x18 + *(int *)((int)this + 0xc));
      lVar11 = __ftol();
      lVar12 = __ftol();
      FUN_1006c390(&local_3c,&local_40,
                   (((int)lVar11 - (int)lVar10) * 0x100) / (((int)lVar12 - (int)lVar10) + 1),uVar7);
      if ((int)local_40 < *(int *)((int)this + 0x183c)) {
        *(uint *)((int)this + 0x183c) = local_40;
      }
      if (*(int *)((int)this + 0x1830) < (int)local_3c) {
        *(uint *)((int)this + 0x1830) = local_3c;
      }
      lVar10 = __ftol();
      uVar7 = (uint)lVar10;
      uVar8 = (uint)*(byte *)(iVar9 + 0x19 + *(int *)((int)this + 0xc));
      local_3c = uVar7;
      lVar10 = __ftol();
      local_40 = ((int)lVar10 - uVar7) * 0x100;
      lVar10 = __ftol();
      iVar5 = (int)local_40 / (int)(((int)lVar10 - uVar7) + 1);
      uVar7 = iVar5 * 2 - uVar8;
      if (iVar5 < (int)uVar8) {
        uVar6 = ((int)uVar7 < 0) - 1 & uVar7;
        uVar7 = uVar8;
      }
      else {
        uVar6 = uVar8;
        if (0xff < (int)uVar7) {
          uVar7 = 0xff;
        }
      }
      if ((int)uVar7 < *(int *)((int)this + 0x1840)) {
        *(uint *)((int)this + 0x1840) = uVar7;
      }
      if (*(int *)((int)this + 0x1834) < (int)uVar6) {
        *(uint *)((int)this + 0x1834) = uVar6;
      }
      lVar10 = __ftol();
      uVar8 = (uint)*(byte *)(iVar9 + 0x1a + *(int *)((int)this + 0xc));
      lVar11 = __ftol();
      lVar12 = __ftol();
      iVar5 = (((int)lVar11 - (int)lVar10) * 0x100) / (((int)lVar12 - (int)lVar10) + 1);
      uVar7 = iVar5 * 2 - uVar8;
      if (iVar5 < (int)uVar8) {
        uVar6 = ((int)uVar7 < 0) - 1 & uVar7;
        uVar7 = uVar8;
      }
      else {
        uVar6 = uVar8;
        if (0xff < (int)uVar7) {
          uVar7 = 0xff;
        }
      }
      if ((int)uVar7 < *(int *)((int)this + 0x1844)) {
        *(uint *)((int)this + 0x1844) = uVar7;
      }
      if (*(int *)((int)this + 0x1838) < (int)uVar6) {
        *(uint *)((int)this + 0x1838) = uVar6;
      }
      lVar10 = __ftol();
      iVar5 = (int)lVar10;
      lVar10 = __ftol();
      lVar11 = __ftol();
      *(int *)((int)this + 0x1848) = (((int)lVar11 - iVar5) * 0x100) / (((int)lVar10 - iVar5) + 1);
      lVar11 = __ftol();
      *(int *)((int)this + 0x1854) = (((int)lVar11 - iVar5) * 0x100) / (((int)lVar10 - iVar5) + 1);
      lVar10 = __ftol();
      iVar5 = (int)lVar10;
      lVar10 = __ftol();
      lVar11 = __ftol();
      *(int *)((int)this + 0x184c) = (((int)lVar11 - iVar5) * 0x100) / (((int)lVar10 - iVar5) + 1);
      lVar11 = __ftol();
      *(int *)((int)this + 0x1858) = (((int)lVar11 - iVar5) * 0x100) / (((int)lVar10 - iVar5) + 1);
      lVar10 = __ftol();
      iVar5 = (int)lVar10;
      lVar10 = __ftol();
      lVar11 = __ftol();
      *(int *)((int)this + 0x1850) = (((int)lVar11 - iVar5) * 0x100) / (((int)lVar10 - iVar5) + 1);
      lVar11 = __ftol();
      *(int *)((int)this + 0x185c) = (((int)lVar11 - iVar5) * 0x100) / (((int)lVar10 - iVar5) + 1);
    }
  }
  return;
}

