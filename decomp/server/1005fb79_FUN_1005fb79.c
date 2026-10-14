
undefined4 __fastcall FUN_1005fb79(int param_1)

{
  uint in_EAX;
  char unaff_BL;
  int unaff_EBP;
  
  *(char *)(unaff_EBP + -5) =
       *(char *)(unaff_EBP + -5) + unaff_BL + (0xfa04c4ef < (in_EAX & 0x251005fb));
  if ((*(int *)(param_1 + 0x1e0) != 4) && (*(int *)(param_1 + 0x1e0) != 2)) {
    return 1;
  }
  return 0;
}

