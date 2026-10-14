
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100b37c0(float param_1,float param_2,int param_3)

{
  if (param_3 == 0) {
    if (param_1 <= param_2) {
      return 1;
    }
  }
  else if (param_1 <= (float)_DAT_100de1e8) {
    return 1;
  }
  return 0;
}

