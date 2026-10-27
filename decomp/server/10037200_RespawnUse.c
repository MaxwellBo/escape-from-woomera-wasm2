
/* public: void __thiscall CBreakable::RespawnUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CBreakable::RespawnUse
          (CBreakable *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4
          )

{
                    /* 0x37200  180  ?RespawnUse@CBreakable@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if (param_3 == 0) {
    if (0 < *(int *)(this + 0xe0)) {
      *(code **)(this + 0x74) = RespawnThink;
      (**(code **)(*(int *)this + 8))((float)*(int *)(this + 0xe0));
      return;
    }
  }
  else {
    *(code **)(this + 0x74) = RespawnThink;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
  }
  return;
}

