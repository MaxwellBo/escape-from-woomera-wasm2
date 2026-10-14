
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CPendulum::SwingThink(void) */

void __thiscall CPendulum::SwingThink(CPendulum *this)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float10 fVar4;
  CPendulum *pCVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
                    /* 0x12ae0  236  ?SwingThink@CPendulum@@QAEXXZ */
  fVar4 = FUN_10099970((byte)*(undefined4 *)(*(int *)(this + 4) + 0x1a0),
                       (float *)(*(int *)(this + 4) + 0x50),(float *)(this + 0xd0));
  fVar6 = *DAT_10122044;
  fVar1 = *(float *)(this + 0xc0);
  *(float *)(this + 0xc0) = *DAT_10122044;
  if ((fVar4 <= (float10)_DAT_100dd5f8) || (*(float *)(this + 0xb8) <= _DAT_100dd5f8)) {
    iVar3 = *(int *)(this + 4);
    fVar6 = (fVar6 - fVar1) * *(float *)(this + 0xb8) + *(float *)(iVar3 + 0x1f8);
  }
  else {
    iVar3 = *(int *)(this + 4);
    fVar6 = *(float *)(iVar3 + 0x1f8) - (fVar6 - fVar1) * *(float *)(this + 0xb8);
  }
  *(float *)(iVar3 + 0x1f8) = fVar6;
  iVar3 = *(int *)(this + 4);
  if (*(float *)(iVar3 + 0x1f8) <= *(float *)(this + 200)) {
    if (*(float *)(iVar3 + 0x1f8) < -*(float *)(this + 200)) {
      *(float *)(iVar3 + 0x1f8) = -*(float *)(this + 200);
    }
  }
  else {
    *(undefined4 *)(iVar3 + 0x1f8) = *(undefined4 *)(this + 200);
  }
  iVar3 = *(int *)(this + 4);
  fVar6 = *(float *)(iVar3 + 0x1f8);
  FUN_10063ac0((int)this,fVar6 * *(float *)(iVar3 + 0x44),fVar6 * *(float *)(iVar3 + 0x48),
               fVar6 * *(float *)(iVar3 + 0x4c));
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  bVar2 = *(float *)(this + 0xc4) != _DAT_100dd5f8;
  *(code **)(this + 0x74) = SwingThink;
  if (bVar2) {
    fVar6 = *(float *)(this + 0xcc) - fVar6 * *(float *)(this + 0xcc) * *(float *)(this + 0xc4);
    fVar1 = (float)_DAT_100dfca8;
    *(float *)(this + 0xcc) = fVar6;
    if (fVar6 < fVar1) {
      fVar6 = *(float *)(this + 0xd0);
      uVar7 = *(undefined4 *)(this + 0xd4);
      uVar8 = *(undefined4 *)(this + 0xd8);
      pCVar5 = this;
      FUN_100635b0((int)this);
      *(undefined4 *)(*(int *)(this + 4) + 0x1f8) = 0;
      (*DAT_10121efc)(1,s___CANCELLING_pendulum_think__10103cf4,pCVar5,fVar6,uVar7,uVar8);
      FUN_10019680((int)this);
      FUN_10063ac0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
      return;
    }
    iVar3 = *(int *)(this + 4);
    if (fVar6 < *(float *)(iVar3 + 0x1f8)) {
      *(float *)(iVar3 + 0x1f8) = fVar6;
      return;
    }
    if (*(float *)(iVar3 + 0x1f8) < -fVar6) {
      *(float *)(iVar3 + 0x1f8) = -fVar6;
      return;
    }
  }
  return;
}

