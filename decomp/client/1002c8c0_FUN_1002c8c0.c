
void __fastcall FUN_1002c8c0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  puVar1 = (undefined1 *)(param_1 + 0x14);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x80;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar3 = (undefined4 *)(param_1 + 0x214);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x214) = 1;
  *(undefined4 **)(param_1 + 0x238) = &DAT_10078444;
  *(undefined4 **)(param_1 + 0x23c) = &DAT_10078444;
  return;
}

