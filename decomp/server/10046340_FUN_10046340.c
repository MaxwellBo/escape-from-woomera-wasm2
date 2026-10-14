
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10046340(int *param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  param_1[0x2e] = 1;
  param_1[0x2f] = *DAT_10122044;
  (*DAT_10121e08)(DAT_10122044[0x26] + *(int *)(param_1[1] + 0xb8));
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + DAT_10122044[0x26]);
  iVar1 = (*DAT_10121e18)(*(undefined4 *)(param_1[1] + 0xb4));
  param_1[0x30] = (int)((float)iVar1 - _DAT_100dd618);
  return;
}

