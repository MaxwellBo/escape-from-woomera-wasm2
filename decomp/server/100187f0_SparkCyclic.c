
/* public: void __thiscall CEnvSpark::SparkCyclic(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CEnvSpark::SparkCyclic
          (CEnvSpark *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
                    /* 0x187f0  207  ?SparkCyclic@CEnvSpark@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if (*(int *)(this + 0x74) == 0) {
    FUN_10016e20(*(int *)(this + 4),(float *)(*(int *)(this + 4) + 8));
    *(code **)(this + 0x74) = SparkWait;
    (**(code **)(*(int *)this + 8))(*(undefined4 *)(this + 0xb8));
    return;
  }
  *(code **)(this + 0x74) = SparkThink;
  return;
}

