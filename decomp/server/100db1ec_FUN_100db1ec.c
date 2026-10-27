
void FUN_100db1ec(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_100dc594();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = (int)&PTR_FUN_100fa5c0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (extraout_ECX[0xc] < 0) {
    FUN_100db550((LPCRITICAL_SECTION)(extraout_ECX + 0xd));
  }
  if (extraout_ECX[0x14] == 0) {
    FUN_100db3fb((int)extraout_ECX);
  }
  else {
    FUN_100db243(extraout_ECX);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_100dbf99(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

