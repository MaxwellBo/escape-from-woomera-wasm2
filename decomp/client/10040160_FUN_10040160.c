
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10040160(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (1 < (int)param_1[0x2b]) {
    (*DAT_100a5084)(s_scr_ofsx_1007aa68,0);
    (*DAT_100a5084)(s_scr_ofsy_1007aa5c,0);
    (*DAT_100a5084)(s_scr_ofsz_1007aa50,0);
  }
  (*DAT_100a50bc)();
  iVar2 = (*DAT_100a50c0)();
  *param_1 = param_1[0x19];
  param_1[1] = param_1[0x1a];
  param_1[2] = param_1[0x1b];
  param_1[3] = param_1[0x20];
  param_1[4] = param_1[0x21];
  param_1[5] = param_1[0x22];
  *(undefined4 *)(iVar2 + 0xb94) = 0;
  uVar1 = DAT_100b6f9c;
  DAT_100b6f9c = 0x3f800000;
  FUN_10040080((int)param_1);
  DAT_100b6f9c = uVar1;
  _DAT_100b6738 = *param_1;
  _DAT_100b673c = param_1[1];
  _DAT_100b6740 = param_1[2];
  DAT_100b6fd8 = param_1[3];
  DAT_100b6fdc = param_1[4];
  DAT_100b6fe0 = param_1[5];
  return;
}

