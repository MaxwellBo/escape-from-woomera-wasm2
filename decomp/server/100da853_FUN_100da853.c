
int * FUN_100da853(void)

{
  int *this;
  int unaff_EBP;
  
  FUN_100dc594();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int **)(unaff_EBP + -0x14) = this;
  if (*(int *)(unaff_EBP + 8) != 0) {
    *this = (int)&DAT_100fa578;
    FUN_100dab6a(this + 2);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  FUN_100da68a(this,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(*(int *)(*this + 4) + (int)this) = &PTR_FUN_100fa574;
  return this;
}

