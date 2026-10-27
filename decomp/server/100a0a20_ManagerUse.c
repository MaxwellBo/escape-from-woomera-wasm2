
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMultiManager::ManagerUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CMultiManager::ManagerUse
          (CMultiManager *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  uint uVar2;
  USE_TYPE UVar3;
  bool bVar4;
  undefined3 extraout_var;
  CMultiManager *this_00;
  float10 fVar5;
  
                    /* 0xa0a20  144  ?ManagerUse@CMultiManager@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z
                        */
  UVar3 = param_3;
  iVar1 = *(int *)(this + 4);
  uVar2 = *(uint *)(iVar1 + 0x1a0);
  if ((uVar2 & 4) != 0) {
    if (*(int *)(this + 0xb8) != 0) {
      if (param_3 == 1) {
        if ((uVar2 & 0x20) == 0) {
          return;
        }
        (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___Loop_a_101193f8,
                        *(int *)(iVar1 + 0x1cc) + (int)DAT_10122044[0x26]);
        return;
      }
      if ((uVar2 & 0x20) != 0) {
        (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___Loop_h_1011948c,
                        *(int *)(iVar1 + 0x1cc) + (int)DAT_10122044[0x26]);
      }
      iVar1 = *(int *)(this + 4);
      *(undefined4 *)(this + 0xb8) = 0;
      if (((*(uint *)(iVar1 + 0x1a0) & 0x80000000) == 0) && ((*(uint *)(iVar1 + 0x1a0) & 8) == 0)) {
        *(undefined4 *)(this + 0x74) = 0;
        if ((*(byte *)(iVar1 + 0x1a0) & 0x20) == 0) {
          return;
        }
        (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___loop_h_10119460,
                        *(int *)(iVar1 + 0x1cc) + (int)DAT_10122044[0x26]);
        return;
      }
      *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
      (**(code **)(*(int *)this + 8))();
      *(undefined4 *)(this + 0x7c) = 0;
      if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) == 0) {
        return;
      }
      (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___loop_h_1011942c,
                      *(int *)(*(int *)(this + 4) + 0x1cc) + (int)DAT_10122044[0x26]);
      return;
    }
    if (param_3 == 0) {
      if ((uVar2 & 0x20) == 0) {
        return;
      }
      (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___Loop_a_101193c4,
                      *(int *)(iVar1 + 0x1cc) + (int)DAT_10122044[0x26]);
      return;
    }
  }
  bVar4 = FUN_100b0030(*(int *)(this + 0x150),param_1);
  if (CONCAT31(extraout_var,bVar4) == 0) {
    if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) != 0) {
      (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___Can_t_10119380,
                      *(int *)(*(int *)(this + 4) + 0x1cc) + (int)DAT_10122044[0x26],
                      (int)DAT_10122044[0x26] + *(int *)(this + 0x150));
      return;
    }
  }
  else if (((*(uint *)(*(int *)(this + 4) + 0x1a0) & 0x80000000) == 0) &&
          ((*(uint *)(*(int *)(this + 4) + 0x1a0) & 1) != 0)) {
    this_00 = (CMultiManager *)FUN_100a0920((int)this);
    if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) != 0) {
      (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___Creat_10119354);
    }
    ManagerUse(this_00,param_1,param_2,param_3,param_4);
    if (*(int *)(this + 0x15c) != 0) {
      FUN_10098c10((uint *)((int)DAT_10122044[0x26] + *(int *)(this + 0x15c)),(int *)this_00,this,3,
                   0);
      return;
    }
  }
  else {
    FUN_10019420(this + 0x160,(int)param_1);
    *(undefined4 *)(this + 0xc0) = 0;
    if (*(float *)(this + 0x14c) == _DAT_100dd5f8) {
      if (*(float *)(this + 0x148) == _DAT_100dd5f8) {
        param_3 = 0;
        *(undefined4 *)(this + 0xb8) = 2;
      }
      else {
        param_3 = *(USE_TYPE *)(this + 0x148);
        *(undefined4 *)(this + 0xb8) = 1;
      }
    }
    else {
      fVar5 = (float10)(*DAT_10121f74)(*(undefined4 *)(this + 0x148),*(float *)(this + 0x14c));
      param_3 = (USE_TYPE)(float)fVar5;
      *(undefined4 *)(this + 0xb8) = 1;
    }
    *(float *)(this + 0xc4) = (float)param_3 + *DAT_10122044;
    if (((0 < *(int *)(this + 0xbc)) && (*(int *)(this + 0x154) == 0)) &&
       (*(float *)(this + 0x108) < _DAT_100dd5f8)) {
      param_3 = (USE_TYPE)((float)param_3 + *(float *)(this + 0x108));
    }
    iVar1 = *(int *)(this + 4);
    if ((*(uint *)(iVar1 + 0x1a0) & 0x40000000) != 0) {
      *(USE_TYPE *)(this + 0x168) = UVar3;
    }
    if ((*(byte *)(iVar1 + 0x1a0) & 4) == 0) {
      *(undefined4 *)(this + 0x7c) = 0;
    }
    else {
      *(code **)(this + 0x7c) = ManagerUse;
    }
    if (_DAT_100dd5f8 < (float)param_3) {
      if ((*(byte *)(iVar1 + 0x1a0) & 0x20) != 0) {
        (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___Begin_10119320,
                        *(int *)(iVar1 + 0x1cc) + (int)DAT_10122044[0x26],(double)(float)param_3);
      }
      *(code **)(this + 0x74) = ManagerThink;
      (**(code **)(*(int *)this + 8))();
      return;
    }
    *(code **)(this + 0x74) = ManagerThink;
    ManagerThink(this);
  }
  return;
}

