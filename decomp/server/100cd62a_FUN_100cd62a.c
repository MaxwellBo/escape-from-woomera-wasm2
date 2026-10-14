
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_100cd62a(void)

{
  int unaff_EBP;
  float10 fVar1;
  float10 in_ST0;
  
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(in_ST0 < fVar1) << 8 | (ushort)(NAN(in_ST0) || NAN(fVar1)) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 0x41) == 0) {
    fVar1 = (float10)log2(in_ST0);
    return (float10)0.6931471805599453 * fVar1;
  }
  fVar1 = _DAT_1011e2a0;
  if (*(char *)(unaff_EBP + -0x90) < '\x01') {
    *(undefined1 *)(unaff_EBP + -0x90) = 1;
  }
  return fVar1;
}

