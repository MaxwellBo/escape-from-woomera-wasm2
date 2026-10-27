
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100168a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  DAT_100a3930 = 0;
  DAT_100a3968 = 0;
  puVar2 = &DAT_100a37a8;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100a38b0;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100a3978;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_100a3a94 = 0;
  return;
}

