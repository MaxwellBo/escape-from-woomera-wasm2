
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CFuncRotating::HurtTouch(class CBaseEntity *) */

void __thiscall CFuncRotating::HurtTouch(CFuncRotating *this,CBaseEntity *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fStack_24;
  float fStack_20;
  float afStack_1c [7];
  
                    /* 0x11f20  126  ?HurtTouch@CFuncRotating@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x16c) != _DAT_100dd5f8) {
    *(float *)(*(int *)(this + 4) + 0x1e0) = *(float *)(this + 0xcc) * _DAT_100dd610;
    iVar2 = *(int *)(this + 4);
    (**(code **)(*(int *)param_1 + 0x60))(iVar2,iVar2,*(undefined4 *)(iVar2 + 0x1e0),1);
    pfVar5 = (float *)FUN_10010f30(afStack_1c,*(int *)(this + 4));
    fVar4 = *(float *)(iVar1 + 8) - *pfVar5;
    fStack_24 = *(float *)(iVar1 + 0xc) - pfVar5[1];
    fStack_20 = *(float *)(iVar1 + 0x10) - pfVar5[2];
    fVar3 = SQRT(fStack_24 * fStack_24 + fVar4 * fVar4 + fStack_20 * fStack_20);
    if (fVar3 == _DAT_100dd5f8) {
      fStack_24 = 0.0;
      fStack_20 = 1.0;
      fVar4 = _DAT_100dd5f8;
    }
    else {
      fVar3 = _DAT_100dd618 / fVar3;
      fVar4 = fVar4 * fVar3;
      fStack_24 = fVar3 * fStack_24;
      fStack_20 = fStack_20 * fVar3;
    }
    fVar3 = *(float *)(*(int *)(this + 4) + 0x1e0);
    *(float *)(iVar1 + 0x20) = fVar4 * fVar3;
    *(float *)(iVar1 + 0x24) = fStack_24 * fVar3;
    *(float *)(iVar1 + 0x28) = fStack_20 * fVar3;
  }
  return;
}

