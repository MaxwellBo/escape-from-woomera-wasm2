
undefined4 __fastcall FUN_1004a9ee(undefined4 param_1,int param_2)

{
  byte in_AL;
  char cVar1;
  int unaff_EBP;
  
  cVar1 = (char)((uint)param_1 >> 8);
  *(char *)(param_2 + -0x55f7effc) = *(char *)(param_2 + -0x55f7effc) + cVar1;
  *(char *)(param_2 + -0x55d3effc) = (*(char *)(param_2 + -0x55d3effc) - cVar1) - (0xef < in_AL);
  return *(undefined4 *)(unaff_EBP + 8);
}

