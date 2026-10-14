
undefined4 __fastcall FUN_1001b1f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = FUN_1001c090(&DAT_100a3a40,s_dmg_bio_100785e0);
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  iVar1 = FUN_1001c090(&DAT_100a3a40,s_cross_100785d8);
  *(int *)(param_1 + 0x1c) = iVar1;
  piVar2 = (int *)(*(int *)(param_1 + 0x18) * 0x10 + DAT_100a3ab4);
  DAT_100a9578 = piVar2[1] - *piVar2;
  iVar1 = *(int *)(param_1 + 0x18) * 0x10 + DAT_100a3ab4;
  DAT_100a957c = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8);
  return 1;
}

