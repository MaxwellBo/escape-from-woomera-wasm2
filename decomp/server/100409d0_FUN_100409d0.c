
void __fastcall FUN_100409d0(int *param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  (**(code **)(*param_1 + 8))(0);
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  FUN_100afdc0(param_1[1],&DAT_10121dd8,&DAT_10121dd8);
  *(uint *)(param_1[1] + 0x118) = *(uint *)(param_1[1] + 0x118) | 0x80;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x50) = DAT_10121dd8;
  *(undefined4 *)(iVar1 + 0x54) = DAT_10121ddc;
  *(undefined4 *)(iVar1 + 0x58) = DAT_10121de0;
  return;
}

