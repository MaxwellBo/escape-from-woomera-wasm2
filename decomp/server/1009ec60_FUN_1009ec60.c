
void __fastcall FUN_1009ec60(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                  *(int *)(*(int *)(param_1 + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(code **)(param_1 + 0x78) = CFrictionModifier::ChangeFriction;
  return;
}

