
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10028f70(int *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x14c) = 0;
  *(undefined4 *)(param_1[1] + 0x148) = 2;
  iVar1 = param_1[1];
  lVar2 = __ftol();
  *(float *)(iVar1 + 0x150) = (float)((int)(uint)lVar2 >> 8);
  *(float *)(param_1[1] + 0x154) = (float)((uint)lVar2 & 0xff);
  uStack_4 = (uint)(*(float *)(param_1[1] + 0x1f8) < _DAT_100dd5f8);
  *(float *)(param_1[1] + 0x158) = (float)uStack_4;
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
    param_1[0x1d] = (int)CBubbling::FizzThink;
    (**(code **)(*param_1 + 8))(0x40000000);
    param_1[0x31] = 1;
    return;
  }
  param_1[0x31] = 0;
  return;
}

