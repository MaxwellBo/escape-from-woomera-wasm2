
void __fastcall FUN_100773d9(int param_1)

{
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  *(undefined4 *)(param_1 + 0x1f8) = unaff_EDI;
  FUN_100638f0(unaff_ESI,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
  if ((*(uint *)(*(int *)(unaff_ESI + 4) + 0x1a0) & 0x800000) == 0) {
    FUN_10063ac0(unaff_ESI,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
  }
  FUN_10077570(unaff_ESI);
  *(undefined4 *)(unaff_ESI + 0x74) = unaff_EDI;
  return;
}

