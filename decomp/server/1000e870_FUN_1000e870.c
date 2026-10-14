
void __fastcall FUN_1000e870(int param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = 0x5a;
  if (*(int *)(param_1 + 0x1cc) == 1) {
    uStack_4 = 100;
  }
  *(float *)(*(int *)(param_1 + 4) + 0xb0) = (float)uStack_4;
  return;
}

