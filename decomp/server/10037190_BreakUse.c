
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBreakable::BreakUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CBreakable::BreakUse
          (CBreakable *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4
          )

{
  bool bVar1;
  undefined3 extraout_var;
  
                    /* 0x37190  26  ?BreakUse@CBreakable@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if ((*(int *)(this + 0xe0) == 0) || (param_3 != 1)) {
    bVar1 = FUN_10037dd0((int)this);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      *(undefined4 *)(*(int *)(this + 4) + 0x54) = *(undefined4 *)(this + 0xd4);
      FUN_100af200(*(int *)(this + 4) + 0x50);
      _DAT_10121df8 = *(undefined4 *)(DAT_10122044 + 0x28);
      _DAT_10121dfc = *(undefined4 *)(DAT_10122044 + 0x2c);
      _DAT_10121e00 = *(undefined4 *)(DAT_10122044 + 0x30);
      Die(this);
    }
  }
  return;
}

