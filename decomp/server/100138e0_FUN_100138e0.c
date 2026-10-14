
undefined4 FUN_100138e0(short param_1)

{
  short *psVar1;
  
  psVar1 = &DAT_10103d58;
  do {
    if (*psVar1 == param_1) {
      return 1;
    }
    psVar1 = psVar1 + 1;
  } while (psVar1 < &DAT_10103d5a);
  (*DAT_10121efc)(2,s_Couldn_t_validate_hint_type_101040e4);
  return 0;
}

