
void __fastcall FUN_100197e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x104) != *(float *)(param_1 + 0x58)) {
    *(float *)(param_1 + 0x54) =
         (*(float *)(iVar1 + 0x104) - *(float *)(param_1 + 0x58)) + *(float *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x104);
  }
  return;
}

