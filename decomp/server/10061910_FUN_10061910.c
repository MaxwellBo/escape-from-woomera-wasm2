
void __fastcall FUN_10061910(int *param_1)

{
  FUN_10008390((int)param_1);
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  FUN_10008190((int)param_1);
  *(undefined4 *)(param_1[1] + 0x138) = 0;
  *(undefined4 *)(param_1[1] + 0x1b0) = *(undefined4 *)(param_1[1] + 0x160);
  *(undefined4 *)(param_1[1] + 0x170) = 2;
  FUN_100afdc0(param_1[1],&DAT_10121dd8,&DAT_10121dd8);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  (**(code **)(*param_1 + 0x13c))();
  param_1[0x1d] = (int)CBaseMonster::CorpseFallThink;
  (**(code **)(*param_1 + 8))(0x3f000000);
  return;
}

