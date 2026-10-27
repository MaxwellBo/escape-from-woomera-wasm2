
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_100ae6f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = _DAT_10131b60;
  param_1[1] = DAT_10131b64;
  _DAT_10131b60 = param_2;
  DAT_10131b64 = param_3;
  (*DAT_10122024)(param_2,param_3);
  return param_1;
}

