
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10081540(void *this,undefined4 *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float unaff_ESI;
  longlong lVar4;
  undefined4 *unaff_retaddr;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 local_c [12];
  
  if (DAT_10121df0 == 3) {
    iVar2 = *(int *)((int)this + 4);
    local_28 = *(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x7c);
    local_2c = *(float *)(iVar2 + 0x6c) + *(float *)(iVar2 + 0x78);
    local_30 = *(float *)(iVar2 + 0x68) + *(float *)(iVar2 + 0x74);
    FUN_100af200(&local_30);
    iVar2 = DAT_10122044;
    *param_1 = *(undefined4 *)(DAT_10122044 + 0x28);
    param_1[1] = *(undefined4 *)(iVar2 + 0x2c);
    param_1[2] = *(undefined4 *)(iVar2 + 0x30);
    return;
  }
  (**(code **)(*(int *)this + 0x214))(local_c);
  pfVar1 = (float *)((int)this + 0x634);
  local_30 = 0.0;
  *pfVar1 = 0.0;
  local_2c = 0.0;
  iVar2 = *(int *)((int)this + 0x640);
  *(undefined4 *)((int)this + 0x638) = 0;
  *(undefined4 *)((int)this + 0x63c) = 0;
  FUN_100818d0(this,(float *)&stack0xffffffc0,&fStack_10,8192.0,(float)param_1);
  iVar3 = (**(code **)(*DAT_10121db8 + 0x5c))();
  if (iVar3 == 0) {
    *(undefined4 *)((int)this + 0x640) = 0;
  }
  else if (iVar2 != *(int *)((int)this + 0x640)) {
    (**(code **)(**(int **)((int)this + 0x528) + 0x138))();
  }
  if (_DAT_100ddaec < unaff_ESI) {
    unaff_ESI = unaff_ESI - _DAT_100ddae8;
  }
  if (unaff_ESI < _DAT_100de530) {
    unaff_ESI = unaff_ESI + _DAT_100ddae8;
  }
  if (_DAT_100ddaec < fStack_3c) {
    fStack_3c = fStack_3c - _DAT_100ddae8;
  }
  if (fStack_3c < _DAT_100de530) {
    fStack_3c = fStack_3c + _DAT_100ddae8;
  }
  if (unaff_ESI <= _DAT_100e0eec) {
    if (unaff_ESI < _DAT_100eeb80) {
      unaff_ESI = -25.0;
    }
  }
  else {
    unaff_ESI = 25.0;
  }
  if (fStack_3c <= _DAT_100dd624) {
    if (fStack_3c < _DAT_100e9600) {
      fStack_3c = -12.0;
    }
  }
  else {
    fStack_3c = 12.0;
  }
  if (DAT_10121df0 == 1) {
    fStack_18 = fStack_3c * _DAT_100eeb7c;
    fStack_14 = fStack_38 * _DAT_100eeb7c;
    fStack_24 = *(float *)((int)this + 0x638) * _DAT_100eeb78;
    fStack_20 = *(float *)((int)this + 0x63c) * _DAT_100eeb78;
    local_30 = fStack_24 + fStack_18;
    *pfVar1 = *pfVar1 * _DAT_100eeb78 + unaff_ESI * _DAT_100eeb7c;
    local_2c = fStack_20 + fStack_14;
    *(float *)((int)this + 0x638) = local_30;
    *(float *)((int)this + 0x63c) = local_2c;
  }
  else {
    local_30 = fStack_3c * _DAT_100e0ed4;
    *pfVar1 = unaff_ESI * _DAT_100e0ed4;
    local_2c = fStack_38 * _DAT_100e0ed4;
    *(float *)((int)this + 0x638) = local_30;
    *(float *)((int)this + 0x63c) = local_2c;
  }
  if ((*(float *)(DAT_10121db0 + 0xc) != _DAT_100dd5f8) &&
     (((float)*(int *)((int)this + 0x64c) != *pfVar1 ||
      ((float)*(int *)((int)this + 0x650) != *(float *)((int)this + 0x638))))) {
    (*DAT_10121f80)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208),-*pfVar1,
                    *(undefined4 *)((int)this + 0x638));
    lVar4 = __ftol();
    *(int *)((int)this + 0x64c) = (int)lVar4;
    lVar4 = __ftol();
    *(int *)((int)this + 0x650) = (int)lVar4;
  }
  iVar2 = *(int *)((int)this + 4);
  fStack_18 = *(float *)(iVar2 + 0x6c) + *(float *)(iVar2 + 0x78);
  fStack_14 = *(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x7c);
  local_28 = *(float *)(iVar2 + 0x74) + *(float *)(iVar2 + 0x68) + *pfVar1;
  fStack_24 = fStack_18 + *(float *)((int)this + 0x638);
  fStack_20 = fStack_14 + *(float *)((int)this + 0x63c);
  FUN_100af200(&local_28);
  iVar2 = DAT_10122044;
  *unaff_retaddr = *(undefined4 *)(DAT_10122044 + 0x28);
  unaff_retaddr[1] = *(undefined4 *)(iVar2 + 0x2c);
  unaff_retaddr[2] = *(undefined4 *)(iVar2 + 0x30);
  return;
}

