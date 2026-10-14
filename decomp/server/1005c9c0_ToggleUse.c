
/* public: void __thiscall CMonsterMaker::ToggleUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CMonsterMaker::ToggleUse
          (CMonsterMaker *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  
                    /* 0x5c9c0  253  ?ToggleUse@CMonsterMaker@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z
                        */
  iVar1 = FUN_1001a140(param_3,*(int *)(this + 0x31c));
  if (iVar1 != 0) {
    if (*(int *)(this + 0x31c) != 0) {
      *(undefined4 *)(this + 0x31c) = 0;
      *(undefined4 *)(this + 0x74) = 0;
      (**(code **)(*(int *)this + 8))(0);
      return;
    }
    *(undefined4 *)(this + 0x31c) = 1;
    *(code **)(this + 0x74) = MakerThink;
    (**(code **)(*(int *)this + 8))(0);
  }
  return;
}

