
void __fastcall FUN_10033890(int *param_1)

{
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
    param_1[0x1d] = (int)CEnvFog::ResumeThink;
    (**(code **)(*param_1 + 8))(0x3dcccccd);
  }
  return;
}

