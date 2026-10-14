
void __fastcall FUN_1004a856(undefined4 param_1,char param_2)

{
  byte *pbVar1;
  byte bVar2;
  int in_EAX;
  byte unaff_BL;
  byte unaff_BH;
  int unaff_EBP;
  int unaff_ESI;
  
  pbVar1 = (byte *)(in_EAX + 4 + unaff_EBP * 4);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  *(char *)(in_EAX + -0x74effb58) =
       *(char *)(in_EAX + -0x74effb58) + param_2 + CARRY1(bVar2,unaff_BH);
  *(byte *)(unaff_ESI + 0x5f) = *(byte *)(unaff_ESI + 0x5f) | unaff_BL;
  return;
}

