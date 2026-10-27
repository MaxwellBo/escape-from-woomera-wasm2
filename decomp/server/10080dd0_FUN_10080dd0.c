
int __thiscall FUN_10080dd0(void *this,byte *param_1)

{
  uint uVar1;
  void *extraout_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != (byte *)0x0) {
    iVar3 = 1;
    puVar2 = &DAT_10131d18;
    do {
      if ((byte *)*puVar2 != (byte *)0x0) {
        uVar1 = FUN_100d8b20(this,param_1,(byte *)*puVar2);
        this = extraout_ECX;
        if (uVar1 == 0) {
          return iVar3;
        }
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while ((int)puVar2 < 0x10131e10);
  }
  return -1;
}

