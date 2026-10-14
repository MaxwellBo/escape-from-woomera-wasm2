
/* public: void __thiscall CGrenade::DetonateUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CGrenade::DetonateUse
          (CGrenade *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
                    /* 0x43170  70  ?DetonateUse@CGrenade@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  *(code **)(this + 0x74) = Detonate;
  (**(code **)(*(int *)this + 8))(0);
  return;
}

