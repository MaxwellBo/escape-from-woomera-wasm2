
float10 FUN_100cd5b1(void)

{
  char extraout_CH;
  char extraout_CH_00;
  char cVar1;
  byte extraout_DL;
  byte extraout_DL_00;
  byte bVar2;
  int unaff_EBP;
  float10 fVar3;
  unkbyte10 extraout_ST1;
  unkbyte10 extraout_ST1_00;
  unkbyte10 Var4;
  
  *(undefined1 *)(unaff_EBP + -0x90) = 0xfe;
  fVar3 = (float10)func_0x100cd6fe();
  fVar3 = (float10)1 + fVar3;
  cVar1 = extraout_CH;
  bVar2 = extraout_DL;
  Var4 = extraout_ST1;
  if ((*(byte *)(unaff_EBP + -0x9f) & 1) != 0) {
    if (DAT_10134974 == 1) {
      fVar3 = (float10)func_0x100cc551();
      cVar1 = extraout_CH_00;
      bVar2 = extraout_DL_00;
      Var4 = extraout_ST1_00;
    }
    else {
      fVar3 = (float10)1 / fVar3;
    }
  }
  if ((bVar2 & 0x40) == 0) {
    fVar3 = (float10)fscale(fVar3,Var4);
  }
  if (cVar1 != '\0') {
    fVar3 = -fVar3;
  }
  return fVar3;
}

