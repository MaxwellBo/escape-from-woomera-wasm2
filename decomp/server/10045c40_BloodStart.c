
/* public: void __thiscall CCineBlood::BloodStart(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CCineBlood::BloodStart
          (CCineBlood *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4
          )

{
                    /* 0x45c40  19  ?BloodStart@CCineBlood@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  *(code **)(this + 0x74) = BloodGush;
  (**(code **)(*(int *)this + 8))(0);
  return;
}

