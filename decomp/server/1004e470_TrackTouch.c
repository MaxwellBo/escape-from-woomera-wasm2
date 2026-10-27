
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CHornet::TrackTouch(class CBaseEntity *) */

void __thiscall CHornet::TrackTouch(CHornet *this,CBaseEntity *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fStack_18;
  float fStack_14;
  
                    /* 0x4e470  259  ?TrackTouch@CHornet@@QAEXPAVCBaseEntity@@@Z */
  iVar2 = *(int *)(this + 4);
  if ((*(int *)(*(int *)(param_1 + 4) + 0x208) != *(int *)(iVar2 + 0x198)) &&
     (*(int *)(*(int *)(param_1 + 4) + 0xb4) != *(int *)(iVar2 + 0xb4))) {
    iVar2 = (**(code **)(*(int *)this + 0x130))(param_1);
    if (iVar2 < 1) {
      iVar2 = *(int *)(this + 4);
      fStack_14 = SQRT(*(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28) +
                       *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                       *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20));
      if (fStack_14 == _DAT_100dd5f8) {
        fVar3 = 0.0;
        fStack_18 = 0.0;
        fStack_14 = 1.0;
      }
      else {
        fStack_14 = _DAT_100dd618 / fStack_14;
        fVar3 = fStack_14 * *(float *)(iVar2 + 0x20);
        fStack_18 = fStack_14 * *(float *)(iVar2 + 0x24);
        fStack_14 = fStack_14 * *(float *)(iVar2 + 0x28);
      }
      *(float *)(iVar2 + 0x20) = fVar3;
      *(float *)(iVar2 + 0x24) = fStack_18;
      *(float *)(iVar2 + 0x28) = fStack_14;
      *(float *)(*(int *)(this + 4) + 0x20) = *(float *)(*(int *)(this + 4) + 0x20) * _DAT_100df2b0;
      *(float *)(*(int *)(this + 4) + 0x24) = *(float *)(*(int *)(this + 4) + 0x24) * _DAT_100df2b0;
      iVar2 = *(int *)(this + 4);
      fVar3 = *(float *)(iVar2 + 0x24) * _DAT_100de4fc;
      fVar1 = *(float *)(iVar2 + 0x28) * _DAT_100de4fc;
      *(float *)(iVar2 + 8) = *(float *)(iVar2 + 0x20) * _DAT_100de4fc + *(float *)(iVar2 + 8);
      *(float *)(iVar2 + 0xc) = fVar3 + *(float *)(iVar2 + 0xc);
      *(float *)(iVar2 + 0x10) = fVar1 + *(float *)(iVar2 + 0x10);
      fVar3 = *(float *)(this + 0x310);
      iVar2 = *(int *)(this + 4);
      *(float *)(iVar2 + 0x20) = fVar3 * *(float *)(iVar2 + 0x20);
      *(float *)(iVar2 + 0x24) = fVar3 * *(float *)(iVar2 + 0x24);
      *(float *)(iVar2 + 0x28) = fVar3 * *(float *)(iVar2 + 0x28);
      return;
    }
    DieTouch(this,param_1);
    return;
  }
  *(undefined4 *)(iVar2 + 0x10c) = 0;
  return;
}

