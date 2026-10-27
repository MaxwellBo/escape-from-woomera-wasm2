
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1001b340(void *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  undefined1 local_c [12];
  
  if (((param_1 == _DAT_10059a18) && (param_2 == _DAT_10059a18)) && (param_3 == _DAT_10059a18)) {
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    return;
  }
  local_30 = DAT_100a3a78;
  fVar1 = param_1 - DAT_100a3a78;
  local_2c = DAT_100a3a7c;
  local_28 = DAT_100a3a80;
  param_2 = param_2 - DAT_100a3a7c;
  local_24 = DAT_100a3a84;
  local_20 = DAT_100a3a88;
  local_1c = DAT_100a3a8c;
  param_3 = param_3 - DAT_100a3a80;
  fVar3 = SQRT(fVar1 * fVar1 + param_2 * param_2 + param_3 * param_3);
  if (fVar3 == _DAT_10059a18) {
    FUN_1001b5d0(&param_1,0,0,1);
  }
  else {
    fVar2 = _DAT_10059eb0 / fVar3;
    FUN_1000bc20(&param_1,fVar2 * fVar1,param_2 * fVar2,param_3 * fVar2);
  }
  (*DAT_100a5050)(&local_24,&local_18,&local_30,local_c);
  fVar2 = param_1 * local_30 + local_28 * param_3 + local_2c * param_2;
  fVar1 = param_1 * local_18 + fStack_10 * param_3 + fStack_14 * param_2;
  if (_DAT_1005fa54 < fVar3) {
    if (fVar1 <= _DAT_10059a18) {
      fVar1 = -fVar1;
      if ((float)_DAT_1005ac70 < fVar1) {
        if (fVar1 < *(float *)((int)this + 0x24)) {
          fVar1 = *(float *)((int)this + 0x24);
        }
        *(float *)((int)this + 0x24) = fVar1;
      }
    }
    else if ((float)_DAT_1005ac70 < fVar1) {
      if (*(float *)((int)this + 0x20) <= fVar1) {
        *(float *)((int)this + 0x20) = fVar1;
      }
      else {
        *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x20);
      }
    }
    if (fVar2 <= _DAT_10059a18) {
      fVar2 = -fVar2;
      if ((float)_DAT_1005ac70 < fVar2) {
        if (fVar2 < *(float *)((int)this + 0x28)) {
          fVar2 = *(float *)((int)this + 0x28);
        }
        *(float *)((int)this + 0x28) = fVar2;
        return;
      }
    }
    else if ((float)_DAT_1005ac70 < fVar2) {
      if (*(float *)((int)this + 0x2c) <= fVar2) {
        *(float *)((int)this + 0x2c) = fVar2;
        return;
      }
      *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x2c);
      return;
    }
    return;
  }
  *(undefined4 *)((int)this + 0x28) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x24) = 0x3f800000;
  *(undefined4 *)((int)this + 0x20) = 0x3f800000;
  return;
}

