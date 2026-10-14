
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSpeaker::ToggleUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CSpeaker::ToggleUse(CSpeaker *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
                   float param_4)

{
                    /* 0x958d0  254  ?ToggleUse@CSpeaker@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if (param_3 != 3) {
    if (*(float *)(this + 0x54) <= (float)_DAT_100de1e8) {
      if (param_3 == 0) {
        return;
      }
    }
    else if (param_3 == 1) {
      return;
    }
  }
  if (param_3 == 1) {
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  if (param_3 == 0) {
    FUN_10019680((int)this);
    return;
  }
  if (*(float *)(this + 0x54) <= (float)_DAT_100de1e8) {
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  FUN_10019680((int)this);
  return;
}

