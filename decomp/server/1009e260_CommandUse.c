
/* public: void __thiscall CTentacle::CommandUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CTentacle::CommandUse
          (CTentacle *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
                    /* 0x9e260  49  ?CommandUse@CTentacle@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if (param_3 == 0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x16c) = 0;
    *(code **)(this + 0x74) = DieThink;
    *(undefined4 *)(this + 0x30c) = 0x30;
  }
  else if (param_3 == 1) {
    if (param_1 != (CBaseEntity *)0x0) {
      FUN_10095d30(2,(undefined4 *)(*(int *)(param_1 + 4) + 8),0x400,1.0);
      return;
    }
  }
  else if (param_3 == 3) {
    *(undefined4 *)(*(int *)(this + 4) + 0x16c) = 0;
    *(code **)(this + 0x74) = DieThink;
    *(undefined4 *)(this + 0x30c) = 0x2c;
    return;
  }
  return;
}

