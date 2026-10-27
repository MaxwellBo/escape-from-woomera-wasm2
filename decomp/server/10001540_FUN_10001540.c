
void __fastcall FUN_10001540(int *param_1)

{
  (**(code **)(*param_1 + 0x2c))();
  FUN_10001810((int)param_1);
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  param_1[0x1d] = (int)CFlockingFlyer::IdleThink;
  return;
}

