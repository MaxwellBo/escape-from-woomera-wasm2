
/* public: void __thiscall CBaseTurret::TurretUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CBaseTurret::TurretUse
          (CBaseTurret *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  
                    /* 0xac6b0  269  ?TurretUse@CBaseTurret@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar1 = FUN_1001a140(param_3,*(int *)(this + 0x330));
  if (iVar1 != 0) {
    if (*(int *)(this + 0x330) != 0) {
      FUN_10019420(this + 0x160,0);
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
      *(undefined4 *)(this + 0x338) = 0;
      *(code **)(this + 0x74) = Retire;
      return;
    }
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) != 0) {
      *(undefined4 *)(this + 0x338) = 1;
    }
    *(code **)(this + 0x74) = Deploy;
  }
  return;
}

