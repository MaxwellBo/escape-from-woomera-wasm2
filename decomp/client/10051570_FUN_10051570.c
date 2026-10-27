
undefined4 FUN_10051570(void)

{
  float10 fVar1;
  int unaff_EBP;
  float10 in_ST0;
  undefined4 unaff_retaddr;
  
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(in_ST0 < fVar1) << 8 | (ushort)(NAN(in_ST0) || NAN(fVar1)) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 1) == 0) {
    return unaff_retaddr;
  }
  *(undefined1 *)(unaff_EBP + -0x90) = 4;
  return unaff_retaddr;
}

