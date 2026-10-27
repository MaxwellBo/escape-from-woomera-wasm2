
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001d780(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)(*DAT_10121eec)(s_mp_consistency_10105f8c);
  if (fVar1 != (float10)_DAT_100dd618) {
    return 0;
  }
  FUN_100c8506(param_3,(byte *)s_Server_is_enforcing_file_consist_10105f5c);
  return 1;
}

