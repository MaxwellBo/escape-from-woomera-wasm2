
void __fastcall FUN_100ac070(int *param_1)

{
  (**(code **)(*param_1 + 0x2c))();
  (**(code **)(*param_1 + 8))(0x3f800000);
  *(undefined4 *)(param_1[1] + 0x108) = 5;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x40000000;
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x20;
  param_1[0x1f] = (int)CBaseTurret::TurretUse;
  if (((*(uint *)(param_1[1] + 0x1a0) & 0x20) != 0) && ((*(uint *)(param_1[1] + 0x1a0) & 0x40) == 0)
     ) {
    param_1[0xce] = 1;
  }
  FUN_10008190((int)param_1);
  FUN_10008360(param_1,0,0.0);
  FUN_10008360(param_1,1,0.0);
  param_1[0x70] = -0x40800000;
  return;
}

