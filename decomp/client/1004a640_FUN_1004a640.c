
float10 __thiscall FUN_1004a640(undefined1 *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  byte *this;
  undefined1 *puVar3;
  uint local_1c [6];
  
  while( true ) {
    if (DAT_1007bcf4 < 2) {
      uVar1 = (byte)PTR_DAT_1007bae8[(uint)*param_2 * 2] & 8;
      param_1 = PTR_DAT_1007bae8;
    }
    else {
      puVar3 = &DAT_00000008;
      uVar1 = FUN_1004b6c6(param_1,(uint)*param_2,8);
      param_1 = puVar3;
    }
    if (uVar1 == 0) break;
    param_2 = param_2 + 1;
  }
  this = param_2;
  _strlen((char *)param_2);
  iVar2 = FUN_1004eb3d(this,local_1c,param_2);
  return (float10)*(double *)(iVar2 + 0x10);
}

