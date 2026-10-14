
undefined4 __fastcall FUN_1001b150(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  (*DAT_100a5038)(s_Health_100785d0,FUN_1001b110);
  (*DAT_100a5038)(s_Damage_100785c8,FUN_1001b130);
  *(undefined4 *)(param_1 + 0x14) = 100;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  DAT_100a9578 = 0;
  DAT_100a957c = 0;
  puVar2 = (undefined4 *)(param_1 + 0x3c);
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_1001c530(&DAT_100a3a40,param_1);
  return 1;
}

