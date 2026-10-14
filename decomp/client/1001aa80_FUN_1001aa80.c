
undefined4 __fastcall FUN_1001aa80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar1 = FUN_1001c090(&DAT_100a3a40,s_flash_empty_10078564);
  iVar2 = FUN_1001c090(&DAT_100a3a40,s_flash_full_10078558);
  iVar3 = FUN_1001c090(&DAT_100a3a40,s_flash_beam_1007854c);
  if (iVar1 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(DAT_100a3ab0 + iVar1 * 4);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  if (iVar2 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(DAT_100a3ab0 + iVar2 * 4);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  if (iVar3 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(DAT_100a3ab0 + iVar3 * 4);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(int *)(param_1 + 0x20) = iVar1 * 0x10 + DAT_100a3ab4;
  piVar5 = (int *)(iVar2 * 0x10 + DAT_100a3ab4);
  *(int **)(param_1 + 0x24) = piVar5;
  *(int *)(param_1 + 0x28) = iVar3 * 0x10 + DAT_100a3ab4;
  *(int *)(param_1 + 0x3c) = piVar5[1] - *piVar5;
  return 1;
}

