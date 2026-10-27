
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10026dc0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x2c))();
  FUN_10098fc0(param_1[1]);
  iVar1 = param_1[1];
  if (*(int *)(iVar1 + 0x110) == 0) {
    if ((*(byte *)(iVar1 + 0x1a0) & 8) == 0) {
      *(undefined4 *)(iVar1 + 0x10c) = 4;
    }
    else {
      *(undefined4 *)(iVar1 + 0x10c) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0x10c) = 0;
    *(uint *)(param_1[1] + 0x1a0) = *(uint *)(param_1[1] + 0x1a0) | 0x80000000;
  }
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  FUN_100afe10((int)param_1,param_1[1] + 8);
  if (*(float *)(param_1[1] + 0x1f8) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0x42c80000;
  }
  param_1[0x37] = 1;
  if (((*(uint *)(param_1[1] + 0x1a0) & 0x100) != 0) &&
     ((*(uint *)(param_1[1] + 0x1a0) & 0x400) == 0)) {
    param_1[0x1e] = 0;
    return;
  }
  param_1[0x1e] = (int)CBaseDoor::DoorTouch;
  return;
}

