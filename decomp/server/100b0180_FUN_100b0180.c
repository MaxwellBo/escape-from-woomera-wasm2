
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100b0180(int param_1)

{
  float10 fVar1;
  
  if (param_1 != -1) {
    if (param_1 == 0xf7) {
      fVar1 = (float10)(*DAT_10121eec)(s_violence_hblood_1011b1a4);
      if (fVar1 != (float10)_DAT_100dd5f8) {
        return 1;
      }
    }
    else {
      fVar1 = (float10)(*DAT_10121eec)(s_violence_ablood_1011b194);
      if (fVar1 != (float10)_DAT_100dd5f8) {
        return 1;
      }
    }
  }
  return 0;
}

