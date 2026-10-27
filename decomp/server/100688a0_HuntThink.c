
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CNihilanth::HuntThink(void) */

void __thiscall CNihilanth::HuntThink(CNihilanth *this)

{
  CNihilanth *pCVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar5;
  float fVar6;
  float fStack_18;
  float fStack_14;
  
                    /* 0x688a0  124  ?HuntThink@CNihilanth@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  FUN_10008240((int *)this);
  FUN_10007fc0((int)this,0.0);
  FUN_10067aa0(this);
  if (*(float *)(*(int *)(this + 4) + 0x160) <= _DAT_100dd5f8) {
    *(code **)(this + 0x74) = DyingThink;
    *(undefined4 *)(this + 0xd4) = 1;
    return;
  }
  if (*(float *)(*(int *)(this + 4) + 0x160) < DAT_10126ae8) {
    iVar4 = FUN_10068ea0((int)this);
    if (iVar4 != 0) {
      *(float *)(*(int *)(this + 4) + 0x160) =
           DAT_10126ae8 * _DAT_100ed290 + *(float *)(*(int *)(this + 4) + 0x160);
    }
  }
  if (*(int *)(this + 0xd4) != 0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x130) = 0;
    FUN_10068190((int *)this);
    FUN_10008190((int)this);
    *(float *)(*(int *)(this + 4) + 0x138) =
         (float)_DAT_100e4138 - *(float *)(*(int *)(this + 4) + 0x160) / DAT_10126ae8;
  }
  pCVar1 = this + 0x160;
  bVar3 = FUN_10019450((uint *)pCVar1);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    bVar3 = FUN_10019450((uint *)(this + 0x380));
    if (CONCAT31(extraout_var_00,bVar3) == 0) {
      iVar4 = *(int *)this;
      uVar5 = FUN_10019410((uint *)pCVar1);
      iVar4 = (**(code **)(iVar4 + 0x110))(uVar5);
      if (iVar4 == 0) {
        fVar6 = *(float *)(this + 0x42c) + _DAT_100dd63c;
        if (_DAT_100e08e0 <= *(float *)(this + 0x42c) + _DAT_100dd63c) {
          fVar6 = _DAT_100e08e0;
        }
        *(float *)(this + 0x42c) = fVar6;
      }
      else {
        if (*(float *)(this + 0x36c) < *DAT_10122044 - _DAT_100dd5d8) {
          *(float *)(this + 0x370) = *DAT_10122044;
        }
        *(float *)(this + 0x36c) = *DAT_10122044;
        iVar4 = FUN_10019460((uint *)pCVar1);
        iVar4 = *(int *)(iVar4 + 4);
        *(float *)(this + 0x334) = *(float *)(iVar4 + 8);
        *(undefined4 *)(this + 0x338) = *(undefined4 *)(iVar4 + 0xc);
        *(undefined4 *)(this + 0x33c) = *(undefined4 *)(iVar4 + 0x10);
        iVar4 = *(int *)(this + 4);
        fVar6 = *(float *)(this + 0x334) - *(float *)(iVar4 + 8);
        fStack_18 = *(float *)(this + 0x338) - *(float *)(iVar4 + 0xc);
        fStack_14 = *(float *)(this + 0x33c) - *(float *)(iVar4 + 0x10);
        fVar2 = SQRT(fVar6 * fVar6 + fStack_18 * fStack_18 + fStack_14 * fStack_14);
        if (fVar2 == _DAT_100dd5f8) {
          fVar6 = 0.0;
          fStack_18 = 0.0;
          fStack_14 = 1.0;
        }
        else {
          fVar2 = _DAT_100dd618 / fVar2;
          fVar6 = fVar2 * fVar6;
          fStack_18 = fStack_18 * fVar2;
          fStack_14 = fStack_14 * fVar2;
        }
        *(float *)(this + 0x328) = fVar6;
        *(float *)(this + 0x32c) = fStack_18;
        *(float *)(this + 0x330) = fStack_14;
        *(float *)(this + 0x340) = fVar6;
        *(float *)(this + 0x344) = fStack_18;
        *(float *)(this + 0x348) = fStack_14;
        uVar5 = *(undefined4 *)(iVar4 + 0xc);
        *(undefined4 *)(this + 0x34c) = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(this + 0x350) = uVar5;
        *(float *)(this + 0x354) = *(float *)(this + 0x42c) + *(float *)(this + 0x33c);
      }
    }
  }
  if (*(float *)(this + 0x35c) < *(float *)(this + 0x354)) {
    *(undefined4 *)(this + 0x354) = *(undefined4 *)(this + 0x35c);
  }
  if (*(float *)(this + 0x354) < *(float *)(this + 0x358)) {
    *(undefined4 *)(this + 0x354) = *(undefined4 *)(this + 0x358);
  }
  FUN_10068b70((int)this);
  return;
}

