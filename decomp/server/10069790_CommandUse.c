
/* public: void __thiscall CNihilanth::CommandUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CNihilanth::CommandUse
          (CNihilanth *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4
          )

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  
                    /* 0x69790  47  ?CommandUse@CNihilanth@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if (param_3 == 0) {
    piVar3 = (int *)FUN_100af030(0,(byte *)(this + 0x574));
    if (piVar3 != (int *)0x0) {
      bVar2 = FUN_10019450((uint *)(this + 0x160));
      if (CONCAT31(extraout_var,bVar2) != 0) {
        iVar1 = *piVar3;
        uVar4 = FUN_10019410((uint *)(this + 0x160));
        (**(code **)(iVar1 + 0xe0))(uVar4);
      }
    }
  }
  else if ((param_3 == 1) && (*(int *)(this + 0x374) == 0)) {
    *(undefined4 *)(this + 0x374) = 1;
    return;
  }
  return;
}

