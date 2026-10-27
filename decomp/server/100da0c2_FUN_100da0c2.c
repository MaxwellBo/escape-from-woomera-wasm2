
void FUN_100da0c2(void)

{
  void *this;
  int unaff_EBP;
  
  FUN_100dc594();
  this = operator_new(0x54);
  *(void **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this != (void *)0x0) {
    FUN_100db185(this,1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_100da8d9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

