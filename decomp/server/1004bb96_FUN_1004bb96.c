
void __fastcall FUN_1004bb96(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  code *pcVar2;
  char unaff_BL;
  int unaff_ESI;
  char in_CF;
  
  pcVar1 = (char *)(CONCAT31((int3)((uint)param_2 >> 8),4) + -0x46);
  *pcVar1 = *pcVar1 + unaff_BL + in_CF;
  bRam9f7e2008 = bRam9f7e2008 | 0x10;
  *(char *)(unaff_ESI + -0x70) = *(char *)(unaff_ESI + -0x70) + -4;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}

