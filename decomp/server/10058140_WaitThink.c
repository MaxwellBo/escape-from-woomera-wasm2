
/* public: void __thiscall CLightFader::WaitThink(void) */

void __thiscall CLightFader::WaitThink(CLightFader *this)

{
                    /* 0x58140  275  ?WaitThink@CLightFader@@QAEXXZ */
  FUN_100577d0(*(void **)(this + 0xb8));
  *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

