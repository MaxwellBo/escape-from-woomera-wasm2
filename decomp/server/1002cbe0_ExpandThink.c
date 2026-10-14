
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSprite::ExpandThink(void) */

void __thiscall CSprite::ExpandThink(CSprite *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
                    /* 0x2cbe0  90  ?ExpandThink@CSprite@@QAEXXZ */
  fVar1 = *DAT_10122044;
  fVar2 = *(float *)(this + 0xb8);
  iVar3 = *(int *)(this + 4);
  *(float *)(iVar3 + 0x144) =
       (fVar1 - fVar2) * *(float *)(iVar3 + 0x1f8) + *(float *)(iVar3 + 0x144);
  iVar3 = *(int *)(this + 4);
  *(float *)(iVar3 + 0x14c) =
       *(float *)(iVar3 + 0x14c) - (fVar1 - fVar2) * *(float *)(iVar3 + 0x160);
  if (*(float *)(*(int *)(this + 4) + 0x14c) <= _DAT_100dd5f8) {
    *(undefined4 *)(*(int *)(this + 4) + 0x14c) = 0;
    FUN_100b0ef0((int)this);
    return;
  }
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  *(float *)(this + 0xb8) = *DAT_10122044;
  return;
}

