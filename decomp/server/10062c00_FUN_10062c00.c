
void __cdecl FUN_10062c00(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x5c) & 8) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x3c) = DAT_10121dd8;
    *(undefined4 *)(param_1 + 0x40) = DAT_10121ddc;
    *(undefined4 *)(param_1 + 0x44) = DAT_10121de0;
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffffff7;
  }
  if ((*(byte *)(param_1 + 0x5c) & 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x48) = DAT_10121dd8;
    *(undefined4 *)(param_1 + 0x4c) = DAT_10121ddc;
    *(undefined4 *)(param_1 + 0x50) = DAT_10121de0;
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xffffffef;
  }
  for (iVar1 = *(int *)(param_1 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
    FUN_10062c00(iVar1);
  }
  return;
}

