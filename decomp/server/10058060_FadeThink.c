
/* public: void __thiscall CLightFader::FadeThink(void) */

void __thiscall CLightFader::FadeThink(CLightFader *this)

{
  CLightFader CVar1;
  longlong lVar2;
  
                    /* 0x58060  96  ?FadeThink@CLightFader@@QAEXXZ */
  if (*DAT_10122044 < *(float *)(this + 0xc0)) {
    CVar1 = this[0xbd];
    lVar2 = __ftol();
    this[0xbf] = (CLightFader)0x0;
    this[0xbe] = (CLightFader)((char)lVar2 + (char)CVar1);
    FUN_100577a0(*(void **)(this + 0xb8),(int)(this + (0xbe - (int)DAT_10122044[0x26])));
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  FUN_100577a0(*(void **)(this + 0xb8),*(int *)(this + 0xc4));
  if (-1 < *(int *)(this + 0xcc)) {
    *(code **)(this + 0x74) = WaitThink;
    (**(code **)(*(int *)this + 8))((float)*(int *)(this + 0xcc));
    return;
  }
  *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

