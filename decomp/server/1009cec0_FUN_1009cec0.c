
int __thiscall FUN_1009cec0(void *this,byte *param_1)

{
  uint uVar1;
  void *extraout_ECX;
  int iVar2;
  byte *pbVar3;
  
  if (((param_1 != (byte *)0x0) && (*param_1 != 0)) && (iVar2 = 0, 0 < DAT_101312f0)) {
    pbVar3 = (byte *)&DAT_10131068;
    do {
      uVar1 = FUN_100d8b20(this,pbVar3,param_1);
      if (uVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pbVar3 = pbVar3 + 0x10;
      this = extraout_ECX;
    } while (iVar2 < DAT_101312f0);
  }
  return -1;
}

