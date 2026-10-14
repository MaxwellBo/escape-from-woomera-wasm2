
uint __fastcall FUN_100dbbf4(int *param_1)

{
  uint uVar1;
  
  if (param_1[2] == 0) {
    if ((byte *)param_1[10] < (byte *)param_1[0xb]) {
      uVar1 = (uint)*(byte *)param_1[10];
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x20))();
    }
    param_1[10] = param_1[10] + 1;
    return uVar1;
  }
  uVar1 = param_1[3];
  if (uVar1 == 0xffffffff) {
    uVar1 = (**(code **)(*param_1 + 0x20))();
    return uVar1;
  }
  param_1[3] = -1;
  return uVar1;
}

