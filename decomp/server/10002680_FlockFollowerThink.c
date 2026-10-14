
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CFlockingFlyer::FlockFollowerThink(void) */

void __thiscall CFlockingFlyer::FlockFollowerThink(CFlockingFlyer *this)

{
  CFlockingFlyer *pCVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
                    /* 0x2680  107  ?FlockFollowerThink@CFlockingFlyer@@QAEXXZ */
  (**(code **)(*(int *)this + 8))();
  pCVar1 = *(CFlockingFlyer **)(this + 0x308);
  if ((pCVar1 == this) || (pCVar1 == (CFlockingFlyer *)0x0)) {
    *(code **)(this + 0x74) = FlockLeaderThink;
    return;
  }
  iVar4 = *(int *)(pCVar1 + 4);
  iVar2 = *(int *)(this + 4);
  fVar6 = *(float *)(iVar4 + 8) - *(float *)(iVar2 + 8);
  fVar7 = *(float *)(iVar4 + 0xc) - *(float *)(iVar2 + 0xc);
  fStack_14 = *(float *)(iVar4 + 0x10) - *(float *)(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
  fVar3 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fStack_14 * fStack_14);
  iVar4 = (**(code **)(*(int *)this + 0x14c))(*(undefined4 *)(this + 0x308));
  if (iVar4 == 0) {
    iVar4 = *(int *)(*(int *)(this + 0x308) + 4);
LAB_10002781:
    fVar5 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
                 *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                 *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20)) * (float)_DAT_100dd648;
LAB_100027ab:
    *(float *)(this + 0x334) = fVar5;
  }
  else {
    if (_DAT_100dd658 < 0.1) {
      iVar4 = *(int *)(*(int *)(this + 0x308) + 4);
      fVar5 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
                   *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                   *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20)) * (float)_DAT_100dd650;
      goto LAB_100027ab;
    }
    if (0.1 < _DAT_100dd61c) {
      iVar4 = *(int *)(*(int *)(this + 0x308) + 4);
      goto LAB_10002781;
    }
  }
  FUN_10001d80((int)this);
  iVar4 = *(int *)(this + 4);
  *(float *)(iVar4 + 0x1f8) =
       SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
            *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
            *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24));
  iVar4 = *(int *)(this + 4);
  fVar5 = *(float *)(iVar4 + 0x20);
  fVar5 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
               *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) + fVar5 * fVar5);
  if (fVar5 == _DAT_100dd5f8) {
    fStack_14 = 0.0;
    fStack_10 = 0.0;
    fStack_c = 1.0;
  }
  else {
    fVar5 = _DAT_100dd618 / fVar5;
    FUN_10001d60(&fStack_14,fVar5 * *(float *)(iVar4 + 0x20),fVar5 * *(float *)(iVar4 + 0x24),
                 fVar5 * *(float *)(iVar4 + 0x28));
  }
  fVar5 = _DAT_100dd658;
  iVar4 = *(int *)(this + 4);
  *(float *)(iVar4 + 0x20) = fStack_14;
  *(float *)(iVar4 + 0x24) = fStack_10;
  *(float *)(iVar4 + 0x28) = fStack_c;
  if (fVar5 < 0.1) {
    if (fVar3 == _DAT_100dd5f8) {
      fVar7 = 1.0;
      fVar6 = 0.0;
      fVar5 = 0.0;
    }
    else {
      fVar5 = _DAT_100dd618 / fVar3;
      fVar7 = fVar7 * fVar5;
      fVar6 = fVar6 * fVar5;
      fVar5 = fVar5 * fVar3;
    }
    FUN_10001d60(&fStack_14,fVar5,fVar6,fVar7);
    iVar4 = *(int *)(this + 4);
    fStack_14 = (fStack_14 + *(float *)(iVar4 + 0x20)) * _DAT_100dd614;
    fStack_10 = (fStack_10 + *(float *)(iVar4 + 0x24)) * _DAT_100dd614;
    *(float *)(iVar4 + 0x20) = fStack_14;
    fStack_c = (fStack_c + *(float *)(iVar4 + 0x28)) * _DAT_100dd614;
    *(float *)(iVar4 + 0x24) = fStack_10;
    *(float *)(iVar4 + 0x28) = fStack_c;
  }
  if (_DAT_100dd640 < *(float *)(this + 0x334)) {
    *(undefined4 *)(this + 0x334) = 0x437a0000;
  }
  iVar4 = *(int *)(this + 4);
  if (*(float *)(this + 0x334) <= *(float *)(iVar4 + 0x1f8)) {
    if (*(float *)(iVar4 + 0x1f8) <= *(float *)(this + 0x334)) goto LAB_1000298d;
    fVar6 = *(float *)(iVar4 + 0x1f8) - _DAT_100dd63c;
  }
  else {
    fVar6 = *(float *)(iVar4 + 0x1f8) + _DAT_100dd63c;
  }
  *(float *)(iVar4 + 0x1f8) = fVar6;
LAB_1000298d:
  iVar4 = *(int *)(this + 4);
  fVar6 = *(float *)(iVar4 + 0x1f8);
  FUN_10001d60(&fStack_14,fVar6 * *(float *)(iVar4 + 0x20),fVar6 * *(float *)(iVar4 + 0x24),
               fVar6 * *(float *)(iVar4 + 0x28));
  iVar4 = *(int *)(this + 4);
  *(float *)(iVar4 + 0x20) = fStack_14;
  *(float *)(iVar4 + 0x24) = fStack_10;
  *(float *)(iVar4 + 0x28) = fStack_c;
  FUN_100018e0((int)this);
  return;
}

