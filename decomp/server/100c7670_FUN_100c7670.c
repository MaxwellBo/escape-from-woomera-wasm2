
undefined4 * __fastcall FUN_100c7670(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_100c7590(param_1);
  iVar1 = 4;
  puVar2 = param_1 + 4;
  do {
    FUN_100c7590(puVar2);
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  param_1[0x14] = 0x42f00000;
  param_1[0x15] = 0x40a00000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_100c75c0(param_1,s_Ann_RAR_124_wav_1011d410);
  FUN_100c75c0(param_1 + 4,s_Ann_HAM_103_wav_1011d400);
  FUN_100c75c0(param_1 + 8,s_Ann_TRE_046_wav_1011d3f0);
  FUN_100c75c0(param_1 + 0xc,s_Ann_PHA_216_wav_1011d3e0);
  FUN_100c75c0(param_1 + 0x10,s_callToPrayer_wav_1011d3cc);
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}

