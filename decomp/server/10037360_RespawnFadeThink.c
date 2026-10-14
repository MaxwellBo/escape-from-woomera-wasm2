
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBreakable::RespawnFadeThink(void) */

void __thiscall CBreakable::RespawnFadeThink(CBreakable *this)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x37360  178  ?RespawnFadeThink@CBreakable@@QAEXXZ */
  iVar1 = *(int *)(this + 4);
  lVar2 = __ftol();
  *(float *)(iVar1 + 0x14c) = (float)(int)lVar2;
  if (*(float *)(*(int *)(this + 4) + 0x14c) < (float)*(int *)(this + 0xe8)) {
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x148) = *(undefined4 *)(this + 0xec);
  return;
}

