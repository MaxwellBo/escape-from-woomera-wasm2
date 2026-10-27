
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10031220(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x2c))();
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x118) = 0x80;
  iVar1 = param_1[1];
  if (((*(float *)(iVar1 + 0x150) == DAT_10121dd8) && (*(float *)(iVar1 + 0x154) == DAT_10121ddc))
     && (*(float *)(iVar1 + 0x158) == DAT_10121de0)) {
    *(undefined4 *)(iVar1 + 0x150) = 0x437f0000;
    *(undefined4 *)(iVar1 + 0x154) = 0x437f0000;
    *(undefined4 *)(iVar1 + 0x158) = 0x437f0000;
  }
  if (param_1[0x36] == 0) {
    if (*(float *)(param_1[1] + 0x50) == _DAT_100dd5f8) {
      *(undefined4 *)(param_1[1] + 0x50) = 0x42b40000;
    }
  }
  else {
    *(float *)(param_1[1] + 0x50) = (float)param_1[0x36];
  }
  if (param_1[0x34] == 0) {
    param_1[0x34] = 2;
  }
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
    param_1[0x2e] = 0;
    return;
  }
  param_1[0x2e] = 2;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  return;
}

