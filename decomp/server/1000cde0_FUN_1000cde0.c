
void __fastcall FUN_1000cde0(int param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(param_1 + 0x1cc);
  if (((iVar1 == 1) || (iVar1 == 3)) || (uStack_4 = 0x5a, iVar1 != 4)) {
    uStack_4 = 0x46;
  }
  *(float *)(*(int *)(param_1 + 4) + 0xb0) = (float)uStack_4;
  return;
}

