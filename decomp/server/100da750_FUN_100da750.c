
int * FUN_100da750(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_100dc594();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_100fa568;
    FUN_100dab6a(extraout_ECX + 2);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_FUN_100fa564;
  FUN_100dacdf((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),
               *(int *)(*(int *)(**(int **)(unaff_EBP + 8) + 4) + 4 + (int)*(int **)(unaff_EBP + 8))
              );
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[1] = 0;
  return extraout_ECX;
}

