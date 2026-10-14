
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004a250(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(*DAT_10121f74)(0x3fc00000,0x40000000);
  _DAT_10131064 = (float)(fVar1 + (float10)*DAT_10122044);
  *(undefined4 *)(param_1 + 0x374) = 0xffffffff;
  return;
}

