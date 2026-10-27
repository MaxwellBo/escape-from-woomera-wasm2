
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CRenderFxFader::FadeThink(void) */

void __thiscall CRenderFxFader::FadeThink(CRenderFxFader *this)

{
  CRenderFxFader *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  
                    /* 0xa1690  97  ?FadeThink@CRenderFxFader@@QAEXXZ */
  this_00 = this + 0xec;
  iVar7 = FUN_10019410((uint *)this_00);
  if (iVar7 == 0) {
    CBaseEntity::SUB_Remove((CBaseEntity *)this);
    return;
  }
  fVar1 = (*DAT_10122044 - *(float *)(this + 0xb8)) / *(float *)(this + 0xbc);
  if (_DAT_100dd618 <= fVar1) {
    iVar7 = *(int *)(this + 200);
    iVar10 = *(int *)(this + 0xc4);
    iVar8 = FUN_10019460((uint *)this_00);
    *(float *)(*(int *)(iVar8 + 4) + 0x14c) = (float)(iVar7 + iVar10);
    fVar1 = *(float *)(this + 0xd8);
    fVar2 = *(float *)(this + 0xcc);
    fVar3 = *(float *)(this + 0xdc);
    fVar4 = *(float *)(this + 0xd0);
    fVar5 = *(float *)(this + 0xe0);
    fVar6 = *(float *)(this + 0xd4);
    iVar7 = FUN_10019460((uint *)this_00);
    iVar7 = *(int *)(iVar7 + 4);
    *(float *)(iVar7 + 0x150) = fVar1 + fVar2;
    *(float *)(iVar7 + 0x154) = fVar3 + fVar4;
    *(float *)(iVar7 + 0x158) = fVar5 + fVar6;
    fVar1 = *(float *)(this + 0xe8);
    fVar2 = *(float *)(this + 0xe4);
    iVar7 = FUN_10019460((uint *)this_00);
    uVar11 = 0;
    iVar10 = 3;
    *(float *)(*(int *)(iVar7 + 4) + 0x144) = fVar1 + fVar2;
    piVar9 = (int *)FUN_10019410((uint *)this_00);
    FUN_10098bd0(this,piVar9,iVar10,uVar11);
    if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) != 0) {
      iVar7 = FUN_10019460((uint *)this_00);
      *(code **)(iVar7 + 0x74) = CBaseEntity::SUB_Remove;
      piVar9 = (int *)FUN_10019460((uint *)this_00);
      (**(code **)(*piVar9 + 8))(0x3dcccccd);
    }
    FUN_10019420(this_00,0);
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
    return;
  }
  iVar7 = *(int *)(this + 200);
  iVar10 = *(int *)(this + 0xc4);
  iVar8 = FUN_10019460((uint *)this_00);
  *(float *)(*(int *)(iVar8 + 4) + 0x14c) = (float)iVar7 * fVar1 + (float)iVar10;
  fVar2 = *(float *)(this + 0xd8);
  fVar3 = *(float *)(this + 0xcc);
  iVar7 = FUN_10019460((uint *)this_00);
  *(float *)(*(int *)(iVar7 + 4) + 0x150) = fVar1 * fVar2 + fVar3;
  fVar2 = *(float *)(this + 0xdc);
  fVar3 = *(float *)(this + 0xd0);
  iVar7 = FUN_10019460((uint *)this_00);
  *(float *)(*(int *)(iVar7 + 4) + 0x154) = fVar1 * fVar2 + fVar3;
  fVar2 = *(float *)(this + 0xe0);
  fVar3 = *(float *)(this + 0xd4);
  iVar7 = FUN_10019460((uint *)this_00);
  *(float *)(*(int *)(iVar7 + 4) + 0x158) = fVar1 * fVar2 + fVar3;
  fVar2 = *(float *)(this + 0xe8);
  fVar3 = *(float *)(this + 0xe4);
  iVar7 = FUN_10019460((uint *)this_00);
  *(float *)(*(int *)(iVar7 + 4) + 0x144) = fVar1 * fVar2 + fVar3;
  (**(code **)(*(int *)this + 8))(*(undefined4 *)(this + 0xc0));
  return;
}

