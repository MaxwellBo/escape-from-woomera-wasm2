
void __fastcall FUN_10074ca0(int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(*(int *)(param_1 + 4) + 0x1e8);
  if (pvVar1 != (void *)0x0) {
    FUN_10094b20(pvVar1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),6,
                 (char *)(*(int *)(DAT_10122044 + 0x98) + (int)pvVar1),0,0,0x20,100);
  }
  pvVar1 = *(void **)(*(int *)(param_1 + 4) + 0x1ec);
  if (pvVar1 != (void *)0x0) {
    FUN_10094b20(pvVar1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),1,
                 (char *)(*(int *)(DAT_10122044 + 0x98) + (int)pvVar1),
                 *(undefined4 *)(param_1 + 0x160),0x3f4ccccd,0,100);
  }
  *(undefined4 *)(param_1 + 0xdc) = 1;
  return;
}

