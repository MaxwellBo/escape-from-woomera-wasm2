
void __fastcall FUN_100364d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x26ae8) = 0;
  *(undefined4 *)(param_1 + 0x26aec) = 0;
  *(undefined4 *)(param_1 + 0x2684c) = 0;
  *(undefined4 *)(param_1 + 0x26848) = 0;
  puVar2 = &DAT_100b6008;
  for (iVar1 = 0x186; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100b4fc8;
  for (iVar1 = 0x28a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

