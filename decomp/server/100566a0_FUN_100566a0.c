
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100566a0(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float local_4;
  
  iVar1 = param_1[1];
  fVar2 = (*(float *)(iVar1 + 0x1f8) - (float)param_1[0xc4]) * _DAT_100dd610;
  param_1[0xc4] =
       (int)((float)param_1[0xc4] * (float)_DAT_100dd600 +
            *(float *)(iVar1 + 0x1f8) * (float)_DAT_100dd608);
  if (fVar2 < _DAT_100dd5f8) {
    fVar2 = -fVar2;
  }
  fVar3 = fVar2 + (float)_DAT_100dd628;
  if (fVar2 + (float)_DAT_100dd628 < (float)_DAT_100dd648) {
    fVar3 = _DAT_100dd614;
  }
  if ((float)_DAT_100dd5e0 < fVar3) {
    fVar3 = _DAT_100dd5dc;
  }
  *(float *)(iVar1 + 0x138) = fVar3;
  iVar1 = param_1[1];
  if (param_1[0xc3] == 0) {
    *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(iVar1 + 0xac);
  }
  else {
    *(float *)(iVar1 + 0x60) = *(float *)(iVar1 + 0xac) * (float)param_1[0xc5];
  }
  iVar1 = param_1[1];
  if (*(float *)(iVar1 + 0x60) <= _DAT_100df288) {
    if (_DAT_100ea5d4 <= *(float *)(iVar1 + 0x60)) {
      param_1[0x74] = 6;
    }
    else {
      param_1[0x74] = 0x10;
    }
  }
  else {
    param_1[0x74] = 0xf;
  }
  fVar2 = (float)param_1[200] - *(float *)(iVar1 + 0x10);
  if (_DAT_100ea5d0 <= fVar2) {
    local_4 = 30.0;
    if (fVar2 <= _DAT_100dd63c) {
      local_4 = 0.0;
    }
  }
  else {
    local_4 = -30.0;
  }
  fVar4 = FUN_100afe80(local_4,*(float *)(iVar1 + 0x50),6.0);
  *(float *)(param_1[1] + 0x50) = (float)fVar4;
  iVar1 = param_1[1];
  *(float *)(iVar1 + 100) =
       -(*(float *)(iVar1 + 0x60) * (float)_DAT_100dd5f0 + *(float *)(iVar1 + 0x58));
  if ((param_1[0x76] == 2) && ((param_1[0x57] & 0x800U) != 0)) {
    param_1[0x74] = 0x1e;
  }
  iVar1 = param_1[1];
  if ((*(int *)(iVar1 + 0x1c0) == 0) || (*(int *)(iVar1 + 0x1c4) == -0x13)) {
    *(undefined4 *)(iVar1 + 0x108) = 6;
    iVar1 = param_1[1];
    param_1[0x74] = 0x18;
    *(undefined4 *)(iVar1 + 0x20) = DAT_10121dd8;
    *(undefined4 *)(iVar1 + 0x24) = DAT_10121ddc;
    *(undefined4 *)(iVar1 + 0x28) = DAT_10121de0;
    *(undefined4 *)(param_1[1] + 0x58) = 0;
    *(undefined4 *)(param_1[1] + 0x50) = 0;
    if (*(float *)(param_1[1] + 0x138) < (float)_DAT_100dd628) {
      *(undefined4 *)(param_1[1] + 0x138) = 0x3f800000;
    }
  }
  else if (*(int *)(iVar1 + 0x108) == 6) {
    *(undefined4 *)(iVar1 + 0x108) = 5;
    *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) & 0xfffffdff;
    FUN_10055bc0((int)param_1);
    param_1[0xc9] = (int)(*DAT_10122044 + _DAT_100de4ac);
  }
  if (param_1[0x73] != param_1[0x74]) {
    (**(code **)(*param_1 + 0x1a8))(param_1[0x74]);
  }
  FUN_10007fc0((int)param_1,0.0);
  FUN_10008240(param_1);
  return;
}

