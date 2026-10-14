
void __thiscall FUN_10029780(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  
  *(uint *)(*(int *)(param_1 + 4) + 0x148) = *(uint *)(*(int *)(param_1 + 4) + 0x148) & 0xf0 | 3;
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 8) = *param_2;
  *(undefined4 *)(iVar2 + 0xc) = param_2[1];
  *(undefined4 *)(iVar2 + 0x10) = param_2[2];
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x50) = *param_3;
  *(undefined4 *)(iVar2 + 0x54) = param_3[1];
  *(undefined4 *)(iVar2 + 0x58) = param_3[2];
  *(uint *)(*(int *)(param_1 + 4) + 0x128) = *(uint *)(*(int *)(param_1 + 4) + 0x128) & 0xfff;
  puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x110);
  *puVar1 = *puVar1 & 0xfff;
  FUN_100298f0(param_1);
  return;
}

