
/* public: void __thiscall CBaseEntity::SUB_StartFadeOut(void) */

void __thiscall CBaseEntity::SUB_StartFadeOut(CBaseEntity *this)

{
  int iVar1;
  
                    /* 0x1ed40  192  ?SUB_StartFadeOut@CBaseEntity@@QAEXXZ */
  if (*(int *)(*(int *)(this + 4) + 0x148) == 0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x14c) = 0x437f0000;
    *(undefined4 *)(*(int *)(this + 4) + 0x148) = 2;
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 0;
  iVar1 = *(int *)(this + 4);
  *(undefined4 *)(iVar1 + 0x5c) = DAT_10121dd8;
  *(undefined4 *)(iVar1 + 0x60) = DAT_10121ddc;
  *(undefined4 *)(iVar1 + 100) = DAT_10121de0;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  *(code **)(this + 0x74) = SUB_FadeOut;
  return;
}

