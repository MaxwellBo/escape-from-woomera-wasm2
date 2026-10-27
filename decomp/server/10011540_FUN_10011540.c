
void __fastcall FUN_10011540(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x50) = DAT_10121dd8;
  *(undefined4 *)(iVar1 + 0x54) = DAT_10121ddc;
  *(undefined4 *)(iVar1 + 0x58) = DAT_10121de0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                  *(int *)(*(int *)(param_1 + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  return;
}

