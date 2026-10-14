
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CControllerZapBall::AnimateThink(void) */

void __thiscall CControllerZapBall::AnimateThink(CControllerZapBall *this)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x24390  9  ?AnimateThink@CControllerZapBall@@AAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  iVar1 = *(int *)(this + 4);
  lVar2 = __ftol();
  *(float *)(iVar1 + 0x130) = (float)(((int)lVar2 + 1) % 0xb);
  iVar1 = *(int *)(this + 4);
  if ((_DAT_100dd5d8 < *DAT_10122044 - *(float *)(iVar1 + 0x1e4)) ||
     (SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
           *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
           *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) < _DAT_100dd63c)) {
    *(undefined4 *)(this + 0x78) = 0;
    FUN_100b0ef0((int)this);
  }
  return;
}

