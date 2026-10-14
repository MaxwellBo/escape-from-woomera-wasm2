
/* private: void __thiscall CApache::StartupUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CApache::StartupUse(CApache *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
                   float param_4)

{
                    /* 0x95f0  225  ?StartupUse@CApache@@AAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  *(code **)(this + 0x74) = HuntThink;
  *(code **)(this + 0x78) = FlyTouch;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  *(undefined4 *)(this + 0x7c) = 0;
  return;
}

