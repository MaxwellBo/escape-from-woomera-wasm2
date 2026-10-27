
void __fastcall FUN_1007a1b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x20) = DAT_10121dd8;
  *(undefined4 *)(iVar1 + 0x24) = DAT_10121ddc;
  *(undefined4 *)(iVar1 + 0x28) = DAT_10121de0;
  FUN_10019680(param_1);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0;
  return;
}

