
void __fastcall FUN_10003af0(int param_1)

{
  undefined4 uStack_4;
  
  if ((*(int *)(param_1 + 0x1cc) < 0xf) || (uStack_4 = 0x6e, 0x10 < *(int *)(param_1 + 0x1cc))) {
    uStack_4 = 100;
  }
  *(float *)(*(int *)(param_1 + 4) + 0xb0) = (float)uStack_4;
  return;
}

