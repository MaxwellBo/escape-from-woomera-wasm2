
undefined4 FUN_1004f760(void)

{
  int in_EAX;
  ushort in_FPUStatusWord;
  undefined4 unaff_retaddr;
  
  DAT_7f800000 = DAT_7f800000 | (byte)((uint)in_EAX >> 8);
  if (in_EAX == 0x7f800000) {
    return unaff_retaddr;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    func_0x1004f649();
    return unaff_retaddr;
  }
  func_0x1004f649();
  return unaff_retaddr;
}

