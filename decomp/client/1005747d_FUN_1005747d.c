
void FUN_1005747d(void)

{
  size_t sVar1;
  int unaff_EBP;
  
  FUN_100577a8();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_100424b0((void *)(unaff_EBP + -0x20),'\0');
  sVar1 = _strlen("invalid string position");
  FUN_10042900((void *)(unaff_EBP + -0x20),(undefined4 *)"invalid string position",sVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_100572ab();
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_100660a4;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10067198);
}

