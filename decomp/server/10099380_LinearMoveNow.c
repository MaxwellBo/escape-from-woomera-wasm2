
/* public: void __thiscall CBaseToggle::LinearMoveNow(void) */

void __thiscall CBaseToggle::LinearMoveNow(CBaseToggle *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  
                    /* 0x99380  139  ?LinearMoveNow@CBaseToggle@@QAEXXZ */
  if (*(int *)(this + 0x10) == 0) {
    local_18 = *(float *)(this + 0x134);
    local_14 = *(float *)(this + 0x138);
    local_10 = *(float *)(this + 0x13c);
  }
  else {
    iVar1 = *(int *)(*(int *)(this + 0x10) + 4);
    local_18 = *(float *)(iVar1 + 8) + *(float *)(this + 0x134);
    local_14 = *(float *)(iVar1 + 0xc) + *(float *)(this + 0x138);
    local_10 = *(float *)(iVar1 + 0x10) + *(float *)(this + 0x13c);
  }
  iVar1 = *(int *)(this + 4);
  if (((local_18 == *(float *)(iVar1 + 8)) && (local_14 == *(float *)(iVar1 + 0xc))) &&
     (local_10 == *(float *)(iVar1 + 0x10))) {
    LinearMoveDone(this);
    return;
  }
  local_18 = local_18 - *(float *)(iVar1 + 8);
  fVar2 = local_14 - *(float *)(iVar1 + 0xc);
  fVar3 = local_10 - *(float *)(iVar1 + 0x10);
  (**(code **)(*(int *)this + 4))
            (SQRT(local_18 * local_18 + fVar3 * fVar3 + fVar2 * fVar2) / *(float *)(this + 0x140));
  *(code **)(this + 0x74) = LinearMoveDone;
  FUN_100638f0((int)this,local_14 / 1.4013e-45,local_10 / 1.4013e-45,local_18 / 1.4013e-45);
  return;
}

