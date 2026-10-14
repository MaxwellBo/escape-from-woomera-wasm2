
/* public: void __thiscall CSprite::AnimateUntilDead(void) */

void __thiscall CSprite::AnimateUntilDead(CSprite *this)

{
                    /* 0x2cb60  11  ?AnimateUntilDead@CSprite@@QAEXXZ */
  if (*(float *)(*(int *)(this + 4) + 0x1e4) < *DAT_10122044) {
    FUN_100b0ef0((int)this);
    return;
  }
  AnimateThink(this);
  (**(code **)(*(int *)this + 8))(0);
  return;
}

