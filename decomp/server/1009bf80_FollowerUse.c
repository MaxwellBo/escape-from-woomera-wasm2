
/* public: void __thiscall CTalkMonster::FollowerUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CTalkMonster::FollowerUse
          (CTalkMonster *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar3;
  undefined3 extraout_var_01;
  
                    /* 0x9bf80  113  ?FollowerUse@CTalkMonster@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z
                        */
  if ((((*DAT_10122044 < *(float *)(this + 0x360)) || (param_2 == (CBaseEntity *)0x0)) ||
      (iVar2 = (**(code **)(*(int *)param_2 + 0xcc))(), iVar2 == 0)) ||
     (bVar1 = FUN_1009bf50((int *)this), CONCAT31(extraout_var,bVar1) == 0)) {
    return;
  }
  bVar1 = FUN_10019450((uint *)(this + 0x168));
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    piVar3 = (int *)FUN_10019460((uint *)(this + 0x168));
    iVar2 = (**(code **)(*piVar3 + 0xcc))();
    if (iVar2 != 0) {
      (**(code **)(*(int *)this + 0x228))(1);
      return;
    }
  }
  bVar1 = FUN_100995b0((int)this);
  if ((CONCAT31(extraout_var_01,bVar1) == 0) &&
     (((*(uint *)(*(int *)(this + 4) + 0x1a0) & 0x100) == 0 || (*(int *)(this + 0x158) != 0)))) {
    FUN_1009a790(this,(int)param_2,1);
    if (((byte)this[0x2a0] & 1) == 0) {
      FUN_1009beb0(this,(int)param_2);
      *(uint *)(this + 0x308) = *(uint *)(this + 0x308) | 8;
      return;
    }
    (*DAT_10121efc)(2,s_I_m_not_following_you__you_evil_p_10117f2c);
    return;
  }
  (**(code **)(*(int *)this + 0x22c))();
  return;
}

