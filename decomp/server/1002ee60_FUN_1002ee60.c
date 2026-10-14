
void __fastcall FUN_1002ee60(int *param_1)

{
  param_1[0x1d] = (int)CTestEffect::TestThink;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  param_1[100] = *DAT_10122044;
  return;
}

