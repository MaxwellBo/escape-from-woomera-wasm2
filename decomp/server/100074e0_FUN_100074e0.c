
void __fastcall FUN_100074e0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1d4) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e8);
  iVar1 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar1 + 0x1a0) & 2) != 0) {
    (*DAT_10121efc)(1,s_DEBUG__info_alias__s_now_refers_t_10101f60,
                    *(int *)(iVar1 + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                    *(int *)(iVar1 + 0x1d4) + *(int *)(DAT_10122044 + 0x98));
  }
  return;
}

