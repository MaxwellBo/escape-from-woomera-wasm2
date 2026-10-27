
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100b2c20(undefined4 param_1,int param_2,float param_3,uint param_4)

{
  if (param_2 != 0) {
    DAT_10131d00 = DAT_10131d00 | param_4;
    if (param_2 != DAT_10131cf8) {
      FUN_100b2bf0(param_1,param_1);
      DAT_10131cf8 = param_2;
      DAT_10131cfc = _DAT_100dd5f8 + param_3;
      return;
    }
    DAT_10131cfc = DAT_10131cfc + param_3;
  }
  return;
}

