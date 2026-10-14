
void __fastcall FUN_100736f0(int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1c8);
  if (iVar1 != 0) {
    pvVar2 = (void *)FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar1));
    if (pvVar2 == (void *)0x0) {
      (*DAT_10121efc)(1,s_Dead_end_link__s_10113788,
                      *(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1c8));
    }
    else {
      *(void **)(param_1 + 0xc0) = pvVar2;
      FUN_100739b0(pvVar2,param_1);
    }
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    pvVar2 = (void *)FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                            *(int *)(param_1 + 0xbc)));
    if (pvVar2 != (void *)0x0) {
      *(void **)(param_1 + 200) = pvVar2;
      FUN_100739b0(pvVar2,param_1);
    }
  }
  return;
}

