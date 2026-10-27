
int * FUN_100daf91(void)

{
  void *pvVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_100dc594();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    *extraout_ECX = (int)&DAT_100fa59c;
    FUN_100dab6a(extraout_ECX + 3);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  pvVar1 = operator_new(0x54);
  *(void **)(unaff_EBP + 0x14) = pvVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (pvVar1 != (void *)0x0) {
    FUN_100db1a4();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_100db5d9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_FUN_100fa598;
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 0x1c + (int)extraout_ECX) = 1;
  return extraout_ECX;
}

