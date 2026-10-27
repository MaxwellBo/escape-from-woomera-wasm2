
void __fastcall FUN_10062630(int *param_1)

{
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(uint *)(param_1[1] + 0x118) = *(uint *)(param_1[1] + 0x118) | 0x80;
  param_1[0x1f] = (int)CFuncMortarField::FieldUse;
  (**(code **)(*param_1 + 0x2c))();
  return;
}

