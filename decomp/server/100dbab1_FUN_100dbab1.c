
int * FUN_100dbab1(void)

{
  int *this;
  int unaff_EBP;
  
  FUN_100dc594();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int **)(unaff_EBP + -0x14) = this;
  if (*(int *)(unaff_EBP + 8) != 0) {
    *this = (int)&DAT_100fa604;
    FUN_100dab6a(this + 3);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  FUN_100db566(this,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(*(int *)(*this + 4) + (int)this) = &PTR_FUN_100fa600;
  return this;
}

