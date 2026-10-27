
void __cdecl HUD_TxferLocalOverrides(int param_1,undefined4 *param_2)

{
                    /* 0x199a0  499  HUD_TxferLocalOverrides */
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  *(undefined4 *)(param_1 + 0x104) = param_2[99];
  *(undefined4 *)(param_1 + 0x108) = param_2[100];
  *(undefined4 *)(param_1 + 0x10c) = param_2[0x65];
  *(undefined4 *)(param_1 + 0x110) = param_2[0x66];
  return;
}

