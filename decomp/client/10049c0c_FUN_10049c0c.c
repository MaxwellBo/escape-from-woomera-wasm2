
undefined4 __cdecl FUN_10049c0c(undefined4 param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_10049b81();
  pbVar1 = (byte *)FUN_1004ce30(DAT_100be198);
  if (pbVar1 < DAT_100be194 + (4 - (int)DAT_100be198)) {
    SVar2 = FUN_1004ce30(DAT_100be198);
    pbVar1 = FUN_1004cb01(DAT_100be198,(uint *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_10049c81;
    }
    DAT_100be194 = pbVar1 + ((int)DAT_100be194 - (int)DAT_100be198 >> 2) * 4;
    DAT_100be198 = pbVar1;
  }
  *(undefined4 *)DAT_100be194 = param_1;
  DAT_100be194 = DAT_100be194 + 4;
LAB_10049c81:
  FUN_10049b8a();
  return param_1;
}

