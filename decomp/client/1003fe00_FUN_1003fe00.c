
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1003fe00(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = (*DAT_100a50b8)();
  if ((((iVar3 != 0) || (*(int *)(param_1 + 0x50) == 0)) || (*(int *)(param_1 + 0xbc) != 0)) ||
     (*(int *)(param_1 + 0x4c) != 0)) {
    _DAT_100b6fa8 = 0.0;
    _DAT_100b6fa0 = 0.0;
    return;
  }
  if (DAT_100b6fa4 == 0) {
    fVar1 = *(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x80);
    if (fVar1 == _DAT_10059a18) {
      _DAT_100b6fa0 = 0.0;
      return;
    }
    fVar2 = _DAT_100b6fa0 * *(float *)(param_1 + 0x3c);
    _DAT_100b6fa0 = *(float *)(DAT_100b6ff4 + 0xc) * *(float *)(param_1 + 0x3c) + _DAT_100b6fa0;
    if (_DAT_10059a18 < fVar1) {
      if (fVar1 < fVar2) {
        _DAT_100b6fa0 = 0.0;
        fVar2 = fVar1;
      }
      *(float *)(param_1 + 0x80) = fVar2 + *(float *)(param_1 + 0x80);
      return;
    }
    if (fVar1 < _DAT_10059a18) {
      if (-fVar1 < fVar2) {
        _DAT_100b6fa0 = 0.0;
        fVar2 = -fVar1;
      }
      *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) - fVar2;
    }
  }
  else {
    fVar1 = *(float *)(*(int *)(param_1 + 200) + 0x10);
    if (*(float *)(*(int *)(param_1 + 200) + 0x10) <= _DAT_10059a18) {
      fVar1 = -fVar1;
    }
    if (*(float *)(DAT_100a9840 + 0xc) <= fVar1) {
      _DAT_100b6fa8 = _DAT_100b6fa8 + *(float *)(param_1 + 0x3c);
    }
    else {
      _DAT_100b6fa8 = 0.0;
    }
    if (*(float *)(DAT_100b6f94 + 0xc) < _DAT_100b6fa8) {
      fVar4 = (float10)(*DAT_100a50c8)();
      if ((fVar4 != (float10)_DAT_100b6fb0) &&
         ((DAT_100b6fa4 != 0 || (_DAT_100b6fa0 == _DAT_10059a18)))) {
        _DAT_100b6fa0 = *(float *)(DAT_100b6ff4 + 0xc);
        DAT_100b6fa4 = 0;
        _DAT_100b6fa8 = 0.0;
      }
      return;
    }
  }
  return;
}

