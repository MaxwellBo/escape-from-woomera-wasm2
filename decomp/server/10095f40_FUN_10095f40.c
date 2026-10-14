
int __cdecl FUN_10095f40(int param_1)

{
  if (DAT_10131058 == 0) {
    return 0;
  }
  if (0x3f < param_1) {
    (*DAT_10121efc)(1,s_SoundPointerForIndex_____Index_t_10117274);
    return 0;
  }
  if (param_1 < 0) {
    (*DAT_10121efc)(1,s_SoundPointerForIndex_____Index_<_1011724c);
    return 0;
  }
  return param_1 * 0x20 + 200 + DAT_10131058;
}

