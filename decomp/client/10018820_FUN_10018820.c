
undefined4 __fastcall FUN_10018820(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_1001c090(&DAT_100a3a40,s_suit_empty_10078004);
  iVar2 = FUN_1001c090(&DAT_100a3a40,s_suit_full_10077ff8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar3 = iVar1 * 0x10 + DAT_100a3ab4;
  *(int *)(param_1 + 0x1c) = iVar3;
  iVar1 = iVar2 * 0x10 + DAT_100a3ab4;
  *(int *)(param_1 + 0x20) = iVar1;
  iVar1 = *(int *)(iVar1 + 0xc);
  iVar2 = *(int *)(iVar3 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x2c) = iVar1 - iVar2;
  return 1;
}

