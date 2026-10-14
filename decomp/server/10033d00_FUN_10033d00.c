
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10033d00(int *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(*DAT_10121f74)(0xc0a00000,0x40a00000);
  _DAT_10107be8 = (float)fVar1;
  fVar1 = (float10)(*DAT_10121f74)(0xc0a00000,0x40a00000);
  _DAT_10107bec = (float)fVar1;
  fVar1 = (float10)(*DAT_10121f74)(0xc0a00000,0x40a00000);
  _DAT_10107bf0 = (float)fVar1;
  FUN_10008570(param_1,(undefined4 *)&DAT_10107be8,1);
  (**(code **)(*param_1 + 8))(0x3e4ccccd);
  return;
}

