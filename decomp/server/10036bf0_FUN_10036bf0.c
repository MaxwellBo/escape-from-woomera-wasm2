
undefined ** __cdecl FUN_10036bf0(undefined4 param_1,undefined4 *param_2)

{
  switch(param_1) {
  case 0:
  case 6:
  case 7:
    *param_2 = 3;
    return &PTR_s_debris_glass1_wav_101088ac;
  case 1:
    *param_2 = 3;
    return &PTR_s_debris_wood1_wav_10108870;
  case 2:
    *param_2 = 3;
    return &PTR_s_debris_metal1_wav_10108894;
  case 3:
    *param_2 = 6;
    return &PTR_s_debris_flesh1_wav_1010887c;
  case 4:
  case 8:
    *param_2 = 3;
    return &PTR_s_debris_concrete1_wav_101088a0;
  default:
    *param_2 = 0;
    return (undefined **)0x0;
  }
}

