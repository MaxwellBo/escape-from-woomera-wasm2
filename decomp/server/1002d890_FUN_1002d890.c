
void __thiscall FUN_1002d890(int *param_1,int param_2)

{
  FUN_10019420(param_1 + 0x30,param_2);
  param_1[0x1d] = (int)CGibShooter::ShootThink;
  (**(code **)(*param_1 + 8))(0);
  return;
}

