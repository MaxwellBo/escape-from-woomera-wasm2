
/* public: void __thiscall CBaseToggle::AngularMoveNow(void) */

void __thiscall CBaseToggle::AngularMoveNow(CBaseToggle *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  
                    /* 0x99660  6  ?AngularMoveNow@CBaseToggle@@QAEXXZ */
  if (*(int *)(this + 0x10) == 0) {
    local_18 = *(float *)(this + 0x148);
    local_14 = *(float *)(this + 0x14c);
    local_10 = *(float *)(this + 0x150);
  }
  else {
    iVar1 = *(int *)(*(int *)(this + 0x10) + 4);
    local_18 = *(float *)(iVar1 + 0x50) + *(float *)(this + 0x148);
    local_14 = *(float *)(iVar1 + 0x54) + *(float *)(this + 0x14c);
    local_10 = *(float *)(iVar1 + 0x58) + *(float *)(this + 0x150);
  }
  iVar1 = *(int *)(this + 4);
  if (((local_18 == *(float *)(iVar1 + 0x50)) && (local_14 == *(float *)(iVar1 + 0x54))) &&
     (local_10 == *(float *)(iVar1 + 0x58))) {
    AngularMoveDone(this);
    return;
  }
  local_18 = local_18 - *(float *)(iVar1 + 0x50);
  fVar2 = local_14 - *(float *)(iVar1 + 0x54);
  fVar3 = local_10 - *(float *)(iVar1 + 0x58);
  (**(code **)(*(int *)this + 4))
            (SQRT(local_18 * local_18 + fVar3 * fVar3 + fVar2 * fVar2) / *(float *)(this + 0x144));
  *(code **)(this + 0x74) = AngularMoveDone;
  FUN_10063ac0((int)this,local_14 / 1.4013e-45,local_10 / 1.4013e-45,local_18 / 1.4013e-45);
  return;
}

