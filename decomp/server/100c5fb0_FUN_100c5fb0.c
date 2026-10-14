
void FUN_100c5fb0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(100);
  if (puVar1 != (undefined4 *)0x0) {
    DAT_10132cc4 = FUN_100c7670(puVar1);
    FUN_100c75c0(&DAT_10132c98,s_Dingaling_wav_1011d0ac);
    return;
  }
  DAT_10132cc4 = (undefined4 *)0x0;
  FUN_100c75c0(&DAT_10132c98,s_Dingaling_wav_1011d0ac);
  return;
}

