
float10 __thiscall FUN_100c82a6(undefined1 *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  byte *this;
  undefined1 *puVar3;
  uint local_1c [6];
  
  while( true ) {
    if (DAT_1011e234 < 2) {
      uVar1 = (byte)PTR_DAT_1011e028[(uint)*param_2 * 2] & 8;
      param_1 = PTR_DAT_1011e028;
    }
    else {
      puVar3 = &DAT_00000008;
      uVar1 = FUN_100c939e(param_1,(uint)*param_2,8);
      param_1 = puVar3;
    }
    if (uVar1 == 0) break;
    param_2 = param_2 + 1;
  }
  this = param_2;
  _strlen((char *)param_2);
  iVar2 = FUN_100ca6ca(this,local_1c,param_2);
  return (float10)*(double *)(iVar2 + 0x10);
}

