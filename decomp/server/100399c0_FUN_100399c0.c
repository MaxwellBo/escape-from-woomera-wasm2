
void __fastcall FUN_100399c0(int param_1)

{
  int iVar1;
  
  FUN_1003afb0(param_1);
  FUN_10019680(param_1);
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x5c) = DAT_10121dd8;
  *(undefined4 *)(iVar1 + 0x60) = DAT_10121ddc;
  *(undefined4 *)(iVar1 + 100) = DAT_10121de0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}

