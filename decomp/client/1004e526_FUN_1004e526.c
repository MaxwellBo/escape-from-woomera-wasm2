
undefined4 __fastcall FUN_1004e526(byte param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  int iVar4;
  int unaff_EBP;
  byte bVar3;
  
  iVar4 = in(4);
  pbVar1 = (byte *)(unaff_EBP + 4);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = bVar3 + param_1 + (0xef < in_AL);
  *(char *)(iVar4 + -0x1b) =
       *(char *)(iVar4 + -0x1b) + (char)((uint)iVar4 >> 8) +
       (CARRY1(bVar2,param_1) || CARRY1(bVar3 + param_1,0xef < in_AL));
  return *(undefined4 *)(unaff_EBP + 8);
}

