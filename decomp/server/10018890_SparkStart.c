
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEnvSpark::SparkStart(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CEnvSpark::SparkStart
          (CEnvSpark *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
  int iVar1;
  float10 fVar2;
  
                    /* 0x18890  208  ?SparkStart@CEnvSpark@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar1 = *(int *)this;
  *(code **)(this + 0x7c) = SparkStop;
  *(code **)(this + 0x74) = SparkThink;
  *(undefined4 *)(this + 0xbc) = 2;
  fVar2 = (float10)(*DAT_10121f74)(0,*(undefined4 *)(this + 0xb8));
  (**(code **)(iVar1 + 8))((float)(fVar2 + (float10)_DAT_100dfb80));
  return;
}

