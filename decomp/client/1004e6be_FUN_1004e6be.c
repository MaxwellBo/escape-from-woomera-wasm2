
void FUN_1004e6be(void)

{
  char in_AL;
  undefined1 uVar1;
  char extraout_CL;
  int unaff_EBX;
  char cVar2;
  
  cVar2 = 0xef < (byte)(in_AL + 0x10U);
  uVar1 = func_0x0c14ebb3();
  out(4,uVar1);
  *(char *)(unaff_EBX + 0x5f5e0845) = *(char *)(unaff_EBX + 0x5f5e0845) + extraout_CL + cVar2;
  return;
}

