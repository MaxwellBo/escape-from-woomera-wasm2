
void __fastcall FUN_100468d0(int *param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x16c) = 0;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  if (*(int *)(param_1[1] + 0xb8) != 0) {
    (*DAT_10121e08)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0xb8));
    (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                    *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  }
  lVar1 = __ftol();
  param_1[0xc2] = (int)lVar1;
  return;
}

