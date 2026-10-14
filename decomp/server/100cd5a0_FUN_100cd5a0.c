
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_100cd5a0(undefined4 param_1)

{
  int iVar1;
  char extraout_CH;
  char extraout_CH_00;
  char cVar2;
  byte extraout_DL;
  byte extraout_DL_00;
  byte bVar3;
  int unaff_EBP;
  float10 fVar4;
  float10 in_ST1;
  unkbyte10 extraout_ST1;
  unkbyte10 extraout_ST1_00;
  unkbyte10 Var5;
  float10 extraout_ST1_01;
  
  *(undefined1 *)(unaff_EBP + -0x90) = 0xfe;
  if ((char)((uint)param_1 >> 8) != '\0') {
    iVar1 = func_0x100cd741();
    if (iVar1 == 0) {
      fVar4 = _DAT_1011e2a0;
      if (*(char *)(unaff_EBP + -0x90) < '\x01') {
        *(undefined1 *)(unaff_EBP + -0x90) = 1;
      }
      return fVar4;
    }
    in_ST1 = ABS(extraout_ST1_01);
  }
  log2(in_ST1);
  fVar4 = (float10)func_0x100cd6fe();
  fVar4 = (float10)1 + fVar4;
  cVar2 = extraout_CH;
  bVar3 = extraout_DL;
  Var5 = extraout_ST1;
  if ((*(byte *)(unaff_EBP + -0x9f) & 1) != 0) {
    if (DAT_10134974 == 1) {
      fVar4 = (float10)func_0x100cc551();
      cVar2 = extraout_CH_00;
      bVar3 = extraout_DL_00;
      Var5 = extraout_ST1_00;
    }
    else {
      fVar4 = (float10)1 / fVar4;
    }
  }
  if ((bVar3 & 0x40) == 0) {
    fVar4 = (float10)fscale(fVar4,Var5);
  }
  if (cVar2 != '\0') {
    fVar4 = -fVar4;
  }
  return fVar4;
}

