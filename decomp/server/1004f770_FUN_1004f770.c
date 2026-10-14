
undefined4 FUN_1004f770(short param_1)

{
  short *psVar1;
  
  psVar1 = &DAT_1010ee88;
  do {
    if (*psVar1 == param_1) {
      return 1;
    }
    psVar1 = psVar1 + 1;
  } while (psVar1 < &DAT_1010ee90);
  (*DAT_10121efc)(2,s_Couldn_t_validate_hint_type_101040e4);
  return 0;
}

