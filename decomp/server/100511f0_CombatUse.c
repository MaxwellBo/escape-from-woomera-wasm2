
/* public: void __thiscall CIchthyosaur::CombatUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CIchthyosaur::CombatUse
          (CIchthyosaur *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  
                    /* 0x511f0  46  ?CombatUse@CIchthyosaur@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar1 = FUN_1001a140(param_3,*(int *)(this + 0x33c));
  if (iVar1 != 0) {
    *(uint *)(this + 0x33c) = (uint)(*(int *)(this + 0x33c) == 0);
  }
  return;
}

