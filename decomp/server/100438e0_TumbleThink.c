
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CGrenade::TumbleThink(void) */

void __thiscall CGrenade::TumbleThink(CGrenade *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
                    /* 0x438e0  265  ?TumbleThink@CGrenade@@QAEXXZ */
  iVar3 = (**(code **)(*(int *)this + 200))();
  if (iVar3 == 0) {
    FUN_100b0ef0((int)this);
    return;
  }
  FUN_10007fc0((int)this,0.0);
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  if (*(float *)(*(int *)(this + 4) + 0x1e4) - _DAT_100dd618 < *DAT_10122044) {
    FUN_10095d30(0x20,(undefined4 *)&stack0xfffffff0,400,0.1);
  }
  iVar3 = *(int *)(this + 4);
  if (*(float *)(iVar3 + 0x1e4) <= *DAT_10122044) {
    *(code **)(this + 0x74) = Detonate;
  }
  if ((*(int *)(iVar3 + 0x1c0) != 0) && (-0x11 < *(int *)(iVar3 + 0x1c4))) {
    fVar1 = *(float *)(iVar3 + 0x24) * _DAT_100dd614;
    fVar2 = *(float *)(iVar3 + 0x28) * _DAT_100dd614;
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) * _DAT_100dd614;
    *(float *)(iVar3 + 0x24) = fVar1;
    *(float *)(iVar3 + 0x28) = fVar2;
    *(undefined4 *)(*(int *)(this + 4) + 0x138) = 0x3e4ccccd;
  }
  return;
}

