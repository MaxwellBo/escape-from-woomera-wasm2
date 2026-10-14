
void __fastcall FUN_10049ed0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x374) != -1) {
    iVar1 = FUN_1004a210(param_1);
    if (iVar1 != 0) {
      FUN_100945d0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                   (&PTR_s_HG_GREN_1010e020)[*(int *)(param_1 + 0x374)]);
      FUN_1004a250(param_1);
    }
  }
  return;
}

