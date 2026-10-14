
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBaseEntity::SUB_FadeOut(void) */

void __thiscall CBaseEntity::SUB_FadeOut(CBaseEntity *this)

{
  int iVar1;
  
                    /* 0x1edb0  190  ?SUB_FadeOut@CBaseEntity@@QAEXXZ */
  iVar1 = *(int *)(this + 4);
  if (_DAT_100e0ec4 < *(float *)(iVar1 + 0x14c)) {
    *(float *)(iVar1 + 0x14c) = *(float *)(iVar1 + 0x14c) - _DAT_100e0ec4;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  *(undefined4 *)(iVar1 + 0x14c) = 0;
  (**(code **)(*(int *)this + 8))(0x3e4ccccd);
  *(code **)(this + 0x74) = SUB_Remove;
  return;
}

