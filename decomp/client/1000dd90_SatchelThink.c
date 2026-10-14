
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CSatchelCharge::SatchelThink(void) */

void __thiscall CSatchelCharge::SatchelThink(CSatchelCharge *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CBasePlayerItem *this_00;
  
                    /* 0xdd90  232  ?SatchelThink@CSatchelCharge@@AAEXXZ */
  FUN_10008fd0();
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  iVar3 = (**(code **)(*(int *)this + 200))();
  if (iVar3 == 0) {
    CBasePlayerItem::AttemptToMaterialize(this_00);
    return;
  }
  iVar3 = *(int *)(this + 4);
  if ((*(int *)(iVar3 + 0x1c0) == 3) && (*(int *)(iVar3 + 0x1c4) != -0x13)) {
    *(undefined4 *)(iVar3 + 0x108) = 5;
    iVar3 = *(int *)(this + 4);
    fVar1 = *(float *)(iVar3 + 0x24) * _DAT_1005d9d0;
    fVar2 = *(float *)(iVar3 + 0x28) * _DAT_1005d9d0;
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) * _DAT_1005d9d0;
    *(float *)(iVar3 + 0x24) = fVar1;
    *(float *)(iVar3 + 0x28) = fVar2;
    iVar3 = *(int *)(this + 4);
    fVar1 = *(float *)(iVar3 + 0x60) * _DAT_1005d9c4;
    fVar2 = *(float *)(iVar3 + 100) * _DAT_1005d9c4;
    *(float *)(iVar3 + 0x5c) = *(float *)(iVar3 + 0x5c) * _DAT_1005d9c4;
    *(float *)(iVar3 + 0x60) = fVar1;
    *(float *)(iVar3 + 100) = fVar2;
    *(float *)(*(int *)(this + 4) + 0x28) = *(float *)(*(int *)(this + 4) + 0x28) + _DAT_1005d9cc;
    return;
  }
  if ((*(int *)(iVar3 + 0x1c0) != 0) && (*(int *)(iVar3 + 0x1c4) != -0x13)) {
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) - _DAT_1005d9cc;
    return;
  }
  *(undefined4 *)(iVar3 + 0x108) = 10;
  return;
}

