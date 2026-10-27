
void __fastcall FUN_100901d0(int param_1)

{
  int iVar1;
  
  (*DAT_10121efc)(2,s_Cancelling_script___s_10116124,
                  *(int *)(param_1 + 0x310) + *(int *)(DAT_10122044 + 0x98));
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1cc);
  if (iVar1 != 0) {
    for (iVar1 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar1)); iVar1 != 0;
        iVar1 = FUN_100af030(iVar1,(byte *)(*(int *)(*(int *)(param_1 + 4) + 0x1cc) +
                                           *(int *)(DAT_10122044 + 0x98)))) {
      FUN_10090060(*(int *)(*(int *)(iVar1 + 4) + 0x208));
    }
    return;
  }
  FUN_10090060(*(int *)(*(int *)(param_1 + 4) + 0x208));
  return;
}

