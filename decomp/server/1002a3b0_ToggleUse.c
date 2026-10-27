
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CLightning::ToggleUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CLightning::ToggleUse
          (CLightning *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4
          )

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
                    /* 0x2a3b0  252  ?ToggleUse@CLightning@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar1 = FUN_1001a140(param_3,*(int *)(this + 0xb8));
  if (iVar1 != 0) {
    if (*(int *)(this + 0xb8) != 0) {
      *(undefined4 *)(this + 0xb8) = 0;
      FUN_10098bd0(this,(int *)this,0,0);
      *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 0x80;
      FUN_10019680((int)this);
      return;
    }
    *(undefined4 *)(this + 0xb8) = 1;
    FUN_10098bd0(this,(int *)this,1,0);
    FUN_1002b030(this);
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) & 0xffffff7f;
    puVar2 = (undefined4 *)FUN_10029570((int)this);
    puVar3 = (undefined4 *)FUN_10029530((int)this);
    FUN_10029b30(this,puVar3,puVar2);
    if (_DAT_100dd5f8 < *(float *)(*(int *)(this + 4) + 0x1e0)) {
      (**(code **)(*(int *)this + 8))(0);
      *(undefined4 *)(*(int *)(this + 4) + 0x1e4) = *DAT_10122044;
    }
  }
  return;
}

