
undefined4 __fastcall FUN_1001fad0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_1001c530(&DAT_100a3a40,param_1);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  *(undefined4 *)(param_1 + 0xc9c) = 0;
  *(undefined4 *)(param_1 + 0x950) = 0;
  *(undefined4 *)(param_1 + 0xca0) = 0;
  *(undefined4 *)(param_1 + 0xca4) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x20);
  for (iVar2 = 0x4b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x150);
  for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = (*DAT_100a5028)(s_cl_drawnames_10078afc,&DAT_10077a04,1);
  *(undefined4 *)(param_1 + 0x970) = uVar1;
  (*DAT_100a5034)(s_specmode_10078af0,FUN_1001fa70);
  return 1;
}

