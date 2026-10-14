
/* public: void __thiscall CLightning::StrikeUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CLightning::StrikeUse
          (CLightning *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4
          )

{
  int iVar1;
  
                    /* 0x2a490  232  ?StrikeUse@CLightning@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar1 = FUN_1001a140(param_3,*(int *)(this + 0xb8));
  if (iVar1 != 0) {
    if (*(int *)(this + 0xb8) == 0) {
      *(code **)(this + 0x74) = StrikeThink;
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
    }
    else {
      *(undefined4 *)(this + 0xb8) = 0;
      *(undefined4 *)(this + 0x74) = 0;
    }
    if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 2) == 0) {
      *(undefined4 *)(this + 0x7c) = 0;
    }
  }
  return;
}

