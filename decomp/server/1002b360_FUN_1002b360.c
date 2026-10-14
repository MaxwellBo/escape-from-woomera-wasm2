
void __fastcall FUN_1002b360(int *param_1)

{
  if (*(int *)(param_1[1] + 0xb8) == 0) {
    param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
    return;
  }
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  (**(code **)(*param_1 + 0x2c))();
  param_1[0x1d] = (int)CLaser::StrikeThink;
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x20000000;
  return;
}

