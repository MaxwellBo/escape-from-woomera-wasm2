
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBMortar::Animate(void) */

void __thiscall CBMortar::Animate(CBMortar *this)

{
  int iVar1;
  bool bVar2;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
                    /* 0x10840  7  ?Animate@CBMortar@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  if (*(float *)(*(int *)(this + 4) + 0x1e4) < *DAT_10122044) {
    *(float *)(*(int *)(this + 4) + 0x1e4) = *DAT_10122044 + (float)_DAT_100dd608;
    iVar1 = *(int *)(this + 4);
    fStack_14 = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                     *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                     *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20));
    if (fStack_14 == _DAT_100dd5f8) {
      fStack_18 = 0.0;
      fStack_14 = 1.0;
      fStack_10 = _DAT_100dd5f8;
    }
    else {
      fStack_14 = _DAT_100dd618 / fStack_14;
      fStack_10 = fStack_14 * *(float *)(iVar1 + 0x20);
      fStack_18 = fStack_14 * *(float *)(iVar1 + 0x24);
      fStack_14 = fStack_14 * *(float *)(iVar1 + 0x28);
    }
    fStack_10 = -fStack_10;
    fStack_c = -fStack_18;
    fStack_8 = -fStack_14;
    FUN_100106a0((undefined4 *)(iVar1 + 8),&fStack_10,DAT_10121cc4,3);
  }
  iVar1 = *(int *)(this + 4);
  bVar2 = *(float *)(iVar1 + 0x130) != _DAT_100dd5f8;
  *(float *)(iVar1 + 0x130) = *(float *)(iVar1 + 0x130) + _DAT_100dd618;
  if ((bVar2) && ((float)*(int *)(this + 0xb8) < *(float *)(*(int *)(this + 4) + 0x130))) {
    *(undefined4 *)(*(int *)(this + 4) + 0x130) = 0;
  }
  return;
}

