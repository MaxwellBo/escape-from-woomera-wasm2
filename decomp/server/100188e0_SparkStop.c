
/* public: void __thiscall CEnvSpark::SparkStop(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CEnvSpark::SparkStop
          (CEnvSpark *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
                    /* 0x188e0  209  ?SparkStop@CEnvSpark@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  *(code **)(this + 0x7c) = SparkStart;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  return;
}

