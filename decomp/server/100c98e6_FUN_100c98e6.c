
uint __fastcall FUN_100c98e6(int param_1)

{
  undefined2 in_AX;
  byte unaff_BL;
  int unaff_ESI;
  
  *(char *)(param_1 + -0x66f3eff4) = *(char *)(param_1 + -0x66f3eff4) + unaff_BL;
  *(byte *)(param_1 + 0x458b100c) = *(byte *)(param_1 + 0x458b100c) & unaff_BL;
  *(byte *)(unaff_ESI + 0x5f) = *(byte *)(unaff_ESI + 0x5f) | unaff_BL;
  return CONCAT31((int3)(char)((ushort)in_AX >> 8),(char)in_AX) | 0x10;
}

