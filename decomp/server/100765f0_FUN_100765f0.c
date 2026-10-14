
void __fastcall FUN_100765f0(int *param_1)

{
  param_1[0x59] = 0;
  *(uint *)(param_1[1] + 0x1a0) = *(uint *)(param_1[1] + 0x1a0) & 0xff7fffff;
  (**(code **)(*param_1 + 0xe4))(param_1,param_1,0,0);
  return;
}

