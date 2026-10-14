
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_10051520(char param_1)

{
  int *unaff_EBP;
  float10 fVar1;
  unkbyte10 in_ST0;
  float10 in_ST1;
  
  if (param_1 == '\0') {
    fVar1 = (float10)log2(in_ST0);
    return in_ST1 * fVar1;
  }
  fVar1 = _DAT_1007c230;
  if (*(char *)(*unaff_EBP + -0x90) < '\x01') {
    *(undefined1 *)(*unaff_EBP + -0x90) = 1;
  }
  return fVar1;
}

