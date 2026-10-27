
undefined4 * FUN_100d9ea2(void)

{
  undefined4 *this;
  undefined1 uVar1;
  int iVar2;
  undefined4 *this_00;
  int unaff_EBP;
  
  FUN_100dc594();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x10) = this_00;
  FUN_100dc458(this_00,iVar2);
  uVar1 = *(undefined1 *)(iVar2 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this = this_00 + 3;
  *(undefined1 *)this = uVar1;
  FUN_100bacf0(this,'\0');
  FUN_100ba9a0(this,(void *)(iVar2 + 0xc),0,DAT_100f7054);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *this_00 = &PTR_FUN_100fa52c;
  return this_00;
}

