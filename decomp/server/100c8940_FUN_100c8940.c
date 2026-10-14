
undefined4 __cdecl FUN_100c8940(undefined4 param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_100ca08c();
  pbVar1 = (byte *)FUN_100cb82c(DAT_10136220);
  if (pbVar1 < DAT_1013621c + (4 - (int)DAT_10136220)) {
    SVar2 = FUN_100cb82c(DAT_10136220);
    pbVar1 = FUN_100ca1f2(DAT_10136220,(uint *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_100c89b5;
    }
    DAT_1013621c = pbVar1 + ((int)DAT_1013621c - (int)DAT_10136220 >> 2) * 4;
    DAT_10136220 = pbVar1;
  }
  *(undefined4 *)DAT_1013621c = param_1;
  DAT_1013621c = DAT_1013621c + 4;
LAB_100c89b5:
  FUN_100ca095();
  return param_1;
}

