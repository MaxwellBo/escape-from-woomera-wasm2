
void __fastcall FUN_100458e0(int *param_1)

{
  *(undefined4 *)(param_1[1] + 0x134) = 0;
  param_1[0x1d] = (int)CLegacyCineMonster::CineThink;
  (**(code **)(*param_1 + 8))(0);
  return;
}

