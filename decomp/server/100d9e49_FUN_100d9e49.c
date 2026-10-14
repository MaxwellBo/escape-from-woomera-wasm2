
void FUN_100d9e49(void)

{
  exception *this;
  int unaff_EBP;
  
  FUN_100dc594();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_100fa52c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_100bacf0(this + 0xc,'\x01');
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

