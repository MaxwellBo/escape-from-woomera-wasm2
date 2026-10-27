
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100172f0(void)

{
  if (DAT_100a3968 != 0) {
    _DAT_100a394c = DAT_100a3968;
    DAT_100a3968 = 0;
    (*DAT_100a5048)(s_common_wpn_hudoff_wav_10077fbc,0x3f800000);
    return;
  }
  (*DAT_100a5040)(s_escape_10077fb4);
  return;
}

