
/* public: void __thiscall CBaseButton::ButtonUse_IgnorePlayer(class CBaseEntity *,class CBaseEntity
   *,enum USE_TYPE,float) */

void __thiscall
CBaseButton::ButtonUse_IgnorePlayer
          (CBaseButton *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  
                    /* 0x170a0  33
                       ?ButtonUse_IgnorePlayer@CBaseButton@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if ((param_2 != (CBaseEntity *)0x0) &&
     (iVar1 = (**(code **)(*(int *)param_2 + 0xcc))(), iVar1 != 0)) {
    return;
  }
  ButtonUse(this,param_1,param_2,param_3,param_4);
  return;
}

