
void __fastcall FUN_100d044e(undefined4 param_1)

{
  char *pcVar1;
  undefined4 in_EAX;
  uint uVar2;
  byte unaff_BL;
  int unaff_ESI;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX + 0xd);
  pcVar1 = (char *)(uVar2 + 4);
  *pcVar1 = *pcVar1 + (char)((uint)param_1 >> 8) + (0xf2 < (byte)in_EAX);
  (&stack0x458b0fed)[uVar2 | 0xd047810] = (&stack0x458b0fed)[uVar2 | 0xd047810] + (char)param_1;
  *(byte *)(unaff_ESI + 0x5f) = *(byte *)(unaff_ESI + 0x5f) | unaff_BL;
  return;
}

