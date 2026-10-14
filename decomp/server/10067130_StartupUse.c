
/* public: void __thiscall CNihilanth::StartupUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CNihilanth::StartupUse
          (CNihilanth *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4
          )

{
                    /* 0x67130  226  ?StartupUse@CNihilanth@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  *(code **)(this + 0x74) = HuntThink;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  *(code **)(this + 0x7c) = CommandUse;
  return;
}

