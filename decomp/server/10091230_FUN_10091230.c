
void __fastcall FUN_10091230(int *param_1)

{
  (*DAT_10121e08)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0xb8));
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x160) = 0x479c4000;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x40000000;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0xb0) = 0;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  FUN_10008190((int)param_1);
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  (**(code **)(*param_1 + 0x134))();
  return;
}

