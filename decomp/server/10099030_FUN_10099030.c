
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10099030(undefined4 *param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  
  if (param_2 == _DAT_100dd5f8) {
    if ((param_3 == _DAT_100df2b0) && (param_4 == _DAT_100dd5f8)) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0x3f800000;
      return;
    }
    if ((param_3 == _DAT_100ef394) && (param_4 == _DAT_100dd5f8)) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0xbf800000;
      return;
    }
  }
  FUN_100af200(&param_2);
  iVar1 = DAT_10122044;
  *param_1 = *(undefined4 *)(DAT_10122044 + 0x28);
  param_1[1] = *(undefined4 *)(iVar1 + 0x2c);
  param_1[2] = *(undefined4 *)(iVar1 + 0x30);
  return;
}

