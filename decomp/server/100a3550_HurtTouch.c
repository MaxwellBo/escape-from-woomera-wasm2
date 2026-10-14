
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTriggerHurt::HurtTouch(class CBaseEntity *) */

void __thiscall CTriggerHurt::HurtTouch(CTriggerHurt *this,CBaseEntity *param_1)

{
  uint uVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
                    /* 0xa3550  127  ?HurtTouch@CTriggerHurt@@QAEXPAVCBaseEntity@@@Z */
  if (*(float *)(*(int *)(param_1 + 4) + 0x16c) == _DAT_100dd5f8) {
    return;
  }
  if (((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) != 0) &&
     (iVar4 = (**(code **)(*(int *)param_1 + 0xcc))(), iVar4 == 0)) {
    return;
  }
  if (((*(byte *)(*(int *)(this + 4) + 0x1a0) & 8) != 0) &&
     (iVar4 = (**(code **)(*(int *)param_1 + 0xcc))(), iVar4 != 0)) {
    return;
  }
  iVar5 = (**(code **)(*DAT_10121db8 + 0x18))();
  iVar4 = *(int *)(this + 4);
  if (iVar5 == 0) {
    if ((*DAT_10122044 < *(float *)(iVar4 + 0x1e4)) && (*DAT_10122044 != *(float *)(iVar4 + 0x200)))
    {
      return;
    }
  }
  else if (*(float *)(iVar4 + 0x1e4) <= *DAT_10122044) {
    *(undefined4 *)(iVar4 + 0x184) = 0;
    iVar4 = (**(code **)(*(int *)param_1 + 0xcc))();
    if (iVar4 != 0) {
      cVar3 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
      *(uint *)(*(int *)(this + 4) + 0x184) =
           *(uint *)(*(int *)(this + 4) + 0x184) | 1 << (cVar3 - 1U & 0x1f);
    }
  }
  else if (*DAT_10122044 != *(float *)(iVar4 + 0x200)) {
    iVar4 = (**(code **)(*(int *)param_1 + 0xcc))();
    if (iVar4 == 0) {
      return;
    }
    cVar3 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
    uVar6 = 1 << (cVar3 - 1U & 0x1f);
    uVar1 = *(uint *)(*(int *)(this + 4) + 0x184);
    if ((uVar6 & uVar1) != 0) {
      return;
    }
    *(uint *)(*(int *)(this + 4) + 0x184) = uVar1 | uVar6;
  }
  iVar4 = *(int *)(this + 4);
  fVar2 = *(float *)(iVar4 + 0x1e0) * (float)_DAT_100dd648;
  if (_DAT_100dd5f8 <= fVar2) {
    (**(code **)(*(int *)param_1 + 0x60))(iVar4,iVar4,fVar2,*(undefined4 *)(this + 0x154));
  }
  else {
    (**(code **)(*(int *)param_1 + 100))(-fVar2);
  }
  *(float *)(*(int *)(this + 4) + 0x200) = *DAT_10122044;
  *(float *)(*(int *)(this + 4) + 0x1e4) = *DAT_10122044 + (float)_DAT_100dd648;
  if (*(int *)(*(int *)(this + 4) + 0x1c8) != 0) {
    if (((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x10) != 0) &&
       (iVar4 = (**(code **)(*(int *)param_1 + 0xcc))(), iVar4 == 0)) {
      return;
    }
    FUN_10098e40(this,(int *)param_1,3,0);
    if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 1) != 0) {
      *(undefined4 *)(*(int *)(this + 4) + 0x1c8) = 0;
    }
  }
  return;
}

