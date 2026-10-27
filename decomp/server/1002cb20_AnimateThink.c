
/* public: void __thiscall CSprite::AnimateThink(void) */

void __thiscall CSprite::AnimateThink(CSprite *this)

{
                    /* 0x2cb20  10  ?AnimateThink@CSprite@@QAEXXZ */
  FUN_1002cc70(this,(*DAT_10122044 - *(float *)(this + 0xb8)) *
                    *(float *)(*(int *)(this + 4) + 0x138));
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  *(float *)(this + 0xb8) = *DAT_10122044;
  return;
}

