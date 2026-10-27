
undefined4 * FUN_100db1a4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_100dc594();
  *(undefined4 **)(unaff_EBP + -0x10) = this;
  FUN_100dbedb(this);
  iVar1 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *this = &PTR_FUN_100fa5c0;
  FUN_100db4d6(this,*(int *)(unaff_EBP + 0xc),iVar1);
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  this[0x14] = 0;
  this[0x13] = uVar2;
  return this;
}

