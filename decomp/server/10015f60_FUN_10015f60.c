
void __fastcall FUN_10015f60(int *param_1)

{
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  *(uint *)(param_1[1] + 0x1a0) = *(uint *)(param_1[1] + 0x1a0) | 2;
  param_1[0x1d] = (int)CMultiSource::Register;
  return;
}

