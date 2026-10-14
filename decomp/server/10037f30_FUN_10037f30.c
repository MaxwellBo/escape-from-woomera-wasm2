
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10037f30(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x80) == 0) {
    (**(code **)(*param_1 + 0x2c))();
  }
  else {
    FUN_10036990(param_1);
  }
  *(undefined4 *)(param_1[1] + 0x108) = 0xd;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  if (_DAT_100e4910 < *(float *)(param_1[1] + 0x120)) {
    *(undefined4 *)(param_1[1] + 0x120) = 0x43c78000;
  }
  iVar1 = param_1[1];
  param_1[0x40] = (int)(_DAT_100de4a8 - *(float *)(iVar1 + 0x120));
  *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) | 0x8000;
  *(undefined4 *)(param_1[1] + 0x120) = 0;
  *(float *)(param_1[1] + 0x10) = *(float *)(param_1[1] + 0x10) + _DAT_100dd618;
  FUN_100afe10((int)param_1,param_1[1] + 8);
  iVar1 = param_1[1];
  lVar2 = __ftol();
  *(int *)(iVar1 + 0x110) = (int)lVar2;
  param_1[0x41] = 0;
  return;
}

