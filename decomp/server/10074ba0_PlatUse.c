
/* public: void __thiscall CFuncPlat::PlatUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CFuncPlat::PlatUse(CFuncPlat *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
                  float param_4)

{
  int iVar1;
  
                    /* 0x74ba0  166  ?PlatUse@CFuncPlat@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar1 = (**(code **)(*(int *)this + 0x11c))();
  if (iVar1 == 0) {
    *(undefined4 *)(this + 0x7c) = 0;
    if (*(int *)(this + 0xdc) != 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_1001a140(param_3,(uint)(*(int *)(this + 0xdc) == 1));
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(this + 0xdc) != 0) {
      if (*(int *)(this + 0xdc) != 1) {
        return;
      }
      (**(code **)(*(int *)this + 8))(0x3c23d70a);
      *(code **)(this + 0x74) = CallGoUp;
      return;
    }
  }
  (**(code **)(*(int *)this + 8))(0x3c23d70a);
  *(code **)(this + 0x74) = CallGoDown;
  return;
}

