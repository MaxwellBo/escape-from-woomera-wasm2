
void __fastcall FUN_10033820(int *param_1)

{
  uint *puVar1;
  
  *(uint *)(param_1[1] + 0x118) = *(uint *)(param_1[1] + 0x118) | 0x80;
  if (*(int *)(param_1[1] + 0x1cc) == 0) {
    puVar1 = (uint *)(param_1[1] + 0x1a0);
    *puVar1 = *puVar1 | 1;
  }
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
    param_1[0x1d] = (int)CEnvFog::TurnOn;
    FUN_10063370(param_1);
  }
  if (param_1[0x2e] == 0) {
    param_1[0x2e] = 1;
  }
  if (param_1[0x2f] == 0) {
    param_1[0x2f] = 1;
  }
  return;
}

