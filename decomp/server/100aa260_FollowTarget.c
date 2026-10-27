
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTriggerCamera::FollowTarget(void) */

void __thiscall CTriggerCamera::FollowTarget(CTriggerCamera *this)

{
  CTriggerCamera *pCVar1;
  undefined4 uVar2;
  float fVar3;
  bool bVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  int *piVar6;
  int iVar7;
  void *this_00;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
                    /* 0xaa260  111  ?FollowTarget@CTriggerCamera@@QAEXXZ */
  pCVar1 = this + 200;
  bVar4 = FUN_10019450((uint *)pCVar1);
  if (CONCAT31(extraout_var,bVar4) != 0) {
    bVar4 = FUN_10019450((uint *)(this + 0xd0));
    if ((CONCAT31(extraout_var_00,bVar4) != 0) && (*DAT_10122044 <= *(float *)(this + 0xe4))) {
      iVar7 = *(int *)(this + 4);
      iVar5 = FUN_10019460((uint *)(this + 0xd0));
      iVar5 = *(int *)(iVar5 + 4);
      local_10 = *(float *)(iVar5 + 0x10) - *(float *)(iVar7 + 0x10);
      local_14 = *(float *)(iVar5 + 0xc) - *(float *)(iVar7 + 0xc);
      local_18 = *(float *)(iVar5 + 8) - *(float *)(iVar7 + 8);
      FUN_100ae830(&local_c,&local_18);
      iVar7 = *(int *)(this + 4);
      local_c = -local_c;
      if (_DAT_100ddae8 < *(float *)(iVar7 + 0x54)) {
        *(float *)(iVar7 + 0x54) = *(float *)(iVar7 + 0x54) - _DAT_100ddae8;
      }
      iVar7 = *(int *)(this + 4);
      if (*(float *)(iVar7 + 0x54) < _DAT_100dd5f8) {
        *(float *)(iVar7 + 0x54) = *(float *)(iVar7 + 0x54) + _DAT_100ddae8;
      }
      iVar7 = *(int *)(this + 4);
      fVar3 = local_c - *(float *)(iVar7 + 0x50);
      local_8 = local_8 - *(float *)(iVar7 + 0x54);
      if (fVar3 < _DAT_100de530) {
        fVar3 = fVar3 + _DAT_100ddae8;
      }
      if (_DAT_100ddaec < fVar3) {
        fVar3 = fVar3 - _DAT_100ddae8;
      }
      if (local_8 < _DAT_100de530) {
        local_8 = local_8 + _DAT_100ddae8;
      }
      if (_DAT_100ddaec < local_8) {
        local_8 = local_8 - _DAT_100ddae8;
      }
      *(float *)(iVar7 + 0x5c) = fVar3 * DAT_10122044[1] * _DAT_100e113c;
      *(float *)(*(int *)(this + 4) + 0x60) = local_8 * DAT_10122044[1] * _DAT_100e113c;
      iVar7 = *(int *)(this + 4);
      if ((*(byte *)(iVar7 + 0x1a0) & 4) == 0) {
        local_18 = *(float *)(iVar7 + 0x20) * _DAT_100e1138;
        local_14 = *(float *)(iVar7 + 0x24) * _DAT_100e1138;
        local_10 = *(float *)(iVar7 + 0x28) * _DAT_100e1138;
        *(float *)(iVar7 + 0x20) = local_18;
        *(float *)(iVar7 + 0x24) = local_14;
        *(float *)(iVar7 + 0x28) = local_10;
        iVar7 = *(int *)(this + 4);
        if (SQRT(*(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28) +
                 *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) +
                 *(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20)) < (float)_DAT_100de4a0) {
          *(undefined4 *)(iVar7 + 0x20) = DAT_10121dd8;
          *(undefined4 *)(iVar7 + 0x24) = DAT_10121ddc;
          *(undefined4 *)(iVar7 + 0x28) = DAT_10121de0;
        }
      }
      (**(code **)(*(int *)this + 8))(0);
      FUN_100aa520((int *)this);
      return;
    }
    piVar6 = (int *)FUN_10019460((uint *)pCVar1);
    iVar7 = (**(code **)(*piVar6 + 0xb8))();
    if (iVar7 != 0) {
      iVar7 = FUN_10019460((uint *)pCVar1);
      uVar2 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x208);
      iVar7 = FUN_10019460((uint *)pCVar1);
      (*DAT_10121f78)(*(undefined4 *)(*(int *)(iVar7 + 4) + 0x208),uVar2);
      iVar7 = 1;
      this_00 = (void *)FUN_10019410((uint *)pCVar1);
      FUN_100814e0(this_00,iVar7);
    }
    FUN_10098e40(this,(int *)this,3,0);
    iVar7 = *(int *)(this + 4);
    *(undefined4 *)(iVar7 + 0x5c) = 0;
    *(undefined4 *)(iVar7 + 0x60) = 0;
    *(undefined4 *)(iVar7 + 100) = 0;
    *(undefined4 *)(this + 0x100) = 0;
  }
  return;
}

