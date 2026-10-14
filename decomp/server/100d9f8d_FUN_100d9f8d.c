
void FUN_100d9f8d(void)

{
  size_t sVar1;
  int unaff_EBP;
  
  FUN_100dc594();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_100bacf0((void *)(unaff_EBP + -0x20),'\0');
  sVar1 = _strlen("invalid string position");
  FUN_100bba70((void *)(unaff_EBP + -0x20),(undefined4 *)"invalid string position",sVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_100d9dbb();
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_100fa53c;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_100fac80);
}

