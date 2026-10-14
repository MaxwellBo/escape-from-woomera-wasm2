
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1002c600(int *param_1)

{
  float fVar1;
  int iVar2;
  
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  (*DAT_10121e08)(DAT_10122044[0x26] + *(int *)(param_1[1] + 0xb8));
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + DAT_10122044[0x26]);
  iVar2 = (*DAT_10121e18)(*(undefined4 *)(param_1[1] + 0xb4));
  fVar1 = (float)iVar2 - _DAT_100dd618;
  param_1[0x2f] = (int)fVar1;
  if (fVar1 <= (float)_DAT_100dd628) {
    param_1[0x2e] = *DAT_10122044;
    return;
  }
  if (*(float *)(param_1[1] + 0x138) != _DAT_100dd5f8) {
    (**(code **)(*param_1 + 8))(0x3dcccccd);
    param_1[0x2e] = *DAT_10122044;
    return;
  }
  param_1[0x2e] = *DAT_10122044;
  return;
}

