
void __fastcall FUN_100c23f0(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x34) = puVar1[4];
  puVar2 = (undefined1 *)puVar1[2];
  *(undefined1 **)(param_1 + 0x38) = puVar2;
  *(undefined1 **)(param_1 + 4) = puVar2;
  *(undefined4 *)(param_1 + 0x24) = *puVar1;
  *(undefined1 *)(param_1 + 0x30) = *puVar2;
  return;
}

