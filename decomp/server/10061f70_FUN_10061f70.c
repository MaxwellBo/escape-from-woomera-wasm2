
void __fastcall FUN_10061f70(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar2 + 0x1a0) & 1) != 0) {
    *(undefined4 *)(iVar2 + 0x160) = 0;
    puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x1a4);
    *puVar1 = *puVar1 | 0x20;
    return;
  }
  *(undefined4 *)(iVar2 + 0x160) = 0x3f800000;
  puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x1a4);
  *puVar1 = *puVar1 | 0x20;
  return;
}

