
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10033a50(int param_1)

{
  float10 fVar1;
  
  (*DAT_100a5040)(param_1 + 4);
  if (*(int *)(param_1 + 0x104) == 0) {
    FUN_1003c9a0(DAT_100a5178);
  }
  else {
    FUN_1003d4b0((int)DAT_100a5178);
  }
  fVar1 = (float10)(*DAT_100a502c)(s_hud_classautokill_10078640);
  if ((fVar1 != (float10)_DAT_10059a18) && (DAT_100b6620 != 0)) {
    (*DAT_100a5040)(&DAT_10079c70);
  }
  return;
}

