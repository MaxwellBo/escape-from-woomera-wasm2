
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSquidSpit::Animate(void) */

void __thiscall CSquidSpit::Animate(CSquidSpit *this)

{
  int iVar1;
  bool bVar2;
  
                    /* 0x13030  8  ?Animate@CSquidSpit@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  iVar1 = *(int *)(this + 4);
  bVar2 = *(float *)(iVar1 + 0x130) != _DAT_100dd5f8;
  *(float *)(iVar1 + 0x130) = *(float *)(iVar1 + 0x130) + _DAT_100dd618;
  if ((bVar2) && ((float)*(int *)(this + 0xb8) < *(float *)(*(int *)(this + 4) + 0x130))) {
    *(undefined4 *)(*(int *)(this + 4) + 0x130) = 0;
  }
  return;
}

