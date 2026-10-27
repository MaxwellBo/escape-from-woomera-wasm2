
void __fastcall FUN_10083210(int *param_1)

{
  int iVar1;
  
  FUN_100afe10((int)param_1,param_1[1] + 8);
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x118) = 0x80;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x74) = DAT_10121dd8;
  *(undefined4 *)(iVar1 + 0x78) = DAT_10121ddc;
  *(undefined4 *)(iVar1 + 0x7c) = DAT_10121de0;
  (**(code **)(*param_1 + 8))(0x40000000);
  return;
}

