
void FUN_100573ef(void)

{
  exception *this;
  int unaff_EBP;
  
  FUN_100577a8();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_10066094;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_100424b0(this + 0xc,'\x01');
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

