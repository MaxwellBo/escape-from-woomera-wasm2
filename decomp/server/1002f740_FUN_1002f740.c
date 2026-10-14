
void __fastcall FUN_1002f740(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  FUN_100af360((float *)(iVar1 + 8),*(float *)(iVar1 + 0x144),*(undefined4 *)(iVar1 + 0x1dc),
               *(undefined4 *)(iVar1 + 0x1d8),*(float *)(iVar1 + 0x1e0));
  param_1[0x2e] = 2;
  (**(code **)(*param_1 + 8))(*(undefined4 *)(param_1[1] + 0x1d8));
  return;
}

